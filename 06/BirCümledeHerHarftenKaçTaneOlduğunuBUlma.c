//
//  main.c
//  birCümledeHerHarftenKacTaneOlduğunuBulma
//
//  Created by SILANUR ÇANDIR on 18.01.2025.
//

#include <stdio.h>
void harfSayimi(char cumle[],int harf[]);
int main(void) {
    char cumle[100];
    int harf[26];//ingiliz alfabesi 26 karakter
    printf("bir cumle girinniz:");
    for (int i=0;i<100;i++) {
        scanf("%c",&cumle[i]);
        if (cumle[i]=='.') break;
        }
    harfSayimi(cumle,harf);
    for (int i=0;i<26;i++) {
        printf("%c/%c:%d\n",'A'+i,'a'+i,harf[i]);
    }
    
    return 0;
}

void harfSayimi(char cumle[],int harf[]){
    for (int i=0;i<26;i++) {
        harf[i]=0;
    }
    for (int i=0;cumle[i]!='.';i++) {
        if (cumle[i]>='A' && cumle[i]<='Z') {
            harf[(int)cumle[i]-(int)'A']++;
        }
        if (cumle[i]>='a' && cumle[i]<='z') {
            harf[(int)cumle[i]-(int)'a']++;
        }
    }
    
}
