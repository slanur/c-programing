//
//  main.c
//  4 sayının karesini ve küpünü hesaplama
//
//  Created by SILANUR ÇANDIR on 19.10.2024.
//

#include <stdio.h>

int main(void)
{
float sayı1,sayı2,sayı3,sayı4,kare1,kare2,kare3,kare4,kup1,kup2,kup3,kup4;
    printf("4 tane sayı giriniz:");
    scanf("%f %f %f %f",&sayı1,&sayı2,&sayı3,&sayı4);

    kare1=sayı1*sayı1;
    kare2=sayı2*sayı2;
    kare3=sayı3*sayı3;
    kare4=sayı4*sayı4;
    kup1=sayı1*sayı1*sayı1;
    kup2=sayı2*sayı2*sayı2;
    kup3=sayı3*sayı3*sayı3;
    kup4=sayı4*sayı4*sayı4;
    
    /* printf("1. sayının karesi:%f",sayı1*sayı1);
     işlemleri bu şekilde printf in içinde de yapabiliyoruz
     */
    printf("sayıların karesi: %f\n %f\n %f\n %f\n",kare1,kare2,kare3,kare4);
    printf("sayıların küpü:%f\n %f\n %f\n %f\n",kup1,kup2,kup3,kup4);
    
    
    
    return 0;
}
