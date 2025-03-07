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
 * @file      sw_SoftTimer.h
 * 
 * @brief     软件定时器服务组件头文件，包含软件定时器子对象的结构类型、服务组件API、API宏
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
#ifndef __SW_SOFTTIMER_H
#define __SW_SOFTTIMER_H


#include "user_config_prj.h"

#ifdef SW_SOFTTIMER_CONFIG

#include "es_sys_package.h"


/* ------------------------------------------------------------------------------------------------------------------ */
/* 软件定时器子对象 */

typedef struct _SOFTTimer
{
	uchar  ID;
	uchar  status;
	uint   SoftTimer_obj_ms;
	uint   SoftTimer_obj_remain_ms;
	void (*SoftTimer_obj_func)(void *arg);
	void  *SoftTimer_obj_arg;
	struct _SOFTTimer *next;
} __SOFTTimerOBJ;



/* ------------------------------------------------------------------------------------------------------------------ */
/* 软件定时器API */
                                                        
void SOFTTimer_Init(void);
void SOFTTimer_Start(void);
void SOFTTimer_Stop(void);

char SOFTTimer_OBJJoin(__SOFTTimerOBJ* pobj);
char SOFTTimer_OBJRemove(__SOFTTimerOBJ* pobj);
char SOFTTimer_OBJPause(__SOFTTimerOBJ* pobj);
char SOFTTimer_OBJRun(__SOFTTimerOBJ* pobj);

char SOFTTimer_OBJSet(__SOFTTimerOBJ* pobj, int delms);



/* ------------------------------------------------------------------------------------------------------------------ */
/* 软件定时器API宏 */

#define SOFTTIMER_OBJ_DECL(STimer)  \
    __SOFTTimerOBJ STimer
	
#define SOFTTIMER_OBJ_DECL_XDATA(STimer)  \
    xdata __SOFTTimerOBJ STimer
	
#define SOFTTIMER_OBJ_DECL_PDATA(STimer)  \
    pdata __SOFTTimerOBJ STimer
	
#define SOFTTIMER_OBJ_DECL_IDATA(STimer)  \
    idata __SOFTTimerOBJ STimer

#define SOFTTIMER_OBJ_DECL_STATIC(STimer)  \
    static __SOFTTimerOBJ STimer

#define SOFTTIMER_OBJ_INIT(STimer, funcptr, funcarg, delms)  \
		STimer.ID     = 0; \
		STimer.status = 0; \
		STimer.SoftTimer_obj_func = funcptr; \
		STimer.SoftTimer_obj_arg = funcarg; \
		STimer.SoftTimer_obj_ms = delms/10; \
		STimer.SoftTimer_obj_remain_ms = delms/10; \
		STimer.next = NULL;

#define SOFTTIMER_OBJ_INIT_STATIC(STimer, funcptr, funcarg)  \
		STimer.ID     = 0; \
		STimer.status = 0; \
		STimer.SoftTimer_obj_func = funcptr; \
		STimer.SoftTimer_obj_arg = funcarg; \
		STimer.SoftTimer_obj_ms = delms/10; \
		STimer.SoftTimer_obj_remain_ms = delms/10; \
		STimer.next = NULL;



#define SOFTTIMER_OBJ_JOIN(STimer) \
		SOFTTimer_OBJJoin(&STimer)

#define SOFTTIMER_OBJ_REMOVE(STimer) \
		SOFTTimer_OBJRemove(&STimer)

#define SOFTTIMER_OBJ_RUN(STimer) \
		SOFTTimer_OBJRun(&STimer)

#define SOFTTIMER_OBJ_PAUSE(STimer) \
		SOFTTimer_OBJPause(&STimer)

#define SOFTTIMER_OBJ_SETDEL(STimer, Del) \
		SOFTTimer_OBJSet(&STimer, Del)


/* ------------------------------------------------------------------------------------------------------------------ */





#endif /* SW_SOFTTIMER_CONFIG */

#endif /* __SW_SOFTTIMER_H */
