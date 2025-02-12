//
//  main.c
//  girilen 4 sayının aritmetik ortalamasını bulan program
//
//  Created by SILANUR ÇANDIR on 31.10.2024.
//

#include <stdio.h>

int main(void)
{
    int sayı1,sayı2,sayı3,sayı4;
    float formül=0.0;
    printf("4 tane pozitif tam sayı giriniz:");
    scanf("%d\n %d %d %d",&sayı1,&sayı2,&sayı3,&sayı4);

    formül=(sayı1+sayı2+sayı3+sayı4)/4.0;
    printf("girdiğiniz sayıların aritmetik ortalaması:%.2f\n",formül);
    return 0;
}
