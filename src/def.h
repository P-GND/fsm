/*
 * def.h
 *
 * Created: 30/05/2019 09:57:26
 *  Author: cappetta
 */ 

#ifndef DEF_H_
#define DEF_H_

#include <avr/io.h>
/*--------------------------------------------------------------------------------------
        TIPI
---------------------------------------------------------------------------------------*/
/* todo Rimuovere */
typedef unsigned char BYTE;
typedef unsigned int WORD;
typedef unsigned long DWORD;

/*----------------------------------------------------------------
    COSTANTI
-----------------------------------------------------------------*/
#define     F_OSC                 14746000 /* 14.746 MHz*/
#define     TRUE                  1

/* Versione FW */
#define     MAJOR_VERSION         1
#define     MINOR_VERSION         1
/*---------------------------------------------------------------------------------
         MACRO
-----------------------------------------------------------------------------------*/
#define          BIN(b7,b6,b5,b4,b3,b2,b1,b0)      ((b7<<7) | (b6<<6) | (b5<<5) | (b4<<4) | (b3<<3) | (b2<<2) | (b1<<1) |(b0<<0))

#define          LowByte(Val)           ((unsigned char *)&(Val))[0]
#define          HiByte(Val)            ((unsigned char *)&(Val))[1]

//------         LED DI DEBUG ( SU CONNETTORE DI PROGRAMAZIONE )
#define          LED1ON                  PORTB |= 0x20
#define          LED1OFF                 PORTB &= ~0x20
#define          LED2ON                  PORTB |= 0x40
#define          LED2OFF                 PORTB &= ~0x40
#define          LED3ON                  PORTB |= 0x80
#define          LED3OFF                 PORTB &= ~0x80

/* Alimentazione Modublo GSM */
#define          DISABLE_3_8V            PORTC |= 0x08
#define          ENABLE_3_8V             PORTC &= ~0x08

/* BaudRate Selector: Registro UBRRn */
#define          UBRR_VAL(baud)          ( ( (F_OSC/16)/baud ) - 1 ) 

/*---------------------------------------------------------------------------------
           PROTOTIPI
-----------------------------------------------------------------------------------*/
uint8_t isElapsed(uint8_t start, uint8_t tout);
void wait100us(uint8_t wait);

#endif /* DEF_H_ */
