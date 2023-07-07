/******************************************************************************/
/** ģ�����ƣ�ModbusͨѶ                                                     **/
/** �ļ����ƣ�mbconfig.h                                                     **/
/** ��    ����V1.0.0                                                         **/
/** ��    �飺��������ModbusЭ��ջʹ�õ���ض���                             **/
/**--------------------------------------------------------------------------**/
/** �޸ļ�¼��                                                               **/
/**     �汾      ����           ����         ˵��                           **/
/**     V1.0.0  2015-07-18      ���Ҿ�     �����ļ�                          **/
/**     V1.0.1  2018-09-21      ���Ҿ�     ���Modbus ASCII����              **/
/**     V1.1.0  2019-04-17      ���Ҿ�     �޸���վ����ṹ����װ��վ��վ����**/
/**     V1.0.0  2023-07-06      ���Ľ�     ��ֲ�ļ�                                                                      **/
/******************************************************************************/ 


#ifndef _MB_CONFIG_H
#define _MB_CONFIG_H
#include "stm32f4xx_hal.h"




/*�����Ƿ�ʹ��RTU��վ���ܣ�0Ϊ���ã�1Ϊʹ��*/
#define MB_RTU_MASTER_ENABLED		(0)

/*�����Ƿ�ʹ��RTU��վ���ܣ�0Ϊ���ã�1Ϊʹ��*/
#define MB_RTU_SLAVE_ENABLED		(1)

/*�����Ƿ�ʹ��ASCII��վ���ܣ�0Ϊ���ã�1Ϊʹ��*/
#define MB_ACSII_MASTER_ENABLED		(0)

/*�����Ƿ�ʹ��ASCII��վ���ܣ�0Ϊ���ã�1Ϊʹ��*/
#define MB_ASCII_SLAVE_ENABLED		(0)

/*�����Ƿ�ʹ��TCP���������ܣ�0Ϊ���ã�1Ϊʹ��*/
#define MB_TCP_SERVER_ENABLED		(0)

/*�����Ƿ�ʹ��TCP�ͻ��˹��ܣ�0Ϊ���ã�1Ϊʹ��*/
#define MB_TCP_CLIENT_ENABLED		(0)

#if MB_RTU_MASTER_ENABLED > (0)
#include "mbrtumaster.h"
#endif

#if MB_RTU_SLAVE_ENABLED > (0)
#include "mbrtuslave.h"
#endif

#if MB_TCP_CLIENT_ENABLED > (0)
#include "mbtcpclient.h"
#endif

#if MB_TCP_SERVER_ENABLED > (0)
#include "mbtcpserver.h"
#endif

#if MB_ACSII_MASTER_ENABLED > (0)
#include "mbasciimaster.h"
#endif

#if MB_ASCII_SLAVE_ENABLED > (0)
#include "mbasciislave.h"
#endif

#include "mbcommon.h"

/* ��Ϊ��վʱ����������ı�����Χ */
#if ((MB_RTU_SLAVE_ENABLED > (0))||(MB_TCP_SERVER_ENABLED > (0))||(MB_ASCII_SLAVE_ENABLED > (0)))

#define CoilStartAddress        0
#define CoilEndAddress          3

#define DiscreteStartAddress        0
#define DiscreteEndAddress          15

#define HoldingRegisterStartAddress       0
#define HoldingRegisterEndAddress         41

#define InputResterStartAddress       0
#define InputResterEndAddress         17

#endif


#endif
/*********** (C) COPYRIGHT 1999-2019 Moonan Technology *********END OF FILE****/