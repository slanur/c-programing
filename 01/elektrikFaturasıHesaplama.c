//
//  main.c
//  elektrik faturası hesaplama
//
//  Created by SILANUR ÇANDIR on 21.10.2024.
//

#include <stdio.h>

int main(void)
{
    /*
     bir elektrik dağıtım şirketi verdikleri hizmet karşılığında
     müşterilerinden aylıkabonelik ücreti talep etmektedir.Birim kilowat
     saat ücreti ve abonelik ücreti her ay bir önceki ayın enflasyonu miktarınca
     artmaktadır.buna göre müşterini 1 aya ait ödeyeceği faturanin
     miktarını hesaplayan program
     fatura=(harcanan elektrik*birim fiyat)+abonelik ücreti;
     
     */
    float ödenecekFatura,eskiBirimfiyat,yeniBirimfiyat;
    float eskiAbonelikücreti,yeniAbonelikücreti,enflasyon;
    int eskiOkuma,yeniOkuma,topHarcanananlektrık;
    //okumadan kastedilen,sayaçta okunan harcadığımız toplam kw
    
    printf("enflasyonun yüzde kaç olduğunu giriniz:");
    scanf("%f",&enflasyon);
    
    printf("eski birim fiyatı giriniz:");
    scanf("%f",&eskiBirimfiyat);
    yeniBirimfiyat=eskiBirimfiyat*(1+enflasyon/100);
    /*burada enflasyona 1 eklememizin sebebi;
     normalde bir sayıya %30unu eklemek o sayıyı 130/100 ile çarpmakla aynı
     şey. 130/100 1+30/100 ile aynı şey olduğu için bu şekilde yazıyoruz
     */
     
    printf("eski abonelik ücretini giriniz:");
    scanf("%f",&eskiAbonelikücreti);
    yeniAbonelikücreti=eskiAbonelikücreti*(1+enflasyon/100);
    
    printf("geçen ayın sayaçta okunan  miktarını giriniz:");
    scanf("%d",&eskiOkuma);
    printf("sayaçta yeni okunan miktarı giriniz:");
    scanf("%d",&yeniOkuma);
    topHarcanananlektrık=yeniOkuma-eskiOkuma;
    
    ödenecekFatura=(yeniBirimfiyat*topHarcanananlektrık)+yeniAbonelikücreti;
    printf("bu ay ödeyeceğiniz fatura miktarı:%f\n",ödenecekFatura);
    
        
    return 0;
}
