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
 * @file      LCD1602.h
 * 
 * @brief     片外驱动：LCD1602驱动头文件
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
#ifndef __LCD1602_H
#define __LCD1602_H


#include "user_config_prj.h"

#ifdef LCD1602_CONFIG

#include "es_sys_package.h"
/* ------------------------------------------------------------------------------------------------------------------ */
#define LCD1602_Data        P1
sbit    LCD1602_RS        = P2^0;
sbit    LCD1602_RW        = P2^1;
sbit    LCD1602_EN        = P2^2;


/* ------------------------------------------------------------------------------------------------------------------ */
void LCD1602_ShowByte(uchar x,uchar y,uchar byte);
void LCD1602_ShowStr(uchar x,uchar y,uchar *str);
void LCD1602_ShowLine (uchar *line1, uchar *line2);
void LCD1602_Show_cursor(u8 x, u8 y);
void LCD1602_DisShow_cursor(void);
void LCD1602_Init(void);
void LCD1602_WriteCmd(uchar cmd);
void LCD1602_WriteDat(uchar dat);


/* ------------------------------------------------------------------------------------------------------------------ */
#endif /* LCD1602_CONFIG */

#endif /* __LCD1602_H */
