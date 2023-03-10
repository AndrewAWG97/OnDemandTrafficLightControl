
#ifndef REGISTERS_H_
#define REGISTERS_H_

//****************************
//* DIO REGISTERS
//****************************
//PortA registers
#define PORTA (*(volatile uint8*)(0x3B))
#define DDRA  (*(volatile uint8*)(0x3A))
#define PINA  (*(volatile uint8*)(0x39))

//PortB registers
#define PORTB (*(volatile uint8*)(0x38))
#define DDRB  (*(volatile uint8*)(0x37))
#define PINB  (*(volatile uint8*)(0x36))

//PortC registers
#define PORTC (*(volatile uint8*)(0x35))
#define DDRC  (*(volatile uint8*)(0x34))
#define PINC  (*(volatile uint8*)(0x33))

//PortD registers
#define PORTD (*(volatile uint8*)(0x32))
#define DDRD  (*(volatile uint8*)(0x31))
#define PIND  (*(volatile uint8*)(0x30))

//****************************
//* Timer0 REGISTERS
//****************************
#define TCCR0 (*(volatile uint8*)(0x53))
#define TCNT0 (*(volatile uint8*)(0x52))
#define TIFR  (*(volatile uint8*)(0x58))
#define TIMSK (*(volatile uint8*)(0x59))


//****************************
//* Interrupt REGISTERS
//****************************
#define SREG  (*(volatile uint8*)(0x5F))
#define GICR  (*(volatile uint8*)(0x5B))
#define MCUCR (*(volatile uint8*)(0x55))

#endif /* REGISTERS_H_ */
