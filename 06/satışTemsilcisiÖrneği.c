//
//  main.c
//  3boyutluDiziİcinSatisTemsilcisiOrnegi
//
//  Created by SILANUR ÇANDIR on 20.01.2025.
//

#include <stdio.h>
/*
 1.satış temsilcisi
   ->matematik kitabı
-okula kaç adet sattı
-kırtasiyeye kaç adet sattı
   ->yazılım kitabı
 -okula kaç adet sattı
 -kırtasiyeye kaç adet sattı
 */
void satislariAl(void);
void satislariYaz(void);
int saticiNum,sayiMat,sayiYazilim;
int i,j,k;
int satis[3][2][2];
int main(void) {
    satislariAl();
    satislariYaz();
}
void satislariAl(void){
    for (i=0;i<3;i++) {
        printf("%d. satis temsilcisi:\n",i+1);
        for (j=0;j<2;j++) {
            if (j==0) printf("->matematik kitabi\n");
            else printf("->yazilim kitabi\n");
            for (k=0;k<2;k++) {
                if (k==0) printf("\t\tokula ");
                else printf("\t\tkirtasiyeye ");
                printf("kac adet satti:");
                scanf("%d",&satis[i][j][k]);
            }
        }
        printf("\n");
    }
}
void satislariYaz(void){
    
    int toplamOkul=0,toplamKirtasiye=0,toplamYazilim=0,toplamMatematik=0;
    for (i=0;i<3;i++) {
        for (j=0;j<2;j++) {
            toplamOkul+=satis[i][j][0];//okul 0 numaralı index te tutuluyor
            toplamKirtasiye+=satis[i][j][1];//kırtasiye 1 numaralı indexte tutuluyor
        }
        for (k=0;k<2;k++) {
            toplamMatematik+=satis[i][0][k];//mat 0 numaralı indexte tutuluyor
            toplamYazilim+=satis[i][1][k];//yazılım 1 numaralı indexte tutuluyor
        }
    }
    printf("okula satilan toplam kitap:%d\n",toplamOkul);
    printf("kirtasiyeye satilan toplam kitap:%d\n",toplamKirtasiye);
    printf("satilan toplam matematik kitabi:%d\n",toplamMatematik);
    printf("satilan toplam yazilim kitabi:%d\n\n",toplamYazilim);
}
