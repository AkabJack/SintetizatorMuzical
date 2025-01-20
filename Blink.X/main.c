/*
© [2024] Microchip Technology Inc. and its subsidiaries.

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

#define FCY 8000000
#include "mcc_generated_files/system/system.h"
#include <stdio.h>
#include <xc.h>
#include <libpic30.h>


/*
 * *************Main application**************
 */
int octava_4[11] = {261, 277, 293, 311, 329, 349, 369, 392, 415, 440, 466, 493};
int octava_4_midi[11] = {60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71};
int octava_5[11] = {523, 554, 587, 662, 659, 698, 739, 783, 830, 880, 932, 987};
int octava_5_midi[11] = {72, 73,74, 75, 76, 77, 78, 79, 80, 81, 82, 83};
int octava_6[11] = {1046, 1108, 1174, 1244, 1318, 1396, 1479, 1567, 1661, 1760, 1864, 1975};
int octava_6_midi[11] = {84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95};
void setup_buttons();
void test_signal();
void read_buttons(int list[]);

int main(void){
    SYSTEM_Initialize();
    //setup_buttons();
    CCP3CON1bits.ON = 0;
    int bits[11];
    int lista_frecvente[11];
    int lista_note[11];
    int btn_press;
    int selectie_octava = 1;
    LATCbits.LATC3 = 1;//albastru
    LATDbits.LATD0 = 0;//galben
    LATDbits.LATD3 = 0;//rosu
    
    while(1){//blink rd3
        CCP3CON1bits.ON = 0;
        CCP3STATbits.TRSET = 0;
        btn_press = 0;
        read_buttons(bits);
        for(int i = 0; i<12; i++){//numaram cate butoane am apasat, posibil candidat de unrolling
            if (bits[i] == 0 & selectie_octava <= 1){
                lista_frecvente[btn_press] = octava_4[i];
                lista_note[btn_press] = octava_4_midi[btn_press];
                btn_press++;
                LATCbits.LATC3 = 1;//albastru
                LATDbits.LATD0 = 0;//galben
                LATDbits.LATD3 = 0;//rosu
                
            } else if (bits[i] == 0 & selectie_octava == 2){
                lista_frecvente[btn_press] = octava_5[i];
                lista_note[btn_press] = octava_5_midi[btn_press];
                btn_press++;
                LATDbits.LATD0 = 1;//galben
                LATCbits.LATC3 = 0;//albastru
                LATDbits.LATD3 = 0;//rosu
            }
             else if (bits[i] == 0 & selectie_octava >= 3){
                lista_frecvente[btn_press] = octava_6[i];
                lista_note[btn_press] = octava_6_midi[btn_press];
                btn_press++;
                LATDbits.LATD3 = 1;//rosu
                LATCbits.LATC3 = 0;//albastru
                LATDbits.LATD0 = 0;//galben
            }
        }
        if(btn_press != 0){//avem apasat minim un buton
            CCP3CON1bits.ON = 1;
            for(int i = 0; i < btn_press; i++){
                CCP3STATbits.TRSET = 0;
                SCCP3_PWM_PeriodSet(FCY/lista_frecvente[i]);
                SCCP3_PWM_DutyCycleSet((FCY/lista_frecvente[i])/2);
                CCP3STATbits.TRSET = 1;
                UART1_Write(lista_note[i]);
                __delay_ms(FCY/lista_frecvente[i]/1000);
                __delay_ms(FCY/lista_frecvente[i]/1000);
            }
            CCP3CON1bits.ON = 0;
            btn_press = 0;
        } else {
            if (PORTCbits.RC2 == 0){
                
                if(selectie_octava == 3){
                    selectie_octava = 1;  
                }
                else{
                    selectie_octava = selectie_octava + 1;
                    
                }
            }
            __delay_ms(500);
        }
        //test_signal();
    }    
}


/*
 ********************NOTES********************
 * 
 *
 *
 * void __delay_ms(unsigned int time);
 * 
 * This function relies on a user-supplied definition of FCY to represent the instruction clock frequency.
 * FCY must be defined before header file libpic30.h is included. The specified delay is converted to
 * the equivalent number of instruction cycles and passed to __delay32(). If FCY is not defined, then   
 * __delay_ms() is declared external, causing the link to fail unless the user provides a function with
 * that name
 * 
 */

void test_signal(){
    for (int i = 0; i < 11; i++){
            CCP3STATbits.TRSET = 0;
            SCCP3_PWM_PeriodSet(FCY/octava_4[i]);//800 Hz
            SCCP3_PWM_DutyCycleSet((FCY/octava_4[i])/2);
            CCP3STATbits.TRSET = 1;
            __delay_ms(FCY/octava_4[i]/1000);
            __delay_ms(FCY/octava_4[i]/1000);
            __delay_ms(FCY/octava_4[i]/1000); 
            __delay_ms(FCY/octava_4[i]/1000);
            __delay_ms(FCY/octava_4[i]/1000);
        }
}

void read_buttons(int list[]){
    if(PORTAbits.RA0)list[0]  = 1;
    else list[0]  = 0;
    if(PORTAbits.RA1)list[1]  = 1;
    else list[1]  = 0;
    if(PORTAbits.RA2)list[2]  = 1;
    else list[2]  = 0;
    if(PORTAbits.RA3)list[3]  = 1;
    else list[3]  = 0;
    if(PORTAbits.RA4)list[4]  = 1;
    else list[4]  = 0;
    if(PORTBbits.RB0)list[5]  = 1;
    else list[5]  = 0;
    if(PORTBbits.RB1)list[6]  = 1;
    else list[6]  = 0;
    if(PORTBbits.RB2)list[7]  = 1;
    else list[7]  = 0;
    if(PORTBbits.RB3)list[8]  = 1;
    else list[8]  = 0;
    if(PORTBbits.RB4)list[9]  = 1;
    else list[9]  = 0;
    if(PORTCbits.RC0)list[10] = 1;
    else list[10]  = 0;
    if(PORTCbits.RC1)list[11] = 1;
    else list[11]  = 0;
    
}
void setup_buttons(){
    TRISAbits.TRISA0 = 1;
    TRISAbits.TRISA1 = 1;
    TRISAbits.TRISA2 = 1;
    TRISAbits.TRISA3 = 1;
    TRISAbits.TRISA4 = 1;
    TRISBbits.TRISB0 = 1;
    TRISBbits.TRISB1 = 1;
    TRISBbits.TRISB2 = 1;
    TRISBbits.TRISB3 = 1;
    TRISBbits.TRISB4 = 1;
    TRISCbits.TRISC0 = 1;
    TRISCbits.TRISC1 = 1;
}