//
//  main.c
//  OnIslemciKomutlari
//
//  Created by SILANUR ÇANDIR on 21.01.2025.
//


//program derleme işleminde önce önişlemci komutlarını kontrol eder
#include <stdlib.h>
#include <stdio.h> //-->bu da bir önişlemci komutuna örnektir
/*
#define PI 3.1415 //kendimiz de bu şekilde önişlemci komutu tanımlayabiliriz
//PI burada komutun adıdır. program derlenirken  önce önişlemci komutlarını okur ve PI gördüğü yere 3.1415 i atar
//çemberin alanını bulan bir program yazalım
int main(void) {
    int yaricap;
    float alan=0;
    
    printf("cemberin yaricapini giriniz:");
    scanf("%d",&yaricap);
    alan=PI*(yaricap*yaricap);
    printf("cemberin yaricapi:%.2f\n",alan);
    
    return 0;
}
*/
/*
//Makro oluşturma örneği
#define MAX(number1,number2) (number1>number2)? number1:number2
#define MİN(number1,number2) (number1<number2)? number1:number2
#define DIKDORTGENIN_ALANI(x,y) (x*y)
int main(void){
    printf("MAX(2,7):%d\n",MAX(2,7));
    printf("MİN(19,5):%d\n",MİN(19,5));
    printf("dikdörtgenin alani:%d\n",DIKDORTGENIN_ALANI(2,3));
    return 0;
}
*/

//#if #elif #else #endif vb komutlar
#define MYNUMBER 7

int main(void){
    
#ifdef MYNUMBER//mynumber tanimliysa bu kod çalışır
    printf("MYNUMBER tanimli ve degeri:%d\n",MYNUMBER);
#else
    printf("MYNUMBER tanimli değil\n");
#endif
//----------
#undef MYNUMBER //tanımlı olan bir ifadeyi bu şekilde kaldırabiliyoruz

#ifdef MYNUMBER
    printf("MYNUMBER tanimli ve degeri:%d\n",MYNUMBER);
#else
    printf("MYNUMBER tanimli değil\n");
#endif
//-----------
#ifndef MYNUMBER //mynumber tanimli değilse bu kodu çalıştirir
     #define MYNUMBER 19
#endif
    printf("MYNUMBER tanimli ve degeri:%d\n\n",MYNUMBER); 
    return 0;
}
