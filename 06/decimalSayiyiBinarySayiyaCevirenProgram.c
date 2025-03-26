//
//  main.c
//  decimalSayiyiBinarySayiyaCevirenProgram
//
//  Created by SILANUR ÇANDIR on 26.03.2025.
//

#include <stdio.h>

int main(void) {
    int mod[8],sayi,i;
    
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
    i=0;
    while (sayi>1) {
        mod[i]=sayi%2;
        sayi=sayi/2;
        i++;
    }
    mod[i]=1;
    
    while (i>=0) {
        printf("%d",mod[i]);
        i--;
    }
    printf("\n\n");
    return 0;
}
