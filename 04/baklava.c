//
//  main.c
//  baklava
//
//  Created by SILANUR ÇANDIR on 12.11.2024.
//

#include <stdio.h>

int main(void) {
    
    int boyut=0,i,j,k,sıra;
    printf("baklavanın boyutunu giriniz:");
    scanf("%d",&boyut);
    sıra=boyut;
    
    for (i=1;i<=boyut;i++) {
        for (j=i;j<=boyut;j++) {
            printf(" ");
        }//boşluk bitişi
        for (k=1;k<=2*i-1;k++) {
            printf("*");
        }//yıldız bitişi
        printf("\n");
    }//baklavanın üst kısmının bitişi

    for (i=1;i<=boyut;i++) {
        for (j=1;j<=i;j++) {
            printf(" ");
        }
        for (k=2*sıra-1;k>=1;k--) {
            printf("*");
        }
        sıra-=1;
        printf("\n");
    }//baklavanın alt kısmının bitişi
  
    
    return 0;
}
