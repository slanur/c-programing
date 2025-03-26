//
//  main.c
//  structlarınDizilerleKullanımı
//
//  Created by SILANUR ÇANDIR on 16.03.2025.
//kitap örneği; kitap adı sayfa sayısı yazar adı ve basım yılı

#include <stdio.h>

struct kitap{
    char*  kitapAdi;
    char* yazarAdi;
    int sayfaSayisi;
    int basimYili;
};


int main(void) {
    int i;
    struct kitap x[2];
    x[0].kitapAdi="Harry Potter";
    x[0].yazarAdi="J.K Rowling";
    x[0].sayfaSayisi=238;
    x[0].basimYili=1999;
    
    x[1].kitapAdi="Bu Ülke";
    x[1].yazarAdi="Cemil Meriç";
    x[1].sayfaSayisi=250;
    x[1].basimYili=1998;
    
    for (i=0;i<2;i++) {
        printf("%d. kitap\n",i+1);
        printf("kitap adi:%s\n",x[i].kitapAdi);
        printf("Yazar adi:%s\n",x[i].yazarAdi);
        printf("Basim Yili:%d\n",x[i].basimYili);
        printf("Sayfa Sayisi:%d\n\n",x[i].sayfaSayisi);
    }

    return 0;
}
