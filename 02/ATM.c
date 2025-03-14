//
//  main.c
//  ATM örneği
//
//  Created by SILANUR ÇANDIR on 13.11.2024.
//

#include <stdio.h>
int main(void) {
    int bakiye,yatırılanTutar,seçim,çekilenTutar;
    bakiye=1000;
    while (1) {
        printf("yapmak istediğiniz işlemi giriniz:\n");
        printf("1.para yatırma\n");
        printf("2.para çekme\n");
        printf("3.bakiye sorgulama\n");
        printf("0.çıkış");
        scanf("%d",&seçim);
        switch (seçim) {
            case 1:
                printf("yatırmak istediğiniz tutarı giriniz:");
                scanf("%d",&yatırılanTutar);
                if (yatırılanTutar<=0) {
                    printf("geçersiz tutar\n");
                    continue;
                }
                bakiye+=yatırılanTutar;
                printf("yeni bakiyeniz:%d\n",bakiye);
                continue;
            case 2:
                printf("çekmek istediğiniz tutarı giriniz:");
                scanf("%d",&çekilenTutar);
                if (çekilenTutar>bakiye) {
                    printf("yetersiz bakiye\n");
                    continue;
                }
                if (çekilenTutar<=0) {
                    printf("geçersiz tutar\n");
                    continue;
                }
                bakiye-=çekilenTutar;
                printf("yeni bakiyeniz:%d",bakiye);
                continue;
            case 3:
                printf("mevcut bakiyeniz:%d\n",bakiye);
                continue;
            case 0:
                printf("çıkış yapılıyor iyi günler dileriz\n");
                return 0;
            default:printf("gecersiz secim lutfen tekrardeneyin\n");
                continue;
        }
    }
    return 0;
}
