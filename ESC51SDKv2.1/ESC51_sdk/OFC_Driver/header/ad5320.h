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
 * @file      ad5320.h
 * 
 * @brief     片外驱动：ad5320驱动头文件，包含引脚定义与API
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
#ifndef __AD5320_H
#define __AD5320_H


#include "user_config_prj.h"

#ifdef AD5320_CONFIG

#include "es_sys_package.h"

/* ------------------------------------------------------------------------------------------------------------------ */
sbit SYNC_IN = P2^3;
sbit SCLK_IN = P2^4;
sbit D_IN    = P2^5;

/* ------------------------------------------------------------------------------------------------------------------ */
void DA_AD5320(uint dat);
/* ------------------------------------------------------------------------------------------------------------------ */
#endif /* AD5320_CONFIG */
#endif /* __AD5320_H */
