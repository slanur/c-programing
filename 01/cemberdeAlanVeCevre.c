//
//  main.c
//  çemberin alanını ve cevresini hesaplama
//
//  Created by SILANUR ÇANDIR on 18.10.2024.


#include <stdio.h>

int main(void)
{
    float yarıçap,cevre,alan;
    const float pi=3.1415;
//    const tanımlanan değişkenin sonradan değerinin değiştirelemeyeceğini ifade eder
    
    printf("yarıçapı giriniz");
    scanf("%f",&yarıçap);
    cevre=2*pi*yarıçap;
    alan=pi*yarıçap*yarıçap;
    printf("çevre: %f\n",cevre);
    printf("alan: %f\n",alan);
    
    
    return 0;
}
