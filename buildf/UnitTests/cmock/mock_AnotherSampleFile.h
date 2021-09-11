/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_ANOTHERSAMPLEFILE_H
#define _MOCK_ANOTHERSAMPLEFILE_H

#include "unity.h"
#include "AnotherSampleFile.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_AnotherSampleFile_Init(void);
void mock_AnotherSampleFile_Destroy(void);
void mock_AnotherSampleFile_Verify(void);




#define FakeUartSendData_Ignore() FakeUartSendData_CMockIgnore()
void FakeUartSendData_CMockIgnore(void);
#define FakeUartSendData_StopIgnore() FakeUartSendData_CMockStopIgnore()
void FakeUartSendData_CMockStopIgnore(void);
#define FakeUartSendData_Expect(Data, size) FakeUartSendData_CMockExpect(__LINE__, Data, size)
void FakeUartSendData_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t* Data, uint8_t size);
#define FakeUartSendData_ReturnThruPtr_Data(Data) FakeUartSendData_CMockReturnMemThruPtr_Data(__LINE__, Data, sizeof(uint8_t))
#define FakeUartSendData_ReturnArrayThruPtr_Data(Data, cmock_len) FakeUartSendData_CMockReturnMemThruPtr_Data(__LINE__, Data, cmock_len * sizeof(*Data))
#define FakeUartSendData_ReturnMemThruPtr_Data(Data, cmock_size) FakeUartSendData_CMockReturnMemThruPtr_Data(__LINE__, Data, cmock_size)
void FakeUartSendData_CMockReturnMemThruPtr_Data(UNITY_LINE_TYPE cmock_line, uint8_t* Data, size_t cmock_size);
#define FakeI2C_TakeState_IgnoreAndReturn(cmock_retval) FakeI2C_TakeState_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void FakeI2C_TakeState_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, FakeI2cEnumState cmock_to_return);
#define FakeI2C_TakeState_StopIgnore() FakeI2C_TakeState_CMockStopIgnore()
void FakeI2C_TakeState_CMockStopIgnore(void);
#define FakeI2C_TakeState_ExpectAndReturn(I2cHandler, cmock_retval) FakeI2C_TakeState_CMockExpectAndReturn(__LINE__, I2cHandler, cmock_retval)
void FakeI2C_TakeState_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, FakeStructHanldeI2c* I2cHandler, FakeI2cEnumState cmock_to_return);
#define FakeI2C_TakeState_ReturnThruPtr_I2cHandler(I2cHandler) FakeI2C_TakeState_CMockReturnMemThruPtr_I2cHandler(__LINE__, I2cHandler, sizeof(FakeStructHanldeI2c))
#define FakeI2C_TakeState_ReturnArrayThruPtr_I2cHandler(I2cHandler, cmock_len) FakeI2C_TakeState_CMockReturnMemThruPtr_I2cHandler(__LINE__, I2cHandler, cmock_len * sizeof(*I2cHandler))
#define FakeI2C_TakeState_ReturnMemThruPtr_I2cHandler(I2cHandler, cmock_size) FakeI2C_TakeState_CMockReturnMemThruPtr_I2cHandler(__LINE__, I2cHandler, cmock_size)
void FakeI2C_TakeState_CMockReturnMemThruPtr_I2cHandler(UNITY_LINE_TYPE cmock_line, FakeStructHanldeI2c* I2cHandler, size_t cmock_size);
#define FakeI2cReadData_IgnoreAndReturn(cmock_retval) FakeI2cReadData_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void FakeI2cReadData_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, FakeI2cEnumState cmock_to_return);
#define FakeI2cReadData_StopIgnore() FakeI2cReadData_CMockStopIgnore()
void FakeI2cReadData_CMockStopIgnore(void);
#define FakeI2cReadData_ExpectAndReturn(DevAddr, RegNum, DataRead, size, cmock_retval) FakeI2cReadData_CMockExpectAndReturn(__LINE__, DevAddr, RegNum, DataRead, size, cmock_retval)
void FakeI2cReadData_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t DevAddr, uint8_t RegNum, uint8_t* DataRead, uint8_t size, FakeI2cEnumState cmock_to_return);
#define FakeI2cReadData_ReturnThruPtr_DataRead(DataRead) FakeI2cReadData_CMockReturnMemThruPtr_DataRead(__LINE__, DataRead, sizeof(uint8_t))
#define FakeI2cReadData_ReturnArrayThruPtr_DataRead(DataRead, cmock_len) FakeI2cReadData_CMockReturnMemThruPtr_DataRead(__LINE__, DataRead, cmock_len * sizeof(*DataRead))
#define FakeI2cReadData_ReturnMemThruPtr_DataRead(DataRead, cmock_size) FakeI2cReadData_CMockReturnMemThruPtr_DataRead(__LINE__, DataRead, cmock_size)
void FakeI2cReadData_CMockReturnMemThruPtr_DataRead(UNITY_LINE_TYPE cmock_line, uint8_t* DataRead, size_t cmock_size);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif