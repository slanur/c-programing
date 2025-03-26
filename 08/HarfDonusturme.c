//
//  main.c
//  buyukHarfiKuçukHarfeKuçukHarfiBuyukHarfeDonuşturme
//
//  Created by SILANUR ÇANDIR on 7.03.2025.
//

#include <stdio.h>
void upperToLower(char*);
void lowerToUpper(char*);

int main(void) {
    int secim=0;
    char cumle[100];
    printf("1-> buyuk harfi kucuk harfe cevir\n");
    printf("2-> kucuk harfi buyuk harfe cevir:");
    scanf("%d",&secim);
    getchar();//scanf'ten sonra fgets ile string almak istiyorsak araya bunu eklemek zorundayız
    switch (secim) {
        case 1: puts("donusturmek istediginiz cumleyi giriniz:");
            fgets(cumle,100,stdin);
            upperToLower(cumle);
            break;
        case 2:
            puts("donusturmek istediginiz cumleyi giriniz:");
                fgets(cumle,100,stdin);
            lowerToUpper(cumle);
            break;
        default:printf("yanlıs secim yaptiniz");
            break;
    }
    return 0;
}
void upperToLower(char* ptr){
    for (;*ptr!='\0';ptr++) {
        if (*ptr>='A' && *ptr<='Z') {
            *ptr+=32;
        }
        putchar(*ptr);
    }
    }
void lowerToUpper(char* ptr){
    for (;*ptr!='\0';ptr++) {
        
        if (*ptr>='a' && *ptr<='z') {
            *ptr-=32;
        }
        putchar(*ptr);//sadece tek bir harf yazfırmak için putchar kullanıyoruz
    }

    
}
