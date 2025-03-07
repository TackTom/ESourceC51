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
 * @file      button4x4.h
 * 
 * @brief     片外驱动：4x4按键驱动头文件
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
#ifndef __BUTTON4X4_H
#define __BUTTON4X4_H


#include "user_config_prj.h"

#ifdef KEY4X4_CONFIG

#include "es_sys_package.h"
/* ------------------------------------------------------------------------------------------------------------------ */
#define GPIO_KEY            P0

u8 KeyDown(void);

/* ------------------------------------------------------------------------------------------------------------------ */
#endif /* KEY4X4_CONFIG */

#endif /* __BUTTON4X4_H */
