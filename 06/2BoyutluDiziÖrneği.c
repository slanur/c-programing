//
//  main.c
//  ikiBoyutluDiziOrnegi ve dışardan değer atama
//
//  Created by SILANUR ÇANDIR on 19.01.2025.
//

#include <stdio.h>
/*
 int main(void) {
     
      0 1 2 3
      1 2 3 4
      2 3 4 5-->bu matrisimiz
      
     int matrix[3][4];
     int i,j;
     for (i=0;i<3;i++) {
         for (j=0;j<4;j++) {
             matrix[i][j]=i+j;
         }
     }//matrise değer atama
 
     for (i=0;i<3;i++) {
         for (j=0;j<4;j++) {
             printf("%d\t",matrix[i][j]);
         }
         printf("\n\n");
     }//matristeki değeri okuma


     return 0;
 }
 */
//DIŞARIDAN DEĞER ATAMA
//satır sütun sayisini ve bu dizinin içindeki değerleri kullanıcıdan al
int main(void){
    
    int row,column;
    printf("dizinin satır ve sutun sayisini giriniz:");
    scanf("%d %d",&row,&column);
    
    int numbers[row][column];
    
    printf("dizinin elemanlarini giriniz:\n");
    for (int i=0;i<row;i++) {
        for (int j=0;j<column;j++) {
            printf("matris[%d][%d]=",i,j);
            scanf("%d",&numbers[i][j]);
        }
    }//bu döngüde dizinin elemanlarını kullanıcidan aldik
    
    for (int i=0;i<row;i++) {
        for (int j=0;j<column;j++) {
            printf("%d ",numbers[i][j]);
        }
        printf("\n");
    }// aldığımız değerleri yazdirdik
    printf("\n\n");
    return 0;
}
//row=satır column=sütun
