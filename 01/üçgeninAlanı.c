//
//  main.c
//  üçgenin alanını hesaplama
//
//  Created by SILANUR ÇANDIR on 28.10.2024.
//

#include <stdio.h>

int main(void)
{
    int yukseklik,tabanalanı;
    float alan;
    printf("yüksekliği giriniz:");
    scanf("%d",&yukseklik);
    printf("taban alanını giriniz:");
    scanf("%d",&tabanalanı);
    alan=(tabanalanı*yukseklik)/2.00;
    printf("üçgenin alanı:%f\n",alan);
    
    return 0;
}
