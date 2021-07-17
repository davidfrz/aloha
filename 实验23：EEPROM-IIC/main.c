/**************************************************************************************
*		              EEPROM-IIC实验												  *
实现现象：具体接线操作请看视频。
		  下载程序后数码管后4位显示0，按K1保存显示的数据，按K2读取上次保存的数据，
		  按K3显示数据加一，按K4显示数据清零。最大能写入的数据是255.
		  
注意事项：由于P3.2口跟红外线共用，所以做按键实验时为了不让红外线影响实验效果，最好把红外线先取下来。																				  
***************************************************************************************/

#include "reg52.h"			 //此文件中定义了单片机的一些特殊功能寄存器
#include "i2c.h"	

typedef unsigned int u16;	  //对数据类型进行声明定义
typedef unsigned char u8;

sbit LSA=P2^2;
sbit LSB=P2^3;
sbit LSC=P2^4;

sbit k1=P3^1;
sbit k2=P3^0;
sbit k3=P3^2;
sbit k4=P3^3;	 //定义按键端口

char num=0;
u8 disp[4];
u8 code smgduan[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};

/*******************************************************************************
* 函 数 名         : delay
* 函数功能		   : 延时函数，i=1时，大约延时10us
*******************************************************************************/
void delay(u16 i)
{
	while(i--);	
}


/*******************************************************************************
* 函数名         :Keypros()
* 函数功能		 :按键处理函数
* 输入           : 无
* 输出         	 : 无
*******************************************************************************/
void Keypros()
{
	if(k1==0)
	{
		delay(1000);  //消抖处理
		if(k1==0)
		{
			At24c02Write(1,num);   //在地址1内写入数据num
		}
		while(!k1);
	}
	if(k2==0)
	{
		delay(1000);  //消抖处理
		if(k2==0)
		{
			num=At24c02Read(1);	  //读取EEPROM地址1内的数据保存在num中
		}
		while(!k2);
	}
	if(k3==0)
	{
		delay(100);  //消抖处理
		if(k3==0)
		{
			num++;	   //数据加1
			if(num>255)num=0;
		}
		while(!k3);
	}
	if(k4==0)
	{
		delay(1000);  //消抖处理
		if(k4==0)
		{
			num=0;		 //数据清零
		}
		while(!k4);
	}		
}

/*******************************************************************************
* 函数名         :datapros()
* 函数功能		 :数据处理函数
* 输入           : 无
* 输出         	 : 无
*******************************************************************************/
//void datapros()
//{
//	disp[0]=smgduan[num/1000];//千位
//	disp[1]=smgduan[num%1000/100];//百位
//	disp[2]=smgduan[num%1000%100/10];//个位
//	disp[3]=smgduan[num%1000%100%10];		
//}
//
//
///*******************************************************************************
//* 函数名         :DigDisplay()
//* 函数功能		 :数码管显示函数
//* 输入           : 无
//* 输出         	 : 无
//*******************************************************************************/
//void DigDisplay()
//{
//	u8 i;
//	for(i=0;i<4;i++)
//	{
//		switch(i)	 //位选，选择点亮的数码管，
//		{
//			case(0):
//				LSA=0;LSB=0;LSC=0; break;//显示第0位
//			case(1):
//				LSA=1;LSB=0;LSC=0; break;//显示第1位
//			case(2):
//				LSA=0;LSB=1;LSC=0; break;//显示第2位
//			case(3):
//				LSA=1;LSB=1;LSC=0; break;//显示第3位	
//		}
//		P0=disp[i];//发送数据
//		delay(100); //间隔一段时间扫描	
//		P0=0x00;//消隐
//	}		
//}

/*******************************************************************************
* 函 数 名       : main
* 函数功能		 : 主函数
* 输    入       : 无
* 输    出    	 : 无
*******************************************************************************/
void main()
{	
	while(1)
	{
		Keypros();	 //按键处理函数
		datapros();	 //数据处理函数
		DigDisplay();//数码管显示函数		
	}		
}
//  /*哈哈哈哈哈哈哈哈哈*/
// //*************************************************************
//   ////*****************************************************调试函数
//
//void DebugEepromService(void)
//
//{
//
//unchar debug_buf[255];
//
//debug_buf[0]=0x91;
//
//debug_buf[1]=0x92;
//
//debug_buf[2]=0x93;
//
//debug_buf[3]=0x94;
//
//debug_buf[4]=0x95;
//
//debug_buf[250]=0x05;
//
//debug_buf[251]=0x06;
//
//debug_buf[252]=0x07;
//
//debug_buf[253]=0x08;
//
//debug_buf[254]=0x09;
//
//SeqWriteTo24c256(EEP1_ADDR,1,255,debug_buf);
//
//SeqReadFrom24c256(EEP1_ADDR,1,255,debug_buf);
//
//}
//
//
//#define IIC_SDA_PB 0x20
//
//#define IIC_SCL_PB 0x80
//
//#define IIC_DEL_WAIT 0x10 //>4.7us(12.80us) for Fre=11.0592M
//
//#define IIC_DEL_WRITE 0x2700 //>6ms(7266.54us=7.266ms) for Fre=11.0592M
//
//#define EEP1_ADDR 0xa4
//
//#define PAGE_CAP_BYTE 64 //24C256页写容量:64字节
//
///*
//
//功能函数文件
//
//2005-9-22 9:54 by xth
//
//版本: v1.0
//
//--------------------------------------------
//
//Mcu: mega32 Fr ency: 11.0592M
//
//--------------------------------------------
//
//功能概述:Eeprom操作文件
//
//--------------------------------------------
//
//*/
//
////=============================函数声明
//
////----------IIC操作调用函数
//
//void IicDelayService(unint delay_time);
//
//void IicStartBitSend(void);
//
//void IicStopBitSend(void);
//
//void IicAckService(unchar ack_data);
//
//unchar IicSendByteService(unchar tx_data);
//
//unchar IicAccByteService(void);
//
////----------At24c256
//
//unchar RandWriteByteTo24c256(unchar sla_add,unint addr_op,unchar data_op);
//
//unchar WritePageTo24c256(unchar sla_add,unint addr_op,unchar *write_data_buf);
//
//unchar SeqWriteTo24c256ByPage(unchar sla_add,unint addr_op,unchar write_size,unchar *write_buf);
//
//unchar SeqWriteTo24c256(unchar sla_add,unint addr_op,unchar write_size,unchar *write_buf);
//
//unchar SeqReadFrom24c256(unchar sla_add,unint addr_op,unchar read_size,unchar *read_buf);
//
////=============================函数定义
//
//void IicDelayService(unint delay_count)
//
//{
//
//unint count;
//
//for(count=0;count<delay_count;count++)
//
//asm("NOP");
//
//}
//
//void IicStartBitSend(void)
//
//{
//
//PORTB |= IIC_SCL_PB; //发送起始条件的时钟信号
//
//asm("NOP");
//
//PORTB |= IIC_SDA_PB; //起始条件建立时间大于4.7us,延时
//
//IicDelayService(IIC_DEL_WAIT);
//
//PORTB &= ~IIC_SDA_PB;
//
//IicDelayService(IIC_DEL_WAIT);
//
//PORTB &= ~IIC_SCL_PB; //钳住I2C ，准备发送或接收数据
//
//asm("NOP");
//
//}
//
//void IicStopBitSend(void)
//
//{
//
//PORTB &= ~IIC_SDA_PB;//发送结束条件的时钟信号
//
//IicDelayService(IIC_DEL_WAIT);
//
//PORTB |= IIC_SCL_PB; //结束条件建立时间大于4μs
//
//IicDelayService(IIC_DEL_WAIT);
//
//PORTB |= IIC_SDA_PB;
//
//asm("NOP");
//
//}
//
//void IicAckService(unchar ack_data)
//
//{//作为主控器件应答->发应答或非应答信号
//
//if(ack_data==0) PORTB &= ~IIC_SDA_PB;
//
//else PORTB |= IIC_SDA_PB;
//
//IicDelayService(IIC_DEL_WAIT);
//
//PORTB |= IIC_SCL_PB;
//
//IicDelayService(IIC_DEL_WAIT);
//
//PORTB &= ~IIC_SCL_PB;//清时钟线，钳住I2C总线以便继续接收
//
//asm("NOP");
//
//}
//
//unchar IicSendByteService(unchar tx_data)
//
//{//将字节发送出去,可以是地址,也可以是数据,发完后等待应答并返回
//
//unchar bit_count,ack_flag;
//
//for(bit_count=0;bit_count<8;bit_count++)
//
//{
//
//if((tx_data<<bit_count)&0x80)
//
//PORTB |= IIC_SDA_PB;
//
//else
//
//PORTB &= ~IIC_SDA_PB;
//
//IicDelayService(IIC_DEL_WAIT);
//
//PORTB |= IIC_SCL_PB; //置时钟线为高，通知被控器开始接收数据位
//
//IicDelayService(IIC_DEL_WAIT); //保证时钟高电平周期大于4μs
//
//PORTB &= ~IIC_SCL_PB;
//
//}
//
//IicDelayService(IIC_DEL_WAIT);
//
//PORTB &= ~IIC_SDA_PB;
//
//DDRB &= ~IIC_SDA_PB; //SDA置成输入
//
//asm("NOP");
//
//PORTB |= IIC_SCL_PB;
//
//IicDelayService(IIC_DEL_WAIT);
//
//IicDelayService(IIC_DEL_WAIT);
//
//if(PINB&IIC_SDA_PB) //判断是否接收到应答信号
//
//ack_flag=NO;
//
//else
//
//ack_flag=YES; //有应答信号
//
//DDRB |= IIC_SDA_PB;
//
//PORTB &= ~IIC_SCL_PB;
//
//asm("NOP");
//
//return(ack_flag);
//
//}
//
//unchar IicAccByteService(void)
//
//{//接收从器件传来的数据,并判断总线错误
//
//unchar bit_count,get_data;
//
//DDRB &= ~IIC_SDA_PB;
//
//get_data=0;
//
//for(bit_count=0;bit_count<8;bit_count++)
//
//{
//
//asm("NOP");
//
//PORTB &= ~IIC_SCL_PB; //置时钟线为低，准备接收数据位
//
//IicDelayService(IIC_DEL_WAIT); //时钟低电平周期大于4.7μs;
//
//PORTB |= IIC_SCL_PB; //置时钟线为高使数据线上数据有效
//
//get_data<<=1;
//
//if(PINB&IIC_SDA_PB)
//
//get_data++;
//
//asm("NOP");
//
//asm("NOP");
//
//}
//
//PORTB &= ~IIC_SCL_PB;
//
//DDRB |= IIC_SDA_PB;
//
//asm("NOP");
//
//return(get_data);
//
//}
//
//unchar RandWriteByteTo24c256(unchar sla_add,unint addr_op,unchar data_op)
//
//{
//
//unchar result_now,temp_data;
//
//IicStartBitSend(); //起始条件
//
//temp_data=sla_add; //从器件地址
//
//result_now=IicSendByteService(temp_data);
//
//if(result_now==NO) return(result_now);
//
//temp_data=addr_op>>8; //操作单元地址高8位
//
//result_now=IicSendByteService(temp_data);
//
//if(result_now==NO) return(result_now);
//
//temp_data=addr_op; //操作单元地址低8位
//
//result_now=IicSendByteService(temp_data);
//
//if(result_now==NO) return(result_now);
//
//temp_data=data_op; //操作数据
//
//result_now=IicSendByteService(temp_data);
//
//if(result_now==NO) return(result_now);
//
//IicStopBitSend(); //停止条件
//
//IicDelayService(IIC_DEL_WRITE);
//
//result_now=YES;
//
//return(result_now);
//
//}
//
//unchar SeqReadFrom24c256(unchar sla_add,unint addr_op,unchar read_size,unchar *read_buf)
//
//{//addr “roll over” during read:from last byte of the last page, to the first byte of the first page
//
//unchar result_now,temp_data,read_count;
//
//IicStartBitSend(); //起始条件
//
//temp_data=sla_add; //从器件地址
//
//result_now=IicSendByteService(temp_data);
//
//if(result_now==NO) return(result_now);
//
//temp_data=addr_op>>8; //操作单元地址高8位
//
//result_now=IicSendByteService(temp_data);
//
//if(result_now==NO) return(result_now);
//
//temp_data=addr_op; //操作单元地址低8位
//
//result_now=IicSendByteService(temp_data);
//
//if(result_now==NO) return(result_now);
//
//IicStartBitSend();
//
//temp_data=sla_add+1; //读操作
//
//result_now=IicSendByteService(temp_data);
//
//if(result_now==NO) return(result_now);
//
//for(read_count=0;read_count<read_size-1;read_count++)
//
//{ //连续读数据
//
//*(read_buf+read_count)=IicAccByteService();
//
//IicAckService(NO);
//
//}
//
//*(read_buf+read_count)=IicAccByteService();
//
//IicAckService(YES);
//
//IicStopBitSend();
//
//result_now=YES;
//
//return(result_now);
//
//}
//
//unchar WritePageTo24c256(unchar sla_add,unint addr_op,unchar *write_data_buf)
//
//{//页写
//
//unchar count,result_now,temp_data;
//
//IicStartBitSend(); //起始条件
//
//temp_data=sla_add; //从器件地址
//
//result_now=IicSendByteService(temp_data);
//
//if(result_now==NO) return(result_now);
//
//temp_data=addr_op>>8; //操作单元地址高8位
//
//result_now=IicSendByteService(temp_data);
//
//if(result_now==NO) return(result_now);
//
//temp_data=addr_op; //操作单元地址低8位
//
//result_now=IicSendByteService(temp_data);
//
//if(result_now==NO) return(result_now);
//
//for(count=0;count<PAGE_CAP_BYTE;count++)
//
//{//连续写
//
//temp_data=*(write_data_buf+count);
//
//result_now=IicSendByteService(temp_data);
//
//if(result_now==NO) return(result_now);
//
//}
//
//IicStopBitSend(); //停止条件
//
//IicDelayService(IIC_DEL_WRITE);
//
//result_now=YES;
//
//return(result_now);
//
//}
//
//unchar SeqWriteTo24c256ByPage(unchar sla_add,unint addr_op,unchar write_size,unchar *write_buf)
//
//{//addr “roll over” during write:from last byte of the current page to first byte of the same page.
//
//unint page_write,read_addr,temp_op_int;
//
//unchar data_count,result_out,modify_count,count,write_data_buf[PAGE_CAP_BYTE];
//
//result_out=YES;
//
//data_count=0;
//
//while(write_size>0)
//
//{
//
//page_write=addr_op/PAGE_CAP_BYTE; //得到当前页
//
//read_addr=page_write*PAGE_CAP_BYTE;
//
//SeqReadFrom24c256(sla_add,read_addr,PAGE_CAP_BYTE,write_data_buf);
//
//temp_op_int=addr_op&(PAGE_CAP_BYTE-1); //得到在页内的起始字节地址
//
//if(temp_op_int+write_size>=PAGE_CAP_BYTE)
//
//{
//
//modify_count=PAGE_CAP_BYTE;
//
//addr_op=(page_write+1)*PAGE_CAP_BYTE; //写下一页的起始地址
//
//}
//
//else
//
//modify_count=write_size;
//
//count=temp_op_int;
//
//write_size=write_size-modify_count+count; //写下一页的数据量
//
//for(;count<modify_count;count++,data_count++)
//
//write_data_buf[count]=*(write_buf+data_count);
//
//result_out=WritePageTo24c256(sla_add,read_addr,write_data_buf);
//
//}
//
//return(result_out);
//
//}
//
//unchar SeqWriteTo24c256(unchar sla_add,unint addr_op,unchar write_size,unchar *write_buf)
//
//{//连续写(非页写)
//
//unchar write_result;
//
//if(write_size<3)
//
//{//如果要写入的数据小于3个,则用随机写实现
//
//write_result=RandWriteByteTo24c256(sla_add,addr_op,*write_buf);
//
//write_result=RandWriteByteTo24c256(sla_add,addr_op+1,*(write_buf+1));
//
//}
//
//else
//
//write_result=SeqWriteTo24c256ByPage(sla_add,addr_op,write_size,write_buf);
//
//return(write_result);
//
//}
//
//
