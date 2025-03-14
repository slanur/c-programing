//
//  main.c
//  diziDeğerleriniSıralama
//
//  Created by SILANUR ÇANDIR on 12.01.2025.
//

#include <stdio.h>
int alinanSayi[5];
int alnansyi=0;
void kucuktenBuyuge(void);
void Siralama(void);
void sayiAlma(void);

int main(void) {
    sayiAlma();
    kucuktenBuyuge();
    Siralama();
    printf("\n");
    return 0;
}


void kucuktenBuyuge(void){
    for (int i=0;i<5;i++) {
        for (int j=i+1;j<5;j++) {
            if (alinanSayi[i]>alinanSayi[j]) {
                alnansyi=alinanSayi[i];
                alinanSayi[i]=alinanSayi[j];
                alinanSayi[j]=alnansyi;
            }//if bloğu aldığımız sayı karşılaştırdığımız sayıdan küçükse yer değiştiriyor
        }//bu for dizideki bir elemanı diğer elemanlarla karşılaştırmaya yarıyor
    }

}
void Siralama(void){
    
  printf("siralama:");
    
  for (int i=0;i<5;i++) {
    printf("%d ",alinanSayi[i]);
}
}
void sayiAlma(void){
    printf("5 tane sayi giriniz:");
    for (int i=0;i<5;i++) {
        scanf("%d",&alinanSayi[i]);
    }
}
