//
//  main.c
//  kullanıcıdan alınan iki sayının karşılaştırılması
//
//  Created by SILANUR ÇANDIR on 2.11.2024.
//

#include <stdio.h>

int main(void) {
    int sayı1,sayı2;
    
    printf("iki sayı giriniz:");
    scanf("%d %d",&sayı1,&sayı2);
    
    if (sayı1>sayı2)
    {
        printf("%d %d den daha büyüktür\n",sayı1,sayı2);
    }
    
    else if (sayı1==sayı2)
    {
        printf("%d ile %d eşittir\n",sayı1,sayı2);
        
    }
    else{
        printf("%d %d den daha küçüktür\n",sayı1,sayı2);
        
    }
        
        
    return 0;
}
