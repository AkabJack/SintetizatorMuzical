/**
 * PINS Generated Driver Header File 
 * 
 * @file      pins.h
 *            
 * @defgroup  pinsdriver Pins Driver
 *            
 * @brief     The Pin Driver directs the operation and function of 
 *            the selected device pins using dsPIC MCUs.
 *
 * @skipline @version   PLIB Version 1.0.1
 *
 * @skipline  Device : dsPIC33AK128MC102
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H
// Section: Includes
#include <xc.h>

// Section: Device Pin Macros

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RA0 GPIO Pin which has a custom name of IO_RA0 to High
 * @pre      The RA0 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RA0_SetHigh()          (_LATA0 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RA0 GPIO Pin which has a custom name of IO_RA0 to Low
 * @pre      The RA0 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RA0_SetLow()           (_LATA0 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RA0 GPIO Pin which has a custom name of IO_RA0
 * @pre      The RA0 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RA0_Toggle()           (_LATA0 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RA0 GPIO Pin which has a custom name of IO_RA0
 * @param    none
 * @return   none  
 */
#define IO_RA0_GetValue()         _RA0

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RA0 GPIO Pin which has a custom name of IO_RA0 as Input
 * @param    none
 * @return   none  
 */
#define IO_RA0_SetDigitalInput()  (_TRISA0 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RA0 GPIO Pin which has a custom name of IO_RA0 as Output
 * @param    none
 * @return   none  
 */
#define IO_RA0_SetDigitalOutput() (_TRISA0 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RA1 GPIO Pin which has a custom name of IO_RA1 to High
 * @pre      The RA1 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RA1_SetHigh()          (_LATA1 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RA1 GPIO Pin which has a custom name of IO_RA1 to Low
 * @pre      The RA1 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RA1_SetLow()           (_LATA1 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RA1 GPIO Pin which has a custom name of IO_RA1
 * @pre      The RA1 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RA1_Toggle()           (_LATA1 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RA1 GPIO Pin which has a custom name of IO_RA1
 * @param    none
 * @return   none  
 */
#define IO_RA1_GetValue()         _RA1

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RA1 GPIO Pin which has a custom name of IO_RA1 as Input
 * @param    none
 * @return   none  
 */
#define IO_RA1_SetDigitalInput()  (_TRISA1 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RA1 GPIO Pin which has a custom name of IO_RA1 as Output
 * @param    none
 * @return   none  
 */
#define IO_RA1_SetDigitalOutput() (_TRISA1 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RA2 GPIO Pin which has a custom name of IO_RA2 to High
 * @pre      The RA2 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RA2_SetHigh()          (_LATA2 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RA2 GPIO Pin which has a custom name of IO_RA2 to Low
 * @pre      The RA2 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RA2_SetLow()           (_LATA2 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RA2 GPIO Pin which has a custom name of IO_RA2
 * @pre      The RA2 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RA2_Toggle()           (_LATA2 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RA2 GPIO Pin which has a custom name of IO_RA2
 * @param    none
 * @return   none  
 */
#define IO_RA2_GetValue()         _RA2

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RA2 GPIO Pin which has a custom name of IO_RA2 as Input
 * @param    none
 * @return   none  
 */
#define IO_RA2_SetDigitalInput()  (_TRISA2 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RA2 GPIO Pin which has a custom name of IO_RA2 as Output
 * @param    none
 * @return   none  
 */
#define IO_RA2_SetDigitalOutput() (_TRISA2 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RA3 GPIO Pin which has a custom name of IO_RA3 to High
 * @pre      The RA3 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RA3_SetHigh()          (_LATA3 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RA3 GPIO Pin which has a custom name of IO_RA3 to Low
 * @pre      The RA3 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RA3_SetLow()           (_LATA3 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RA3 GPIO Pin which has a custom name of IO_RA3
 * @pre      The RA3 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RA3_Toggle()           (_LATA3 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RA3 GPIO Pin which has a custom name of IO_RA3
 * @param    none
 * @return   none  
 */
#define IO_RA3_GetValue()         _RA3

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RA3 GPIO Pin which has a custom name of IO_RA3 as Input
 * @param    none
 * @return   none  
 */
#define IO_RA3_SetDigitalInput()  (_TRISA3 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RA3 GPIO Pin which has a custom name of IO_RA3 as Output
 * @param    none
 * @return   none  
 */
#define IO_RA3_SetDigitalOutput() (_TRISA3 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RA4 GPIO Pin which has a custom name of IO_RA4 to High
 * @pre      The RA4 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RA4_SetHigh()          (_LATA4 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RA4 GPIO Pin which has a custom name of IO_RA4 to Low
 * @pre      The RA4 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RA4_SetLow()           (_LATA4 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RA4 GPIO Pin which has a custom name of IO_RA4
 * @pre      The RA4 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RA4_Toggle()           (_LATA4 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RA4 GPIO Pin which has a custom name of IO_RA4
 * @param    none
 * @return   none  
 */
#define IO_RA4_GetValue()         _RA4

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RA4 GPIO Pin which has a custom name of IO_RA4 as Input
 * @param    none
 * @return   none  
 */
#define IO_RA4_SetDigitalInput()  (_TRISA4 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RA4 GPIO Pin which has a custom name of IO_RA4 as Output
 * @param    none
 * @return   none  
 */
#define IO_RA4_SetDigitalOutput() (_TRISA4 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB0 GPIO Pin which has a custom name of IO_RB0 to High
 * @pre      The RB0 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RB0_SetHigh()          (_LATB0 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB0 GPIO Pin which has a custom name of IO_RB0 to Low
 * @pre      The RB0 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RB0_SetLow()           (_LATB0 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RB0 GPIO Pin which has a custom name of IO_RB0
 * @pre      The RB0 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RB0_Toggle()           (_LATB0 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RB0 GPIO Pin which has a custom name of IO_RB0
 * @param    none
 * @return   none  
 */
#define IO_RB0_GetValue()         _RB0

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB0 GPIO Pin which has a custom name of IO_RB0 as Input
 * @param    none
 * @return   none  
 */
#define IO_RB0_SetDigitalInput()  (_TRISB0 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB0 GPIO Pin which has a custom name of IO_RB0 as Output
 * @param    none
 * @return   none  
 */
#define IO_RB0_SetDigitalOutput() (_TRISB0 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB1 GPIO Pin which has a custom name of IO_RB1 to High
 * @pre      The RB1 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RB1_SetHigh()          (_LATB1 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB1 GPIO Pin which has a custom name of IO_RB1 to Low
 * @pre      The RB1 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RB1_SetLow()           (_LATB1 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RB1 GPIO Pin which has a custom name of IO_RB1
 * @pre      The RB1 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RB1_Toggle()           (_LATB1 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RB1 GPIO Pin which has a custom name of IO_RB1
 * @param    none
 * @return   none  
 */
#define IO_RB1_GetValue()         _RB1

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB1 GPIO Pin which has a custom name of IO_RB1 as Input
 * @param    none
 * @return   none  
 */
#define IO_RB1_SetDigitalInput()  (_TRISB1 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB1 GPIO Pin which has a custom name of IO_RB1 as Output
 * @param    none
 * @return   none  
 */
#define IO_RB1_SetDigitalOutput() (_TRISB1 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB2 GPIO Pin which has a custom name of IO_RB2 to High
 * @pre      The RB2 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RB2_SetHigh()          (_LATB2 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB2 GPIO Pin which has a custom name of IO_RB2 to Low
 * @pre      The RB2 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RB2_SetLow()           (_LATB2 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RB2 GPIO Pin which has a custom name of IO_RB2
 * @pre      The RB2 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RB2_Toggle()           (_LATB2 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RB2 GPIO Pin which has a custom name of IO_RB2
 * @param    none
 * @return   none  
 */
#define IO_RB2_GetValue()         _RB2

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB2 GPIO Pin which has a custom name of IO_RB2 as Input
 * @param    none
 * @return   none  
 */
#define IO_RB2_SetDigitalInput()  (_TRISB2 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB2 GPIO Pin which has a custom name of IO_RB2 as Output
 * @param    none
 * @return   none  
 */
#define IO_RB2_SetDigitalOutput() (_TRISB2 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB3 GPIO Pin which has a custom name of IO_RB3 to High
 * @pre      The RB3 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RB3_SetHigh()          (_LATB3 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB3 GPIO Pin which has a custom name of IO_RB3 to Low
 * @pre      The RB3 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RB3_SetLow()           (_LATB3 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RB3 GPIO Pin which has a custom name of IO_RB3
 * @pre      The RB3 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RB3_Toggle()           (_LATB3 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RB3 GPIO Pin which has a custom name of IO_RB3
 * @param    none
 * @return   none  
 */
#define IO_RB3_GetValue()         _RB3

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB3 GPIO Pin which has a custom name of IO_RB3 as Input
 * @param    none
 * @return   none  
 */
#define IO_RB3_SetDigitalInput()  (_TRISB3 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB3 GPIO Pin which has a custom name of IO_RB3 as Output
 * @param    none
 * @return   none  
 */
#define IO_RB3_SetDigitalOutput() (_TRISB3 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB4 GPIO Pin which has a custom name of IO_RB4 to High
 * @pre      The RB4 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RB4_SetHigh()          (_LATB4 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB4 GPIO Pin which has a custom name of IO_RB4 to Low
 * @pre      The RB4 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RB4_SetLow()           (_LATB4 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RB4 GPIO Pin which has a custom name of IO_RB4
 * @pre      The RB4 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RB4_Toggle()           (_LATB4 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RB4 GPIO Pin which has a custom name of IO_RB4
 * @param    none
 * @return   none  
 */
#define IO_RB4_GetValue()         _RB4

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB4 GPIO Pin which has a custom name of IO_RB4 as Input
 * @param    none
 * @return   none  
 */
#define IO_RB4_SetDigitalInput()  (_TRISB4 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB4 GPIO Pin which has a custom name of IO_RB4 as Output
 * @param    none
 * @return   none  
 */
#define IO_RB4_SetDigitalOutput() (_TRISB4 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC0 GPIO Pin which has a custom name of IO_RC0 to High
 * @pre      The RC0 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RC0_SetHigh()          (_LATC0 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC0 GPIO Pin which has a custom name of IO_RC0 to Low
 * @pre      The RC0 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RC0_SetLow()           (_LATC0 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RC0 GPIO Pin which has a custom name of IO_RC0
 * @pre      The RC0 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RC0_Toggle()           (_LATC0 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RC0 GPIO Pin which has a custom name of IO_RC0
 * @param    none
 * @return   none  
 */
#define IO_RC0_GetValue()         _RC0

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC0 GPIO Pin which has a custom name of IO_RC0 as Input
 * @param    none
 * @return   none  
 */
#define IO_RC0_SetDigitalInput()  (_TRISC0 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC0 GPIO Pin which has a custom name of IO_RC0 as Output
 * @param    none
 * @return   none  
 */
#define IO_RC0_SetDigitalOutput() (_TRISC0 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC1 GPIO Pin which has a custom name of IO_RC1 to High
 * @pre      The RC1 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RC1_SetHigh()          (_LATC1 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC1 GPIO Pin which has a custom name of IO_RC1 to Low
 * @pre      The RC1 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RC1_SetLow()           (_LATC1 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RC1 GPIO Pin which has a custom name of IO_RC1
 * @pre      The RC1 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RC1_Toggle()           (_LATC1 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RC1 GPIO Pin which has a custom name of IO_RC1
 * @param    none
 * @return   none  
 */
#define IO_RC1_GetValue()         _RC1

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC1 GPIO Pin which has a custom name of IO_RC1 as Input
 * @param    none
 * @return   none  
 */
#define IO_RC1_SetDigitalInput()  (_TRISC1 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC1 GPIO Pin which has a custom name of IO_RC1 as Output
 * @param    none
 * @return   none  
 */
#define IO_RC1_SetDigitalOutput() (_TRISC1 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC2 GPIO Pin which has a custom name of IO_RC2 to High
 * @pre      The RC2 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RC2_SetHigh()          (_LATC2 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC2 GPIO Pin which has a custom name of IO_RC2 to Low
 * @pre      The RC2 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RC2_SetLow()           (_LATC2 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RC2 GPIO Pin which has a custom name of IO_RC2
 * @pre      The RC2 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RC2_Toggle()           (_LATC2 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RC2 GPIO Pin which has a custom name of IO_RC2
 * @param    none
 * @return   none  
 */
#define IO_RC2_GetValue()         _RC2

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC2 GPIO Pin which has a custom name of IO_RC2 as Input
 * @param    none
 * @return   none  
 */
#define IO_RC2_SetDigitalInput()  (_TRISC2 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC2 GPIO Pin which has a custom name of IO_RC2 as Output
 * @param    none
 * @return   none  
 */
#define IO_RC2_SetDigitalOutput() (_TRISC2 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC3 GPIO Pin which has a custom name of IO_RC3 to High
 * @pre      The RC3 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RC3_SetHigh()          (_LATC3 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC3 GPIO Pin which has a custom name of IO_RC3 to Low
 * @pre      The RC3 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RC3_SetLow()           (_LATC3 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RC3 GPIO Pin which has a custom name of IO_RC3
 * @pre      The RC3 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RC3_Toggle()           (_LATC3 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RC3 GPIO Pin which has a custom name of IO_RC3
 * @param    none
 * @return   none  
 */
#define IO_RC3_GetValue()         _RC3

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC3 GPIO Pin which has a custom name of IO_RC3 as Input
 * @param    none
 * @return   none  
 */
#define IO_RC3_SetDigitalInput()  (_TRISC3 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC3 GPIO Pin which has a custom name of IO_RC3 as Output
 * @param    none
 * @return   none  
 */
#define IO_RC3_SetDigitalOutput() (_TRISC3 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD0 GPIO Pin which has a custom name of IO_RD0 to High
 * @pre      The RD0 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RD0_SetHigh()          (_LATD0 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD0 GPIO Pin which has a custom name of IO_RD0 to Low
 * @pre      The RD0 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RD0_SetLow()           (_LATD0 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RD0 GPIO Pin which has a custom name of IO_RD0
 * @pre      The RD0 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RD0_Toggle()           (_LATD0 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RD0 GPIO Pin which has a custom name of IO_RD0
 * @param    none
 * @return   none  
 */
#define IO_RD0_GetValue()         _RD0

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD0 GPIO Pin which has a custom name of IO_RD0 as Input
 * @param    none
 * @return   none  
 */
#define IO_RD0_SetDigitalInput()  (_TRISD0 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD0 GPIO Pin which has a custom name of IO_RD0 as Output
 * @param    none
 * @return   none  
 */
#define IO_RD0_SetDigitalOutput() (_TRISD0 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD2 GPIO Pin which has a custom name of IO_RD2 to High
 * @pre      The RD2 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RD2_SetHigh()          (_LATD2 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD2 GPIO Pin which has a custom name of IO_RD2 to Low
 * @pre      The RD2 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RD2_SetLow()           (_LATD2 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RD2 GPIO Pin which has a custom name of IO_RD2
 * @pre      The RD2 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RD2_Toggle()           (_LATD2 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RD2 GPIO Pin which has a custom name of IO_RD2
 * @param    none
 * @return   none  
 */
#define IO_RD2_GetValue()         _RD2

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD2 GPIO Pin which has a custom name of IO_RD2 as Input
 * @param    none
 * @return   none  
 */
#define IO_RD2_SetDigitalInput()  (_TRISD2 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD2 GPIO Pin which has a custom name of IO_RD2 as Output
 * @param    none
 * @return   none  
 */
#define IO_RD2_SetDigitalOutput() (_TRISD2 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD3 GPIO Pin which has a custom name of IO_RD3 to High
 * @pre      The RD3 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RD3_SetHigh()          (_LATD3 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD3 GPIO Pin which has a custom name of IO_RD3 to Low
 * @pre      The RD3 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RD3_SetLow()           (_LATD3 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RD3 GPIO Pin which has a custom name of IO_RD3
 * @pre      The RD3 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RD3_Toggle()           (_LATD3 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RD3 GPIO Pin which has a custom name of IO_RD3
 * @param    none
 * @return   none  
 */
#define IO_RD3_GetValue()         _RD3

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD3 GPIO Pin which has a custom name of IO_RD3 as Input
 * @param    none
 * @return   none  
 */
#define IO_RD3_SetDigitalInput()  (_TRISD3 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD3 GPIO Pin which has a custom name of IO_RD3 as Output
 * @param    none
 * @return   none  
 */
#define IO_RD3_SetDigitalOutput() (_TRISD3 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Initializes the PINS module
 * @param    none
 * @return   none  
 */
void PINS_Initialize(void);



#endif
