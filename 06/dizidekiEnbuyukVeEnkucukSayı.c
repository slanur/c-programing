//
//  main.c
//  dizidekiEnbuyukVeEnkucukSayi
//
//  Created by SILANUR ÇANDIR on 12.01.2025.
//
/*
 bir sinif en fazla 100 öğrenciden oluşabilir.sınıfta bulunan öğrenci sayısını girdi olarak alıp her öğrencinin okul numarası ile notunu iki ayrı arraya okutalim.sonuç olarak en yüksek ve en düşük notu alan öğrenciler ekrana yazılsın.
 */
#include <stdio.h>
int ogrenciSayisi;
int big=0,small=100,bigİndex=0,smallİndex=0;
int okulNumarasi[100]={0};
int notlar[100];
void numara(void);
void not(void);
void maxMin(void);

int main(void) {
    
    printf("sınıfta bulunan öğrenci sayısını giriniz:");
    scanf("%d",&ogrenciSayisi);
    numara();
    not();
    maxMin();
    return 0;
}


void numara(void){
    printf("okul numaralarini giriniz:");
    for (int i=0;i<ogrenciSayisi;i++) {
        scanf("%d",&okulNumarasi[i]);
    }
}
void not(void){
    printf("notları giriniz:");
    for (int i=0;i<ogrenciSayisi;i++) {
        scanf("%d",&notlar[i]);
    }
}
void maxMin(void){
    for (int i=0;i<ogrenciSayisi;i++) {
        if (notlar[i]>big) {
            big=notlar[i];
            bigİndex=i;
        }
        if (notlar[i]<small) {
            small=notlar[i];
            smallİndex=i;
        }

    }
    printf("en yüksek:%d numaralı||puanı:%d\n",okulNumarasi[bigİndex],big);
    printf("en düşük:%d numaralı||puanı:%d\n",okulNumarasi[smallİndex],small);

}
