//
//  main.c
//  girilen metnin karakter sayisinıı bulma
//
//  Created by SILANUR ÇANDIR on 25.01.2025.
//

#include <stdio.h>
#include <string.h>



int main(void) {
    char cumle[100];
    printf("bir cumle giriniz:");
    fgets(cumle,100,stdin);
    printf("karakter sayisi:%lu\n",strlen(cumle)-1);
    //fgets fonksiyonu stringin sonuna \0 ifadesi dışında birde \n ifadesi koyuyor bu sebeple strlende karakter sayisini almaya çalıştığımızda 1 fazla çıkıyor

        return 0;
}

