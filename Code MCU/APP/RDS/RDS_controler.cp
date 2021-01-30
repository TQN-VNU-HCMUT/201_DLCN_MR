#line 1 "F:/MR_DLCN/Code MCU/APP/RDS/RDS_controler.c"
#line 1 "g:/applications/mikroc/mikroc pro for arm/include/stdint.h"





typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;
typedef signed long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;
typedef signed long long int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef signed long int int_fast8_t;
typedef signed long int int_fast16_t;
typedef signed long int int_fast32_t;
typedef signed long long int_fast64_t;


typedef unsigned long int uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef signed long int intptr_t;
typedef unsigned long int uintptr_t;


typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;
#line 1 "f:/mr_dlcn/code mcu/app/rds/rds_in.h"
#line 1 "f:/mr_dlcn/code mcu/bsw/service/io service/hmi service/hmi_service.h"
#line 1 "g:/applications/mikroc/mikroc pro for arm/include/stdint.h"
#line 32 "f:/mr_dlcn/code mcu/bsw/service/io service/hmi service/hmi_service.h"
typedef union
{
 uint8_t SendData_puint8[ 32 ];
 struct
 {
 uint16_t ID;
 uint16_t Code_uint16;
 int32_t Data_pint32[6];
 uint16_t Subcode_uint16;
 uint16_t CRC;
 } SendDataRaw_st;
 struct
 {
 uint16_t ID;
 uint16_t Code_uint16;
 double Data_pdouble[6];
 uint16_t Subcode_uint16;
 uint16_t CRC;
 } SendDataEng_st;
} HMI_TX_FRAME_UN;

enum HMI_SEND_CODE_EN
{
 HMI_DATA = (uint16_t)0xABCD,
};

typedef union
{
 uint8_t ReceiverData_puint8[ 12 ];
 struct
 {
 uint16_t ID;
 uint16_t Code_uint16;
 double EngValue;
 uint16_t RawValue;
 uint16_t CRC;
 }ADC_st;
 struct
 {
 uint16_t ID;
 uint16_t Code_uint16;
 uint16_t Index_uint16;
 uint16_t Data_uint16;
 int16_t Velocity_int16;
 uint16_t CRC_uint16;
 } ReceiverData_st;
} HMI_RX_FRAME_UN;

enum HMI_RECEIVER_CODE_EN
{
 STATUS_CODE= 0x5353,
 RESET_CODE = 0x5245,



 EDIT_CODE = 0x4544,
 E_CODE = 0x4545,
 EXE_CODE = 0x4558,
 NOT_CODE = 0x4E4F,
 AND_CODE = 0x414E,
 OR_CODE = 0x4F52,
 WAIT_CODE = 0x5741,
 IF_CODE = 0x4946,
 WHILE_CODE = 0x5748,
 END_CODE = 0x454E,
 GOTO_CODE = 0x474F,



 IO_CODE = 0x494F,
 IN0_CODE = 0x4930,
 IN1_CODE = 0x4931,
 IN2_CODE = 0x4932,
 IN3_CODE = 0x4933,
 IN4_CODE = 0x4934,
 IN5_CODE = 0x4935,
 IN6_CODE = 0x4936,
 IN7_CODE = 0x4937,
 IN8_CODE = 0x4938,

 OUT0_CODE = 0x4F30,
 OUT1_CODE = 0x4F31,
 OUT2_CODE = 0x4F32,
 OUT3_CODE = 0x4F33,
 OUT4_CODE = 0x4F34,
 OUT5_CODE = 0x4F35,
 OUT6_CODE = 0x4F36,
 OUT7_CODE = 0x4F37,
 OUT8_CODE = 0x4F38,


 ADC0_CODE = 0x4130,
 ADC1_CODE = 0x4131,
 ADC2_CODE = 0x4132,
 ADC3_CODE = 0x4133,
 ADC4_CODE = 0x4134,
 ADC5_CODE = 0x4135,
 ADC6_CODE = 0x4136,


};

 extern  void HMI_Init_v(void);
 extern  void HMI_Enable_v(void);
 extern  void HMI_FrameRead_v(void);
 extern  void HMI_FrameWrite_v(void);


 extern  HMI_RX_FRAME_UN g_HMI_ReceiverData_un;
#line 158 "f:/mr_dlcn/code mcu/bsw/service/io service/hmi service/hmi_service.h"
 extern  HMI_TX_FRAME_UN g_HMI_SendData_un;
#line 1 "f:/mr_dlcn/code mcu/bsw/service/io service/dio service/dio_service.h"
#line 1 "g:/applications/mikroc/mikroc pro for arm/include/stdint.h"
#line 26 "f:/mr_dlcn/code mcu/bsw/service/io service/dio service/dio_service.h"
 extern  void DIO_Init_v(void);
 extern  uint8_t DI_Get_uint8(uint8_t pin);
 extern  uint8_t DO_Get_uint8(uint8_t pin);
 extern  void DO_Set_v(uint8_t pin, uint8_t value);
#line 1 "f:/mr_dlcn/code mcu/app/rds/rds_out.h"
#line 1 "f:/mr_dlcn/code mcu/bsw/service/io service/hmi service/hmi_service.h"
#line 1 "f:/mr_dlcn/code mcu/app/rds/rds_run.h"
#line 26 "f:/mr_dlcn/code mcu/app/rds/rds_run.h"
  void RDS_Init_v(void);
  void RDS_Run_v(void);
  void RDS_Read_v(void);
#line 1 "f:/mr_dlcn/code mcu/app/lib/adc_convert.h"
#line 1 "g:/applications/mikroc/mikroc pro for arm/include/stdint.h"
#line 1 "f:/mr_dlcn/code mcu/bsw/service/io service/adc service/adc_service.h"
#line 1 "g:/applications/mikroc/mikroc pro for arm/include/stdint.h"
#line 26 "f:/mr_dlcn/code mcu/bsw/service/io service/adc service/adc_service.h"
struct sensorPara{
 float REF_Val[6];
 float RAW_Val[6];
 float Zero[6];
 float Span[6];
}  extern  SensorPara;
 extern  void ADC_Init_v(void);
 extern  uint16_t ADC_Read_uint16(uint8_t channel);
#line 29 "f:/mr_dlcn/code mcu/app/lib/adc_convert.h"
 extern  double ADC_Scale(uint8_t sensorNumber, uint16_t Raw_Value);
#line 1 "f:/mr_dlcn/code mcu/bsw/service/io service/hmi service/hmi_service.h"
#line 1 "f:/mr_dlcn/code mcu/bsw/service/io service/dio service/dio_service.h"
#line 1 "f:/mr_dlcn/code mcu/bsw/service/io service/adc service/adc_service.h"
#line 34 "F:/MR_DLCN/Code MCU/APP/RDS/RDS_controler.c"
void RDS_Write(void)
{

  g_HMI_SendData_un.SendDataRaw_st.ID  = 0x4646;
  g_HMI_SendData_un.SendDataRaw_st.Code_uint16  = 0x4130;
 HMI_FrameWrite_v();


 return;
}



void RDS_ADC_v(void)
{
 uint16_t value = 0;
 value = ADC_Read_uint16(1);
  g_HMI_SendData_un.SendDataEng_st.Data_pdouble [0]  = ADC_Scale(1, value);
 value = ADC_Read_uint16(2);
  g_HMI_SendData_un.SendDataEng_st.Data_pdouble [1]  = ADC_Scale(2, value);
 value = ADC_Read_uint16(3);
  g_HMI_SendData_un.SendDataEng_st.Data_pdouble [2]  = ADC_Scale(3, value);
 value = ADC_Read_uint16(4);
  g_HMI_SendData_un.SendDataEng_st.Data_pdouble [3]  = ADC_Scale(4, value);
 value = ADC_Read_uint16(5);
  g_HMI_SendData_un.SendDataEng_st.Data_pdouble [4]  = ADC_Scale(5, value);
 value = ADC_Read_uint16(6);
  g_HMI_SendData_un.SendDataEng_st.Data_pdouble [5]  = ADC_Scale(6, value);

 RDS_Write();
}


void RDS_DIO_v(void)
{
  g_HMI_SendData_un.SendData_puint8[5]  = DO_Get_uint8(0);
  g_HMI_SendData_un.SendData_puint8[4]  = DI_Get_uint8(0);
  g_HMI_SendData_un.SendDataRaw_st.Data_pint32 [0]  = ( g_HMI_SendData_un.SendData_puint8[5] <<8) +  g_HMI_SendData_un.SendData_puint8[4] ;
 RDS_Write();
}

void RDS_Read_v(void)
{
 uint8_t cnt = 0;
 if (cnt == 0)
 DO_Set_v(7, 1);
 else
 DO_Set_v(7, 0);
 switch( g_HMI_ReceiverData_un.ReceiverData_st.Code_uint16 )
 {
 case ADC1_CODE:
 if( g_HMI_ReceiverData_un.ReceiverData_st.ID  == 0x464C){
 SensorPara.RAW_Val[0] = ADC_Read_uint16(1);

 SensorPara.Zero[0] = - SensorPara.RAW_Val[0];
 }
 if( g_HMI_ReceiverData_un.ReceiverData_st.ID  == 0x4648){
 SensorPara.RAW_Val[0] = (ADC_Read_uint16(1) > 4095)? 4095:ADC_Read_uint16(1);
 SensorPara.REF_Val[0] =  g_HMI_ReceiverData_un.ADC_st.EngValue ;
 SensorPara.Span[0] = (SensorPara.REF_Val[0] - SensorPara.Zero[0])/SensorPara.RAW_Val[0];

 }
 break;
 case ADC2_CODE:
 if( g_HMI_ReceiverData_un.ReceiverData_st.ID  == 0x464C){
 SensorPara.RAW_Val[1] = (ADC_Read_uint16(2) > 4095)? 4095:ADC_Read_uint16(2);

 SensorPara.Zero[1] = - SensorPara.RAW_Val[1];
 }
 if( g_HMI_ReceiverData_un.ReceiverData_st.ID  == 0x4648){
 SensorPara.RAW_Val[1] = (ADC_Read_uint16(2) > 4095)? 4095:ADC_Read_uint16(2);
 SensorPara.REF_Val[1] =  g_HMI_ReceiverData_un.ADC_st.EngValue ;
 SensorPara.Span[1] = (SensorPara.REF_Val[1] - SensorPara.Zero[1])/SensorPara.RAW_Val[1];
 }
 break;
 case ADC3_CODE:
 if( g_HMI_ReceiverData_un.ReceiverData_st.ID  == 0x464C){
 SensorPara.RAW_Val[2] = (ADC_Read_uint16(3) > 4095)? 4095:ADC_Read_uint16(3);

 SensorPara.Zero[2] = - SensorPara.RAW_Val[2];
 }
 if( g_HMI_ReceiverData_un.ReceiverData_st.ID  == 0x4648){
 SensorPara.RAW_Val[2] = (ADC_Read_uint16(3) > 4095)? 4095:ADC_Read_uint16(3);
 SensorPara.REF_Val[2] =  g_HMI_ReceiverData_un.ADC_st.EngValue ;
 SensorPara.Span[2] = (SensorPara.REF_Val[2] - SensorPara.Zero[2])/SensorPara.RAW_Val[2];
 }
 break;
 case ADC4_CODE:
 if( g_HMI_ReceiverData_un.ReceiverData_st.ID  == 0x464C){
 SensorPara.RAW_Val[3] = (ADC_Read_uint16(4) > 4095)? 4095:ADC_Read_uint16(4);

 SensorPara.Zero[3] = - SensorPara.RAW_Val[3];
 }
 if( g_HMI_ReceiverData_un.ReceiverData_st.ID  == 0x4648){
 SensorPara.RAW_Val[3] = (ADC_Read_uint16(4) > 4095)? 4095:ADC_Read_uint16(4);
 SensorPara.REF_Val[3] =  g_HMI_ReceiverData_un.ADC_st.EngValue ;
 SensorPara.Span[3] = (SensorPara.REF_Val[3] - SensorPara.Zero[3])/SensorPara.RAW_Val[3];
 }
 break;
 case ADC5_CODE:
 if( g_HMI_ReceiverData_un.ReceiverData_st.ID  == 0x464C){
 SensorPara.RAW_Val[4] = (ADC_Read_uint16(5) > 4095)? 4095:ADC_Read_uint16(5);

 SensorPara.Zero[4] = - SensorPara.RAW_Val[4];
 }
 if( g_HMI_ReceiverData_un.ReceiverData_st.ID  == 0x4648){
 SensorPara.RAW_Val[4] = (ADC_Read_uint16(5) > 4095)? 4095:ADC_Read_uint16(5);
 SensorPara.REF_Val[4] =  g_HMI_ReceiverData_un.ADC_st.EngValue ;
 SensorPara.Span[4] = (SensorPara.REF_Val[4] - SensorPara.Zero[4])/SensorPara.RAW_Val[4];
 }
 break;
 case ADC6_CODE:
 if( g_HMI_ReceiverData_un.ReceiverData_st.ID  == 0x464C){
 SensorPara.RAW_Val[5] = (ADC_Read_uint16(6) > 4095)? 4095:ADC_Read_uint16(6);

 SensorPara.Zero[5] = - SensorPara.RAW_Val[5];
 }
 if( g_HMI_ReceiverData_un.ReceiverData_st.ID  == 0x4648){
 SensorPara.RAW_Val[5] = (ADC_Read_uint16(6) > 4095)? 4095:ADC_Read_uint16(6);
 SensorPara.REF_Val[5] =  g_HMI_ReceiverData_un.ADC_st.EngValue ;
 SensorPara.Span[5] = (SensorPara.REF_Val[5] - SensorPara.Zero[5])/SensorPara.RAW_Val[5];
 }
 break;
 }
}

void RDS_Run_v(void)
{

 RDS_ADC_v();




 return;
}

void RDS_Init_v(void)
{
 ;
 return;
}
