/* 
 * File:   main.c
 * Author: Nistor Ciprian Alexandru
 * Created on 23.11.2024, 10:33
 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include "libpic30.h"

/*
 * 
 */

void config_mc();
void config_input_bits();
void config_pwm_mode();
void config_uart_module();
void loop();

int main(int argc, char** argv) {
    config_mc();
    config_input_bits();
    config_pwm_mode();
    config_uart_module();

    loop();

    return (EXIT_SUCCESS);
}

void config_mc() {
    //enable clock generator
    CLK1CONbits.ON = 1;
    CLK1CONbits.OE = 1;
    //configure backup oscillator in case of failure
    CLK1CONbits.BOSC = 2; //BFRC
        //select backup clock source:
        //[1] = FRC - Internal 8 MHz RC oscillator
        //[2] = BFRC - Internal Backup 8 MHz RC oscillator
        //[3] = POSC - Primary crystal oscillator (4-32 MHz)
        //[4] = LPRC
        //[5] = PLL1 Fout output
        //[6] = PLL2 Fout output
        //[7] = PLL1 VCO FracDiv output
        //[8] = PLL2 VCO FracDiv output
        //[9] = REFI1 - user definable clock source
        //[10] = REFI2 - user definable clock source
    CLK1CONbits.FSCMEN = 1; //enable fail safe
        //configure clock divide
    CLK1DIVbits.INTDIV = 1; //integer divide factor
    CLK1DIVbits.FRACDIV = 0x0080; //fractional divide factor
    CLK1CONbits.DIVSWEN = 1; //enable divide factors to get updated
    while (CLK1CONbits.DIVSWEN); //hardware cleared
        // Fdiv = Fin / 2*(INTDIV+(FRCDIV/512))
        //enable clock switching
    CLK1CONbits.NOSC = 1; //select clock source
        //[1] = FRC - Internal 8 MHz RC oscillator
        //[2] = BFRC - Internal Backup 8 MHz RC oscillator
        //[3] = POSC - Primary crystal oscillator (4-32 MHz)
        //[4] = LPRC
        //[5] = PLL1 Fout output
        //[6] = PLL2 Fout output
        //[7] = PLL1 VCO FracDiv output
        //[8] = PLL2 VCO FracDiv output
        //[9] = REFI1 - user definable clock source
        //[10] = REFI2 - user definable clock source
    CLK1CONbits.OSWEN = 1; //enable clock switching
    while (CLK1CONbits.OSWEN); //wait for switching(hardware clear))
    IFS0bits.CLKFAILIF = 0; // enable clock failure interrupt
    IEC0bits.CLKFAILIE = 1;
    
}

void config_input_bits() {//configure input bits
    PORTA = 0b00011111;
    PORTB = 0b00011111;
    PORTC = 0b00001111;
}

void config_pwm_mode() {
    //Ensuring PWM Generators 1-3 are disabled prior to configuring module
    PG3CONbits.ON = 0;
   
}//808

void config_uart_module() {


}

void loop() {
    //do stuff

}

