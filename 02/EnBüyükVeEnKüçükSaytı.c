//
//  main.c
//  kullanıcıdan alınan 3 sayının en büyüğünün ve en küçüğünün koşullu ifadelerle tespit edilmesi
//
//  Created by SILANUR ÇANDIR on 3.11.2024.
//

#include <stdio.h>

int main(void)
{
    int sayıA,sayıB,sayıC,enbüyük,enküçük;
    printf("A B C sayılarına bir değer giriniz:");
    scanf("%d %d %d",&sayıA,&sayıB,&sayıC);
    
    if (sayıA>sayıB && sayıA>sayıC){
        enbüyük=sayıA;
    }else if (sayıB>sayıA && sayıB>sayıC){
        enbüyük=sayıB;
    }else{
        enbüyük=sayıC;
    }if (sayıA<sayıB && sayıA<sayıC) {
        enküçük=sayıA;
    }else if (sayıB<sayıA && sayıB<sayıC){
        enküçük=sayıB;
    }else{
        enküçük=sayıC;
    }
    printf("en büyük sayı:%d\n",enbüyük);
    printf("en küçük sayı:%d\n",enküçük);
    return 0;
}
