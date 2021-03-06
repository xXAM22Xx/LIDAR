/**********************************************************************************************//**
 * @file	adc.h
 *
 * @brief	Declares the ADC class.
 **************************************************************************************************/

#ifndef ADC_H_
#define ADC_H_

/**********************************************************************************************//**
 * @fn	void adc_init()
 *
 * @brief	Initialises the ADC.
 *
 * @author	Alex
 * @date	22.12.2015
 **************************************************************************************************/

void adc_init();

/**********************************************************************************************//**
 * @fn	uint16_t adc_read()
 *
 * @brief	Reads a single value.
 *
 * @author	Alex
 * @date	22.12.2015
 *
 * @return	Value.
 **************************************************************************************************/

uint16_t adc_read();

/**********************************************************************************************//**
 * @fn	uint16_t adc_read_avg(char x)
 *
 * @brief	Reads multiple values and calculates the average value.
 *
 * @author	Alex
 * @date	22.12.2015
 *
 * @param	x	Number of values to make.
 *
 * @return	Average.
 **************************************************************************************************/

uint16_t adc_read_avg(char x);




#endif /* ADC_H_ */