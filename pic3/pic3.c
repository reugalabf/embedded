/* ----------------------------------------------------------------------- */
/* Template source file generated by piklab */
#include <pic16f877.h>
#include <delay.h>
#include "macros.h"
/* ----------------------------------------------------------------------- */
/* Configuration bits: adapt to your setup and needs */
typedef unsigned int word;
word __at 0x2007 CONFIG = _RC_OSC & _WDT_ON & _PWRTE_OFF & _BODEN_ON & _LVP_ON & _CPD_OFF & _WRT_ENABLE_ON & _DEBUG_OFF & _CP_OFF;

// assumes the wiring goes from portb0->led7segment0..portb6->led7segment6 and porb7->led7segmentcc
unsigned int display[10] ={0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7f,0x67,0x3F} ;//Definicion de Numeros en Display 7 Seg
char i=0;



//    Funcion Principal del Programa, Contador de 0 a 9, segun cambios en RA0
void main()
 {
  TRISB=0;            //Configurar Puerto b como Salidas
  
  while(1)
  {
    PORTB=display[i++];
    delay_ms(500);
    PORTB=0x80;
    if (i==10) 
      i=0;    
  }
}