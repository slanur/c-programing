//
//  main.c
//  girilen sayının rakamlarını toplayan program
//
//  Created by SILANUR ÇANDIR on 21.10.2024.
//

#include <stdio.h>
int main(void)
{
    int sayı,bolum,kalan,toplam;
    printf("4 basamaklı bir sayı giriniz:");
    scanf("%d",&sayı);
    toplam=0;
   //sayı 9871 olsun
    //4. basamağı bulma
    bolum=sayı/1000; //bolum 9
    toplam +=bolum;  //toplam 9
    kalan=sayı%1000; //kalan 871
    //3.basamağı bulma
    bolum=kalan/100; //bolum 8
    toplam +=bolum;  // toplam 17
    kalan=kalan%100; //kalan 71
    //2.basamağı bulma
    bolum=kalan/10;  //bolum 7
    toplam +=bolum;  //toplam 24
    kalan=kalan%10;  //kalan 1
    //son basamak
    toplam +=kalan;  //toplam 25
    
    printf("girdiğiniz sayının rakamları toplamı %d dir\n",toplam);
    
 
    

    return 0;
}
