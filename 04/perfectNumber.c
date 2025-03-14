//
//  main.c
//  perfect-number
//
//  Created by SILANUR ÇANDIR on 29.11.2024.
//

#include <stdio.h>

int main(void) {
    int i,grlnSayı,j,bölenToplam=0;
    printf("hangi n kadar olan mükemmel sayılar listelensin?");
    scanf("%d",&grlnSayı);
    
    for (i=1;i<=grlnSayı;i++) {
        bölenToplam=0;
        
        for (j=1;j<i;j++) {
            if (i%j==0)  bölenToplam+=j;
        }//sayıların bölenlerini kontrol eden döngü
        if (bölenToplam==i) {
            printf("%d\n",i);
        }//sayının mükemmel sayı olup olmadığın kontrol edildiği blok
        
        
    }//en dıştaki girilen sayıya kadar olan sayıarı yazan for döngüsü
    
    
    

    return 0;
}
