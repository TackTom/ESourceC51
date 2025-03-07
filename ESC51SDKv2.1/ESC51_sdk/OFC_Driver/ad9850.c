/***********************************************************************************************************************
 *                                                      ESourceOpen
 *                                           -----------------------------------
 *                                           explore and open  embedded platform
 * 
 * Contact information:
 * e-mail: 1786409879@qq.com / txh17778443952@169.com
 *                                                                                                              
 *                                                                                                              TXHopen
 *                                                                                                         encode:UTF-8
***********************************************************************************************************************/
/**
 * *****************************************************ESourceOPEN*****************************************************
 * @file      ad9850.c
 * 
 * @brief     片外驱动：ad9850模块驱动源码
 * 
 * @version   V0.00.01
 * 
 * @author    TXHopen (3332695529@qq.com)
 * 
 * @date      2021-08-08
 * 
 * @copyright Copyright (c) 2021
 * 
 * *****************************************************ESourceOPEN*****************************************************
 * 
 * *****************************************************ESourceOPEN*****************************************************
 **/
#include "ad9850.h"

#ifdef AD9850_CONFIG




/* ------------------------------------------------------------------------------------------------------------------ */
void ad9850_reset_serial()
{
	AD9850_CLK=0;
	AD9850_UD=0;

	AD9850_REST=0;
	AD9850_REST=1;
	AD9850_REST=0;

	AD9850_CLK=0;
	AD9850_CLK=1;
	AD9850_CLK=0;

	AD9850_UD=0;
	AD9850_UD=1;
	AD9850_UD=0;
}

void ad9850_wr_serial(unsigned char w0,double frequence)
{
	unsigned char i,w;
	long int y;
	double x;

	x=4294967295/125;

	frequence=frequence/1000000;
	frequence=frequence*x;
	y=frequence;

	w=(y>>=0);
	for(i=0;i<8;i++)
	{
		AD9850_DATA=(w>>i)&0x01;
		AD9850_CLK=1;
		AD9850_CLK=0;
	}

	w=(y>>8);
	for(i=0;i<8;i++)
	{
		AD9850_DATA=(w>>i)&0x01;
		AD9850_CLK=1;
		AD9850_CLK=0;
	}

	w=(y>>16);
	for(i=0;i<8;i++)
	{
		AD9850_DATA=(w>>i)&0x01;
		AD9850_CLK=1;
		AD9850_CLK=0;
	}

	w=(y>>24);
	for(i=0;i<8;i++)
	{
		AD9850_DATA=(w>>i)&0x01;
		AD9850_CLK=1;
		AD9850_CLK=0;
	}

	w=w0;   
	for(i=0;i<8;i++)
	{
		AD9850_DATA=(w>>i)&0x01;
		AD9850_CLK=1;
		AD9850_CLK=0;
	}

	AD9850_UD=1;
	AD9850_UD=0;
}

/* ------------------------------------------------------------------------------------------------------------------ */
#endif /* AD9850_CONFIG */

