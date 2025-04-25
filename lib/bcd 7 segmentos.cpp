#include <stm32f100xb.h>
#include DECBCD 7 seg_H

int ent = I0|I1<<1|I2<<2|I3<<3;
void BCD_Init() {
  RCC -> APB2ENR |=RCC_APB2ENR_IOPAEN|RCC_APB2ENR_IOPBEN ;
  GPIOA ->CRL= 0X11111111;
  GPIOA ->CRH= 0X1111111;

  
}
int BCD(int I0, int I1, int I2, int I3){
int ent = I0|I1<<1|I2<<2|I3<<3;
switch(ent){
  case  0000:

    GPIOA ->BSRR |=GPIO_BSRR_BS0|GPIO_BSRR_BS1|
                 GPIO_BSRR_BS2|GPIO_BSRR_BS3|
                 GPIO_BSRR_BS4|GPIO_BSRR_BS5|
                 GPIO_BSRR_BR6|;
              
   break;
   case  0001:

    GPIOA ->BSRR |=GPIO_BSRR_BR0|GPIO_BSRR_BS1|
                 GPIO_BSRR_BS2|GPIO_BSRR_BR3|
                 GPIO_BSRR_BR4|GPIO_BSRR_BR5|
                 GPIO_BSRR_BR6|;
                
  case  0010:

    GPIOA ->BSRR |=GPIO_BSRR_BS0|GPIO_BSRR_BS1|
                 GPIO_BSRR_BR2|GPIO_BSRR_BS3|
                 GPIO_BSRR_BS4|GPIO_BSRR_BR5|
                 GPIO_BSRR_BS6|;
            
break;
case  0011:

    GPIOA ->BSRR |=GPIO_BSRR_BS0|GPIO_BSRR_BS1|
                   GPIO_BSRR_BS2|GPIO_BSRR_BS3|
                   GPIO_BSRR_BR4|GPIO_BSRR_BR5|
                   GPIO_BSRR_BS6|
              
break;
case  0100:
  
    GPIOA ->BSRR |=GPIO_BSRR_BR0|GPIO_BSRR_BS1|
                 GPIO_BSRR_BS2|GPIO_BSRR_BS3|
                 GPIO_BSRR_BR4|GPIO_BSRR_BS5|
                 GPIO_BSRR_BS6|;
             

break;
case  0101:
  
    GPIOA ->BSRR |=GPIO_BSRR_BS0|GPIO_BSRR_BR1|
                 GPIO_BSRR_BS2|GPIO_BSRR_BR3|
                 GPIO_BSRR_BR4|GPIO_BSRR_BS5|
                 GPIO_BSRR_BRS|;
              

break;
case  0110:
  
    GPIOA ->BSRR |=GPIO_BSRR_BS0|GPIO_BSRR_BR1|
                 GPIO_BSRR_BS2|GPIO_BSRR_BS3|
                 GPIO_BSRR_BS4|GPIO_BSRR_BS5|
                 GPIO_BSRR_BS6|;
               
break;
case  0111:
  
    GPIOA ->BSRR |=GPIO_BSRR_BS0|GPIO_BSRR_BS1|
                 GPIO_BSRR_BS2|GPIO_BSRR_BR3|
                 GPIO_BSRR_BR4|GPIO_BSRR_BR5|
                 GPIO_BSRR_BS6|;
              

break;
case  1000:
  
    GPIOA ->BSRR |=GPIO_BSRR_BS0|GPIO_BSRR_BS1|
                 GPIO_BSRR_BR2|GPIO_BSRR_B3|
                 GPIO_BSRR_BR4|GPIO_BSRR_BR5|
                 GPIO_BSRR_BS6|;
               

break;
case  1001:
  
    GPIOA ->BSRR |=GPIO_BSRR_BS0|GPIO_BSRR_BS1|
                 GPIO_BSRR_BS2|GPIO_BSRR_BS3|
                 GPIO_BSRR_BR4|GPIO_BSRR_BS5|
                 GPIO_BSRR_BS6|;

               
}


}
