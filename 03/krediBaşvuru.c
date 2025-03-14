//
//  main.c
//  kredi başvuru
//
//  Created by SILANUR ÇANDIR on 24.11.2024.
//

#include <stdio.h>
/*
 bir bankada çalışan bir müşteri temsilcisinin müşterilerin kredi başvurularını incelemek için yazdığı bir program düşünün. Bu program, kullanıcının başvurularını gireceği ve başvurunun onaylanıp onaylanmadığını belirleyecek bir sistemdir.kullanıcı aşağıdaki bilgileri girecektir:
 -başvurulan kredi miktarı(float)
 -müşterinin aylık geliri(int)
 -kredi başvurusu yapan kişinin yaşı(int)
 -daha önceki borç geçmişi(0 kötü 1 iyi)
 program kuralları
 1. kredi miktarı 50.000 üzeri üzerindeyse başvuran kişinin yaşı en az 25 olmalı
 2.müşterinin aylık geliri kredi miktarının 1/3 ünden fazla olmalı
 3.daha önceki borç ödeme geçmişi iyi olmalı
 program akışı
 1.kullanıcıdan verileri al
 2.koşul ifadeleri ile başvurunun onaylanı onaylanmadığını ekrana yaz
 3.kullanıcının daha fazla başvuru girip girmeyeceğini belirlemek için bir seçenek sun(evet/hayır)
 */


int main(void) {
    int aylıkGelir,yaş,secim,devam,krediSayısı;
    float başvurulanKredi=0.00;
    
    while (1) {
        printf("yasınızı giriniz:");
        scanf("%d",&yaş);
        if (yaş<18) {
            printf("üzgünüz yaşınız uygun değil\n");
            return 0;
        }
        printf("aylık gelirinizi giriniz:");
        scanf("%d",&aylıkGelir);
        printf("almak istediğiniz kredi miktarını giriniz:");
        scanf("%f",&başvurulanKredi);
        printf("son 5 yıl içinde aldığınız kredi sayısını giriniz:");
        scanf("%d",&krediSayısı);
        if (krediSayısı>0) {
            printf("üzgünüz son 5 yılda alınmış bşr krediniz var bu yüzden kredi veremiyoruz\n");
            printf("başka işlem yapmak ister misiniz");
            scanf("%d",&devam);
            printf("(1:evet 0:hayır");
            if (devam==1) continue;
            else if (devam==0) break;
            else {
                printf("böyle bir ifade bulunamadı\n");
                return 0;
            }

        }
        printf("geçmiş borç ödeme durumunuzu giriniz:\n");
        printf("iyi:1 kötü:0=");
        scanf("%d",&secim);

        if (yaş>=60 && başvurulanKredi>=100000) {
            printf("başvurunuz onaylanmıştır\n");
        }
        else if (yaş>=60 && başvurulanKredi<100000){
            printf("başvurduğunuz kredi miktarı en az 100000 olmalı\n");
            printf("başka işlem yapmak ister misiniz");
            scanf("%d",&devam);
            printf("(1:evet 0:hayır");
            if (devam==1) continue;
            else if (devam==0) break;
            else {
                printf("böyle bir ifade bulunamadı\n");
                return 0;
            }
        }
        if (başvurulanKredi>50.00 && yaş>=25 && aylıkGelir>=başvurulanKredi/3 && secim==1){
            
            printf("kredi başvurunuz onaylanmıştır.\n");
            printf("başka işlem yapmak ister misiniz");
            printf("(1:evet 0:hayır");
            scanf("%d",&devam);
            if (devam==1) continue;
            else if (devam==0) break;
            else {
                printf("böyle bir ifade bulunamadı\n");
                return 0;
            }
            
        }
        
        else if (başvurulanKredi<50000 && aylıkGelir>=başvurulanKredi/3 && secim==1 ){
            printf("kredi başvurunuz onaylanmıştır.\n");
            printf("başka işlem yapmak ister misiniz\n");
            printf("(1: evet 0:hayır):");
            scanf("%d",&devam);
            if (devam==1) continue;
            else if (devam==0) break;
            else {
                printf("böyle bir ifade bulunamadı\n");
                return 0;
            }
        }
        
        else{
            printf("başvrunuz kabul edilmemiştir\n");
            printf("başka işlem yapmak istiyor musunuz:");
            printf("(1: evet 0:hayır):");
            scanf("%d",&devam);
            if (devam==1) continue;
            else if (devam==0) break;
            else {
                printf("böyle bir ifade bulunamadı\n");
                return 0;
            }
        }
    }
    printf("\n");
    return 0;
}
    
