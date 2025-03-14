//
//  main.c
//  dizilerinSatirVeSutunToplamlariniBulma
//
//  Created by SILANUR ÇANDIR on 20.01.2025.
//

#include <stdio.h>

int main(void) {
    int i,j;
    int satir=0,sutun=0;
    int matrix[5][5]={
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5}
};

    for (i=0;i<5;i++) {
        satir=0;
        for (j=0;j<5;j++) {
            printf("%d   ",matrix[i][j]);
            satir+=matrix[i][j];
        }
        printf("\ttoplam:%d",satir);
        printf("\n");
    }//satir toplama algoritmasi
    printf("------------------\n");
    
    
    for (i=0;i<5;i++) {
        for (j=0;j<5;j++) {
            sutun+=matrix[j][i];
        }
        printf("%d ",sutun);
        sutun=0;
    }//sutun toplama algoritmasi

    return 0;
}
