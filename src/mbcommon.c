/******************************************************************************/
/** ģ�����ƣ�ModbusͨѶ                                                     **/
/** �ļ����ƣ�mbcommon.c                                                     **/
/** ��    ����V1.0.0                                                         **/
/** ��    �飺����ʵ��Modbus��������µĹ��ò���                             **/
/**--------------------------------------------------------------------------**/
/** �޸ļ�¼��                                                               **/
/**     �汾      ����              ����              ˵��                   **/
/**     V1.0.0  2015-07-18          ľ��              �����ļ�               **/
/**                                                                          **/
/******************************************************************************/ 

#include "mbcommon.h"
#if  defined ( __clang__ )
#define __weak   __attribute__((weak))
#endif /* __weak */
/*�����յ���д����Coilֵת��Ϊ����������Ӧ0x05������*/
bool CovertSingleCommandCoilToBoolStatus(uint16_t coilValue,bool value)
{
  bool state=value;
  if(coilValue==0x0000)
  {
    state=false;
  }
  if(coilValue==0xFF00)
  {
    state=true;
  }
  return state;
}

/*������д�����Ƿ����������Ҫ��Χ������(�����ȸ�����)*/
float CheckWriteFloatDataIsValid(float value,float range,float zero)
{
  if(value>=range)
  {
    return range;
  }
  else if(value<=zero)
  {
    return zero;
  }
  else
  {
    return value;
  }
}

/*������д�����Ƿ����������Ҫ��Χ������(˫���ȸ�����)*/
double CheckWriteDoubleDataIsValid(double value,double range,double zero)
{
  if(value>=range)
  {
    return range;
  }
  else if(value<=zero)
  {
    return zero;
  }
  else
  {
    return value;
  }
}

/*������д�����Ƿ����������Ҫ��Χ������(16λ����)*/
uint16_t CheckWriteInt16DataIsValid(uint16_t value,uint16_t range,uint16_t zero)
{
  if(value>=range)
  {
    return range;
  }
  else if(value<=zero)
  {
    return zero;
  }
  else
  {
    return value;
  }
}

/*������д�����Ƿ����������Ҫ��Χ������(32λ����)*/
uint32_t CheckWriteInt32DataIsValid(uint32_t value,uint32_t range,uint32_t zero)
{
  if(value>=range)
  {
    return range;
  }
  else if(value<=zero)
  {
    return zero;
  }
  else
  {
    return value;
  }
}

/*��ȡ��Ҫ��ȡ��Coil����ֵ*/
__weak void GetCoilStatus(uint16_t startAddress,uint16_t quantity,bool *statusList)
{
  //�����ҪModbus TCP Server/RTU SlaveӦ����ʵ�־�������
}

/*��ȡ��Ҫ��ȡ��InputStatus����ֵ*/
__weak void GetInputStatus(uint16_t startAddress,uint16_t quantity,bool *statusValue)
{
  //�����ҪModbus TCP Server/RTU SlaveӦ����ʵ�־�������
}

/*��ȡ��Ҫ��ȡ�ı��ּĴ�����ֵ*/
__weak void GetHoldingRegister(uint16_t startAddress,uint16_t quantity,uint16_t *registerValue)
{
  //�����ҪModbus TCP Server/RTU SlaveӦ����ʵ�־�������
}

/*��ȡ��Ҫ��ȡ������Ĵ�����ֵ*/
__weak void GetInputRegister(uint16_t startAddress,uint16_t quantity,uint16_t *registerValue)
{
  //�����ҪModbus TCP Server/RTU SlaveӦ����ʵ�־�������
}

/*���õ�����Ȧ��ֵ*/
__weak void SetSingleCoil(uint16_t coilAddress,bool coilValue)
{
  //�����ҪModbus TCP Server/RTU SlaveӦ����ʵ�־�������
}

/*���õ����Ĵ�����ֵ*/
__weak void SetSingleRegister(uint16_t registerAddress,uint16_t registerValue)
{
  //�����ҪModbus TCP Server/RTU SlaveӦ����ʵ�־�������
}

/*���ö����Ȧ��ֵ*/
__weak void SetMultipleCoil(uint16_t startAddress,uint16_t quantity,bool *statusValue)
{
  //�����ҪModbus TCP Server/RTU SlaveӦ����ʵ�־�������
}

/*���ö���Ĵ�����ֵ*/
__weak void SetMultipleRegister(uint16_t startAddress,uint16_t quantity,uint16_t *registerValue)
{
  //�����ҪModbus TCP Server/RTU SlaveӦ����ʵ�־�������
}

/*���¶���������Ȧ״̬*/
__weak void UpdateCoilStatus(uint8_t salveAddress,uint16_t startAddress,uint16_t quantity,bool *stateValue)
{
  //�ڿͻ��ˣ���վ��Ӧ����ʵ��
}

/*���¶�����������״ֵ̬*/
__weak void UpdateInputStatus(uint8_t salveAddress,uint16_t startAddress,uint16_t quantity,bool *stateValue)
{
  //�ڿͻ��ˣ���վ��Ӧ����ʵ��
}

/*���¶������ı��ּĴ���*/
__weak void UpdateHoldingRegister(uint8_t salveAddress,uint16_t startAddress,uint16_t quantity,uint16_t *registerValue)
{
  //�ڿͻ��ˣ���վ��Ӧ����ʵ��
}

/*���¶�����������Ĵ���*/
__weak void UpdateInputResgister(uint8_t salveAddress,uint16_t startAddress,uint16_t quantity,uint16_t *registerValue)
{
  //�ڿͻ��ˣ���վ��Ӧ����ʵ��
}

/*********** (C) COPYRIGHT 1999-2016 Moonan Technology *********END OF FILE****/