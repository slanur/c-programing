//
//  main.c
//  kaptaki gazın basıncını hesaplama
//
//  Created by SILANUR ÇANDIR on 21.10.2024.
//

#include <stdio.h>

int main(void)
{
    float n,T,V,basınç,derece;
    const float R=0.082;
    printf("mol sayısını giriniz;");
    scanf("%f",&n);
    printf("sıcaklık değerini giriniz;");
    scanf("%f",&derece);
    //sıcaklığı kelvin cinsinden yazıyoruz
    T=derece+273;
    printf("hacim değerini giriniz;");
    scanf("%f",&V);
    
    basınç=n*R*T/V;
    printf("bu koşullardaki gazın basıncı:%f\n",basınç);

    return 0;
}

