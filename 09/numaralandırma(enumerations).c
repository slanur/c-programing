//
//  main.c
//  numaralandırma(enumerations)giriş
//
//  Created by SILANUR ÇANDIR on 16.03.2025.
//
/*
 const in number=7; şeklinde tanımladığımızda number'ın değerini program boyunca değiştiremiyorduk
 enum, birden fazla sabite ihtiyacımız olduğunda onu gruplandırmamıza izin veriyor.
 
 yani enum=const grubu
 */
#include <stdio.h>
enum level{
    SMALL,//=0
    MEDIUM,//=1
    LARGE//=2 ilk başta hiçbir değer tanımlamazsak kendiliğinden ilk elemana sıfır veriyor ve diğerlerinede bir fazlası olacak şekilde değer tanımlıyor
    //eğer ilk elemana bir sayı değeri tanımlarsak diğerlerine kendiliğinden bir fazla artacak şekilde değer tanımlıyor
};


int main(void) {
    enum level myConst;
    myConst=LARGE;
    printf("%d\n",myConst);


    return 0;
}
