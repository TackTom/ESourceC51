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
 * @file      pwm.h
 * 
 * @brief     片外驱动：pwm驱动头文件
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
#ifndef __PWM_H
#define __PWM_H


#include "user_config_prj.h"

#ifdef PWM_CONFIG

#include "es_sys_package.h"

/* ------------------------------------------------------------------------------------------------------------------ */
sbit     PWM_OUT = P3^7;




/* ------------------------------------------------------------------------------------------------------------------ */
char PWM_Init (uchar duty);
char PWM_Start (void);
char PWM_Stop (void);
char PWM_SetDUTY (uchar duty);

/* ------------------------------------------------------------------------------------------------------------------ */
#endif /* PWM_CONFIG */

#endif /* __PWM_H */
