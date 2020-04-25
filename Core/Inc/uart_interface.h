/*
 * uart_interface.h
 *
 *  Created on: Apr 18, 2020
 *      Author: Khevenin
 *
 *      Before use this small library init uart periphery in your STM32.
 *      Reference to HAL's uart structure passes as argument to all functions.
 */

#ifndef INC_UART_INTERFACE_H_
#define INC_UART_INTERFACE_H_

/* Standard include file */
#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>


/*	User include files	*/

/* Extern */

extern const char nrfPowerUp[]; //power up
extern const char nrfPowerDown[]; //power down

extern const char nrfPowerTx0dBm[];
extern const char nrfPowerTx6dBm[];
extern const char nrfPowerTx12dBm[];
extern const char nrfPowerTx18dBm[];

extern const char nrfDataRate250kbps[];
extern const char nrfDataRate1Mbps[];
extern const char nrfDataRate2Mbps[];

extern const char nrfChannel[];

extern const char *nrfCommandTable[];

/* Functions's prototypes */

uint8_t checkCommand(const char *str, const char **cmdTab, size_t strLen,
		size_t cmdLen);

uint8_t sendBuffer(uint8_t *buffer, size_t size, UART_HandleTypeDef *huart);

void sendString(const char *str, UART_HandleTypeDef *huart);
void sendChar(char charakter, UART_HandleTypeDef *huart);

void sendShortInteger(uint8_t number, UART_HandleTypeDef *huart);
void sendInteger(uint16_t number, UART_HandleTypeDef *huart);
void sendLongInteger(uint32_t number, UART_HandleTypeDef *huart);
void sendFloat(float number, uint8_t pointNumber, UART_HandleTypeDef *huart);

#endif /* INC_UART_INTERFACE_H_ */