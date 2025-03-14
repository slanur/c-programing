//
//  main.c
//  harfSırasiDeğiştirmeUygulamasi
//
//  Created by SILANUR ÇANDIR on 24.01.2025.
//
/*
 Yazilim
 azilimY
 zilimYa
 ilimYaz
 limYazi
 imYazil
 mYazili
 Yazilim
 */
#include <stdio.h>
void harfDegistirme(char*,int);

int main(void) {
    char name[]={'Y','a','z','i','l','i','m'};
    int sizeName=0;
    sizeName=sizeof(name)/sizeof(name[0]);
    harfDegistirme(name,sizeName);
    return 0;
}


void harfDegistirme(char* name,int sizeName){
    
    for (int i=0;i<sizeName;i++) {
        char name0;
        name0=name[0];
        
        for (int j=0;j<sizeName-1;j++) {
            name[j]=name[j+1];
        }//dizideki her elemani bir onceki elemana atiyoruz
        name[sizeName-1]=name0;//son elemana dizinin ilk elemanini atiyoruz
        
        for (int k=0;k<sizeName;k++) {
            printf("%c",*(name+k));
        }//diziyi yazdiran döngü
        printf("\n");
    }
    printf("\n");

}
