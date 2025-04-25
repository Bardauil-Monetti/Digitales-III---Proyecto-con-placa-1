#include <stm32f100xb.h>
#include decBCD_H

int ent = I0|I1<<1|I2<<2|I3<<3;
void BCD_Init() {
  RCC -> APB2ENR |=RCC_APB2ENR_IOPAEN|RCC_APB2ENR_IOPBEN ;
  GPIOB ->CRL= 0X11111111;
  GPIOB ->CRH= 0X11111111;

  
}
int BCD(int I0, int I1, int I2, int I3){
int ent = I0|I1<<1|I2<<2|I3<<3;
switch(ent){
  case  0000:

    GPIOA ->BSRR |=GPIO_BSRR_BS0|GPIO_BSRR_BR1|
                 GPIO_BSRR_BR2|GPIO_BSRR_BR3|
                 GPIO_BSRR_BR4|GPIO_BSRR_BR5|
                 GPIO_BSRR_BR6|GPIO_BSRR_BR7|
                 GPIO_BSRR_BR8|GPIO_BSRR_BR9|
                 GPIO_BSRR_BR10|GPIO_BSRR_BR11|
                 GPIO_BSRR_BR12|GPIO_BSRR_BR13|
                 GPIO_BSRR_BR14|GPIO_BSRR_BR15;
   break;
   case  0001:

    GPIOA ->BSRR |=GPIO_BSRR_BR0|GPIO_BSRR_BS1|
                 GPIO_BSRR_BR2|GPIO_BSRR_BR3|
                 GPIO_BSRR_BR4|GPIO_BSRR_BR5|
                 GPIO_BSRR_BR6|GPIO_BSRR_BR7|
                 GPIO_BSRR_BR8|GPIO_BSRR_BR9|
                 GPIO_BSRR_BR10|GPIO_BSRR_BR11|
                 GPIO_BSRR_BR12|GPIO_BSRR_BR13|
                 GPIO_BSRR_BR14|GPIO_BSRR_BR15;
 break;
  case  0010:

    GPIOA ->BSRR |=GPIO_BSRR_BR0|GPIO_BSRR_BR1|
                 GPIO_BSRR_BS2|GPIO_BSRR_BR3|
                 GPIO_BSRR_BR4|GPIO_BSRR_BR5|
                 GPIO_BSRR_BR6|GPIO_BSRR_BR7|
                 GPIO_BSRR_BR8|GPIO_BSRR_BR9|
                 GPIO_BSRR_BR10|GPIO_BSRR_BR11|
                 GPIO_BSRR_BR12|GPIO_BSRR_BR13|
                 GPIO_BSRR_BR14|GPIO_BSRR_BR15;
break;
case  0011:

    GPIOA ->BSRR |=GPIO_BSRR_BR0|GPIO_BSRR_BR1|
                   GPIO_BSRR_BS2|GPIO_BSRR_BR3|
                   GPIO_BSRR_BR4|GPIO_BSRR_BR5|
                   GPIO_BSRR_BR6|GPIO_BSRR_BR7|
                   GPIO_BSRR_BR8|GPIO_BSRR_BR9|
                   GPIO_BSRR_BR10|GPIO_BSRR_BR11|
                   GPIO_BSRR_BR12|GPIO_BSRR_BR13|
                   GPIO_BSRR_BR14|GPIO_BSRR_BR15;
break;
case  0100:
  
    GPIOA ->BSRR |=GPIO_BSRR_BR0|GPIO_BSRR_BR1|
                 GPIO_BSRR_BR2|GPIO_BSRR_BS3|
                 GPIO_BSRR_BR4|GPIO_BSRR_BR5|
                 GPIO_BSRR_BR6|GPIO_BSRR_BR7|
                 GPIO_BSRR_BR8|GPIO_BSRR_BR9|
                 GPIO_BSRR_BR10|GPIO_BSRR_BR11|
                 GPIO_BSRR_BR12|GPIO_BSRR_BR13|
                 GPIO_BSRR_BR14|GPIO_BSRR_BR15;

break;
case  0101:
  
    GPIOA ->BSRR |=GPIO_BSRR_BS0|GPIO_BSRR_BR1|
                 GPIO_BSRR_BR2|GPIO_BSRR_BR3|
                 GPIO_BSRR_BS4|GPIO_BSRR_BR5|
                 GPIO_BSRR_BR6|GPIO_BSRR_BR7|
                 GPIO_BSRR_BR8|GPIO_BSRR_BR9|
                 GPIO_BSRR_BR10|GPIO_BSRR_BR11|
                 GPIO_BSRR_BR12|GPIO_BSRR_BR13|
                 GPIO_BSRR_BR14|GPIO_BSRR_BR15;

break;
case  0110:
  
    GPIOA ->BSRR |=GPIO_BSRR_BS0|GPIO_BSRR_BR1|
                 GPIO_BSRR_BR2|GPIO_BSRR_BR3|
                 GPIO_BSRR_BR4|GPIO_BSRR_BS5|
                 GPIO_BSRR_BR6|GPIO_BSRR_BR7|
                 GPIO_BSRR_BR8|GPIO_BSRR_BR9|
                 GPIO_BSRR_BR10|GPIO_BSRR_BR11|
                 GPIO_BSRR_BR12|GPIO_BSRR_BR13|
                 GPIO_BSRR_BR14|GPIO_BSRR_BR15;

break;
case  0111:
  
    GPIOA ->BSRR |=GPIO_BSRR_BS0|GPIO_BSRR_BR1|
                 GPIO_BSRR_BR2|GPIO_BSRR_BR3|
                 GPIO_BSRR_BR4|GPIO_BSRR_BR5|
                 GPIO_BSRR_BS6|GPIO_BSRR_BR7|
                 GPIO_BSRR_BR8|GPIO_BSRR_BR9|
                 GPIO_BSRR_BR10|GPIO_BSRR_BR11|
                 GPIO_BSRR_BR12|GPIO_BSRR_BR13|
                 GPIO_BSRR_BR14|GPIO_BSRR_BR15;

break;
case  1000:
  
    GPIOA ->BSRR |=GPIO_BSRR_BS0|GPIO_BSRR_BR1|
                 GPIO_BSRR_BR2|GPIO_BSRR_BR3|
                 GPIO_BSRR_BR4|GPIO_BSRR_BR5|
                 GPIO_BSRR_BR6|GPIO_BSRR_BS7|
                 GPIO_BSRR_BR8|GPIO_BSRR_BR9|
                 GPIO_BSRR_BR10|GPIO_BSRR_BR11|
                 GPIO_BSRR_BR12|GPIO_BSRR_BR13|
                 GPIO_BSRR_BR14|GPIO_BSRR_BR15;

break;
case  1001:
  
    GPIOA ->BSRR |=GPIO_BSRR_BS0|GPIO_BSRR_BR1|
                 GPIO_BSRR_BR2|GPIO_BSRR_BR3|
                 GPIO_BSRR_BR4|GPIO_BSRR_BR5|
                 GPIO_BSRR_BR6|GPIO_BSRR_BR7|
                 GPIO_BSRR_BS8|GPIO_BSRR_BR9|
                 GPIO_BSRR_BR10|GPIO_BSRR_BR11|
                 GPIO_BSRR_BR12|GPIO_BSRR_BR13|
                 GPIO_BSRR_BR14|GPIO_BSRR_BR15;

break;
case  1010:
  
    GPIOA ->BSRR |=GPIO_BSRR_BS0|GPIO_BSRR_BR1|
                 GPIO_BSRR_BR2|GPIO_BSRR_BR3|
                 GPIO_BSRR_BR4|GPIO_BSRR_BR5|
                 GPIO_BSRR_BR6|GPIO_BSRR_BR7|
                 GPIO_BSRR_BR8|GPIO_BSRR_BS9|
                 GPIO_BSRR_BR10|GPIO_BSRR_BR11|
                 GPIO_BSRR_BR12|GPIO_BSRR_BR13|
                 GPIO_BSRR_BR14|GPIO_BSRR_BR15;
    
break;
case  1010:
  
    GPIOA ->BSRR |=GPIO_BSRR_BS0|GPIO_BSRR_BR1|
                 GPIO_BSRR_BR2|GPIO_BSRR_BR3|
                 GPIO_BSRR_BR4|GPIO_BSRR_BR5|
                 GPIO_BSRR_BR6|GPIO_BSRR_BR7|
                 GPIO_BSRR_BR8|GPIO_BSRR_BR9|
                 GPIO_BSRR_BS10|GPIO_BSRR_BR11|
                 GPIO_BSRR_BR12|GPIO_BSRR_BR13|
                 GPIO_BSRR_BR14|GPIO_BSRR_BR15;

break;
case  1011:
  
    GPIOA ->BSRR |=GPIO_BSRR_BS0|GPIO_BSRR_BR1|
                 GPIO_BSRR_BR2|GPIO_BSRR_BR3|
                 GPIO_BSRR_BR4|GPIO_BSRR_BR5|
                 GPIO_BSRR_BR6|GPIO_BSRR_BR7|
                 GPIO_BSRR_BR8|GPIO_BSRR_BR9|
                 GPIO_BSRR_BR10|GPIO_BSRR_BS11|
                 GPIO_BSRR_BR12|GPIO_BSRR_BR13|
                 GPIO_BSRR_BR14|GPIO_BSRR_BR15;

break;
case  1100:
  
    GPIOA ->BSRR |=GPIO_BSRR_BS0|GPIO_BSRR_BR1|
                GPIO_BSRR_BR2|GPIO_BSRR_BR3|
                 GPIO_BSRR_BR4|GPIO_BSRR_BR5|
                 GPIO_BSRR_BR6|GPIO_BSRR_BR7|
                 GPIO_BSRR_BR8|GPIO_BSRR_BR9|
                 GPIO_BSRR_BR10|GPIO_BSRR_BR11|
                 GPIO_BSRR_BS12|GPIO_BSRR_BR13|
                 GPIO_BSRR_BR14|GPIO_BSRR_BR15;

break;
case  1101:
  
    GPIOA ->BSRR |=GPIO_BSRR_BS0|GPIO_BSRR_BR1|
                 GPIO_BSRR_BR2|GPIO_BSRR_BR3|
                 GPIO_BSRR_BR4|GPIO_BSRR_BR5|
                 GPIO_BSRR_BR6|GPIO_BSRR_BR7|
                 GPIO_BSRR_BR8|GPIO_BSRR_BR9|
                 GPIO_BSRR_BR10|GPIO_BSRR_BR11|
                 GPIO_BSRR_BR12|GPIO_BSRR_BS13|
                 GPIO_BSRR_BR14|GPIO_BSRR_BR15;

break;
case  1110:
  
    GPIOA ->BSRR |=GPIO_BSRR_BS0|GPIO_BSRR_BR1|
                 GPIO_BSRR_BR2|GPIO_BSRR_BR3|
                 GPIO_BSRR_BR4|GPIO_BSRR_BR5|
                 GPIO_BSRR_BR6|GPIO_BSRR_BR7|
                 GPIO_BSRR_BR8|GPIO_BSRR_BR9|
                 GPIO_BSRR_BR10|GPIO_BSRR_BR11|
                 GPIO_BSRR_BR12|GPIO_BSRR_BR13|
                 GPIO_BSRR_BS14|GPIO_BSRR_BR15;

break;
case  1111:
  
    GPIOA ->BSRR |=GPIO_BSRR_BS0|GPIO_BSRR_BR1|
                 GPIO_BSRR_BR2|GPIO_BSRR_BR3|
                 GPIO_BSRR_BR4|GPIO_BSRR_BR5|
                 GPIO_BSRR_BR6|GPIO_BSRR_BR7|
                 GPIO_BSRR_BR8|GPIO_BSRR_BR9|
                 GPIO_BSRR_BR10|GPIO_BSRR_BR11|
                 GPIO_BSRR_BR12|GPIO_BSRR_BR13|
                 GPIO_BSRR_BR14|GPIO_BSRR_BS15;
}


}





