//
//  main.c
//  basit bir kitap siparişi ve indirim programı
//
//  Created by SILANUR ÇANDIR on 2.11.2024.
//

#include <stdio.h>

int main(void)
{
    
    int siparişmiktarı,kitabınfiyatı;
    float indirimoranı,indirimsizfiyat,indirimmiktarı,toplam;
    kitabınfiyatı=20;
    
    printf("kaç adet kitap sipariş etmek istediğinizi giriniz:");
    scanf("%d",&siparişmiktarı);
    
    /*
     60<=kitap %30 indrm
     30<=kitap<60 %20 ind
     10<=kitap<30 %12
     miktar<10 %0.1 ind
     buindirimler kitabın birim fiyatı üzerinden yapılacak
     */
    if (siparişmiktarı>=60)
    {
        indirimoranı=0.30;
    }
    else
    {
        if (siparişmiktarı>=30 && siparişmiktarı<60)
        {
            indirimoranı=0.20;
        }
        else if (siparişmiktarı>=10 && siparişmiktarı<30)
        {
            indirimoranı=0.12;
        }
        else
        {
            indirimoranı=0.01;
        }
    }
    indirimsizfiyat=siparişmiktarı*kitabınfiyatı;
    indirimmiktarı=siparişmiktarı*kitabınfiyatı*indirimoranı;
    toplam=indirimsizfiyat-indirimmiktarı;
    printf("indirimsiz fiyat:%f\n",indirimsizfiyat);
    printf("indirim miktarı:%f\n",indirimmiktarı);
    printf("toplam fiyat:&f\n",toplam);
    return 0;
}
