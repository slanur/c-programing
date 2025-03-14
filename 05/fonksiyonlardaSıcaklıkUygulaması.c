//
//  main.c
//  fonksiyonlarda sıcaklık dönüşüm uygulaması
//
//  Created by SILANUR ÇANDIR on 9.12.2024.
//

#include <stdio.h>

int  fahrenheita_donusturme(int);
int  celciusa_donusturme(int);

int main(void) {
    int C,F;
    char kontrol;
    printf("celciusu fahrenheite mi dönüştüreceksiniz?(C'yi seçin)");
    printf("/fahrenheiti celciusa mi dönüştüreceksiniz?(F'i seçin)");
    scanf("%s",&kontrol);
    if (kontrol=='F'|| kontrol=='f') {
        printf("celcius değerini girin:");
        scanf("%d",&C);
        printf("%dC:%dF\n",C,fahrenheita_donusturme(C));
    }
    if (kontrol=='C'|| kontrol=='c') {
        printf("fahrenheit değerini girin:");
        scanf("%d",&F);
        printf("%dF:%dC\n",F,celciusa_donusturme(F));
    }
    
    return 0;
}
int fahrenheita_donusturme(int C){
    return (C*9/5)+32;
}
int celciusa_donusturme(int F){
    return (F-32)*5/9;
}
