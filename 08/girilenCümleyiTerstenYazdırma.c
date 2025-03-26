//
//  main.c
//  girileCümleyiTerstenYazdırma
//
//  Created by SILANUR ÇANDIR on 14.03.2025.
//

#include <stdio.h>
#include <string.h>

void terstenYazma(char*);
int main(void) {
    char cumle[100];
    
    printf("bir cumle giriniz:");
    fgets(cumle,100,stdin);
    terstenYazma(cumle);
    
    printf("\n");
        return 0;
}
void terstenYazma(char *cumle){
    int harfSayisi=0;
    harfSayisi=strlen(cumle);//cümlenin kaç karakter olduğunu bulan program
    printf("cumlenin ters hali:");
    for (;harfSayisi!=-1;harfSayisi--) {
        printf("%c",cumle[harfSayisi]);
    }
}
