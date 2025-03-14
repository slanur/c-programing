//
//  main.c
//  minorVeMajorKosegenOrnegi
//
//  Created by SILANUR ÇANDIR on 20.01.2025.
//

#include <stdio.h>
/*
 1 0 0 0 1
 0 1 0 1 0
 0 0 1 0 0
 0 1 0 1 0
 1 0 0 0 1
 bunun gibi matrisler oluşturmaya çalışacağız
  kare matrisin boyutu kullanıcıdan alınacak ve tek sayı olacak
algoritması:1 in olduğu yerler i=j olan veya i+j=boyut-1 olan yerler kodumuzu bu algoritmaya göre yazdık 
 */
int main(void) {
    int boyut;
    printf("kare matrisin boyutunu giriniz:");
    scanf("%d",&boyut);
    int matris[boyut][boyut];
    
    for (int i=0;i<boyut;i++) {
        for (int j=0;j<boyut;j++) {
            if (i==j) matris[i][j]=1;
            else if (i+j==boyut-1) matris[i][j]=1;
            else matris[i][j]=0;
        }
    }//değerleri matrise atayan döngü

     
    for (int i=0;i<boyut;i++) {
        for (int j=0;j<boyut;j++) {
            printf("%d ",matris[i][j]);
        }
        printf("\n\n");
    }//matrisin değerlerini ekrana yazdıran döngü



    return 0;
}
