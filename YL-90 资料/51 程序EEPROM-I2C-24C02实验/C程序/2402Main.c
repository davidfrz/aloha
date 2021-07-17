						   
/********************************************************************************																			    	   
* 【编写时间】： 2011.07.07
* 【作    者】： 雁翎电子
* 【版    本】： V1.0
* 【网    站】： http://ylelectronic.taobao.com/ 
* 【Q      Q】： 348439350
* 【声    明】： 此程序仅用于学习与参考，引用请注明版权和作者信息！
* 【函数功能】： AT24C02实验
* 【晶    振】:  11.0592M		    
* 【硬件连接】： 跳线	选择模块			连接或断开
                 J1		8位数码管模块		连接
				 J2		点阵模块			断开
				 J3		时钟模块			断开
				 J4		8位跑马灯模块		断开
				 J6		蜂鸣器模块			断开
				 J7		继电器模块			断开 		   			            			    
* 【使用说明】：	按下独立按键K1 保存数据     
                    按下独立按键K2 读取数据						   	           
                    按下独立按键K3 数据减1    
                    按下独立按键K4 数据加1  
*******************************************************************************/
/*预处理命令*/
#include<reg52.h>    //包含单片机寄存器的头文件	 
#include<Function.h>
#define uchar unsigned char
#define uint unsigned int

#define  AT24C02 0xa0  //AT24C02 地址

sbit MOSIO=P2^2;	   //移位寄存器-驱动数码管
sbit R_CLKa=P2^3;
sbit S_CLKa=P2^4; 

sbit K1=P3^2;	 //保存
sbit K2=P3^3;	 //读取
sbit K3=P3^4;	 //+数据
sbit K4=P3^5;   //-数据

uchar code duan[]={~0x3F,~0x06,~0x5B,~0x4F,~0x66,~0x6D,~0x7D,~0x07,~0x7F,~0x6F};//此表为LED共阳级数码管段选字模 
uchar code wei[]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};	//此表为LED数码管位选字模

uchar Count1;
unsigned long D[16], LedOut[5],LedNumVal;
uint idata USEC;

void delay(uint i)
{
    char j;
    for(i; i > 0; i--)
        for(j = 200; j > 0; j--);
}  
/***************74HC595驱动数码管程序******************/
void send595(uchar dat)	   //数据输入
{  
	uchar i; 	
	for(i=0;i<8;i++) 
	{
		if((dat<<i)&0x80) 
			MOSIO=1; 
		else MOSIO=0;
		
		S_CLKa=0;
		S_CLKa=1;	
	}	

}
void out595(void)			  // 数据输出
{
	R_CLKa=0;
	R_CLKa=1;	//上升沿
} 
void disp(uchar w,uchar d)	  //数码管显示函数：w-位码，d-段码
{
	send595(wei[w]);
	send595(duan[d]);
	out595();
}
void dispoff()      //关闭共阳数码管
{
	send595(0);
	out595();
	
	send595(0xff);
	out595();
}
/**********************系统初始化*************************/
void  system_ini() 
{    
    TMOD|= 0x11;
    TH1=0xfe; //11.0592
	TL1=0x33;
	TR1=1; 
    IE=0x8A;
}
/**********************主函数**************************/
void main()
{
	uchar i;
	uchar pDat[8];
	dispoff();			//先关闭数码管
	system_ini();
	while(1)
	{
		//========================IIC 读取
		if(K2 == 0)	   //第二个按钮读取数据
		{ 
			IRcvStr(AT24C02, 0 , &pDat[0], 8); 
			for (i=0; i<4; i++)
			{
				D[14+i]=pDat[i*2+0]+pDat[i*2+1]*0x100;
				Count1 = D[14];
			}	     
		}
		
		//========================IIC 保存
		if(K1 == 0)    //第一个按钮保存数据
		{ 
			D[14]= Count1;
			for (i=0; i<4; i++)
			{
				pDat[i*2+0]=D[14+i];
				pDat[i*2+1]=D[14+i]>>8;
			}
			ISendStr(AT24C02, 0 , &pDat[0], 8); 
		}
		
		
		/********以下将2402中保存的数据送到LED数码管显示*************/
		LedNumVal=Count1;
		LedOut[0]=LedNumVal%10000/1000;
		LedOut[1]=LedNumVal%1000/100;
		LedOut[2]=LedNumVal%100/10;
		LedOut[3]=LedNumVal%10; 
		
		for(i=0; i<4; i++) 
		{		
			disp(i,LedOut[i]);
			delay(150);
		}	
	}
} 

/*************************************
 [ t1 (0.5ms)中断] 中断中做 PWM 输出
  ------------1000/(0.02ms*250)=200Hz
*************************************/
void T1zd(void) interrupt 3   //3 为定时器1的中断号  1 定时器0的中断号 0 外部中断1 2 外部中断2  4 串口中断
{
	 TH1 = 0xfe; //12M	
	 TL1 = 0x33;
   if(USEC++==200)
   {	USEC=0;
	 
    if (K3) Count1++;     //改变数据
    if (K4&Count1!=0) Count1--;
  
    }  

}


