//
//  main.c
//  cokBoyutluDiziler
//
//  Created by SILANUR ÇANDIR on 19.01.2025.
//

#include <stdio.h>
/*
 İKİ BOYUTLU DİZİ
 matrix[2][3]={1,2,3}
              {4,5,6}

int main(void) {
    int matrix[2][3]={{1,2,3},{4,5,6}};

     
    
    int i,j;
    
    for (i=0;i<2;i++) {
        for (j=0;j<3;j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }//diziyi ekrana yazdıran döngü
    
    
    return 0;
}
*/
//ÜÇ BOYUTLU DİZİLER
int main(void){
    
    int matrix[4][2][5]={
        {{9,2,1,2,4},{7,5,6,4,3}},
        {{7,8,9},{1,2,3,4,5}},
        {{9,8,7,6,5},{3,4,5,2,1}},
        {{4,3,2,8,0},{3,2,8,9,6}}
    };
    /*
     [4]->bu matriste 4 bölüm olacak
     [2]->her bölümün içinde iki satır olacak
     [5]->her satırda 5 sütun olacak
     */
    
    int i,j,k;
    for (i=0;i<4;i++) {
        for (j=0;j<2;j++) {
            for (k=0;k<5;k++) {
                printf("%d ",matrix[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }//matrisin yazdırılması da bu şekilde
    
    
    
    return 0;
}
