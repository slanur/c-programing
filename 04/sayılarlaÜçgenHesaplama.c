//
//  main.c
//  sayılarla üçgen yapma
//
//  Created by SILANUR ÇANDIR on 24.11.2024.
//

#include <stdio.h>

int main(void) {
    int i,j,boyut,k=1;
    printf("üçgenin yüksekligini giriniz:");
    scanf("%d",&boyut);
    
    for (i=1;i<=boyut;i++) {
        for (j=1;j<=i;j++) {
            printf("%d ",k);
        }
        k++;
        printf("\n");
    }
   
    for (i=0;i<boyut;i++) {
        for (j=1;j<=boyut-i;j++) {
            printf("%d ",i+1);
        }
        printf("\n");
    }
    
    return 0;
}
