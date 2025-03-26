//
//  main.c
//  structlarınPointerlarlaKullanımı
//
//  Created by SILANUR ÇANDIR on 16.03.2025.
//

#include <stdio.h>
struct kitap{
    char* kitapAdi;
    char* yazar;
    int basimYili;
    int sayfaSayisi;
};
void printMe(struct kitap*);
int main(void) {
    struct kitap x;
    struct kitap* y;
    y=&x;
    
    (*y).kitapAdi="Bu Ülke";
    (*y).yazar="Cemil Meriç";
    (*y).sayfaSayisi=256;
    (*y).basimYili=1960;
    printMe(y);
   


    return 0;
}
void printMe(struct kitap* ptr){
    
    printf("kitap adi:%s\n",(*ptr).kitapAdi);
    printf("Yazar adi:%s\n",(*ptr).yazar);
    printf("Basim yili:%d\n",(*ptr).basimYili);
    printf("sayfa sayisi:%d\n\n ",(*ptr).sayfaSayisi);
}
 
