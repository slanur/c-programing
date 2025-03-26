//
//  main.c
// girilen cümledeki kelimekerin baş harfini yazdıran program
//
//  Created by SILANUR ÇANDIR on 7.03.2025.
//

#include <stdio.h>
void ilkHarf(char*);
int main(void) {
    char cumle[100];
    
    printf("bir cumle giriniz:");
    fgets(cumle,100,stdin);
    ilkHarf(cumle);
    printf("\n\n");

    return 0;
}

void ilkHarf(char* ptr){
    putchar(*ptr);
    for (;*ptr!='\0';ptr++) {
        if (*ptr==' ') putchar(*(ptr+1)); // boşluğu tespit ediyoruz ve yeni gelecek olan kelimenin ilk harfini alıyoruz
    }
    
}
// *ptr dizinin ilk karakterine karşılık gelir
