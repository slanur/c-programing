//
//  main.c
//  ikiMatrisinCarpimi
//
//  Created by SILANUR ÇANDIR on 21.01.2025.
//

#include <stdio.h>

int main(void) {
    int matris1[50][50],matris2[50][50];
    int i,j,k,toplam=0;
    int satir1,sutun1,satir2,sutun2;
    
    printf("1. matrisin satir ve sutun sayisini giriniz:");
    scanf("%d%d",&satir1,&sutun1);
     
    printf("1. matrisin değerlerini giriniz:");
    for (i=0;i<satir1;i++) {
        for (j=0;j<sutun1;j++) {
            printf("matris1[%d][%d]: ",i,j);
            scanf("%d",&matris1[i][j]);
        }
    }
    printf("2. matrisin satir ve sutun sayisini giriniz:");
    scanf("%d%d",&satir2,&sutun2);
    //bu matrisler carpilmaya uygun mu kontrol ediyoruz
    if (sutun1!=satir2) printf("uzgunum! bu matrisler carpilamaz\n");
    else{
        printf("2. matrisin değerlerini giriniz:");
        for (i=0;i<satir2;i++) {
            for (j=0;j<sutun2;j++) {
                printf("matris2 [%d][%d]: ",i,j);
                scanf("%d",&matris2[i][j]);
            }
        }
    }
    printf("\n");
    int  carpimMatrisi[satir1][sutun2];
    //------------matris carpiminin algoritmasi----------------
    /*
     1 2   1 2
     3 4   3 4 bu matrisin çarpımı (00*00)+(01*10)/(00)*(01)+(01)*(11)
                                   (10*00)+(11*10)/(10)*(01)+(11)*(11)
      buaradan yola çıkarak algoritayı oluşturdum
     */
    
    
    for (i=0;i<satir1;i++) {
        for (j=0;j<sutun2;j++) {
            carpimMatrisi[i][j]=0;
            for (int k=0;k<satir2;k++) {
                carpimMatrisi[i][j]+=(matris1[i][k]*matris2[k][j]);
            }
        }
    }
    for (i=0;i<satir1;i++) {
        for (j=0;j<sutun2;j++) {
            printf("%d   ",carpimMatrisi[i][j]);
        }
        printf("\n\n");
    }//matristeki değerleri yazdırma
    
    
    
    
    
    return 0;
}
