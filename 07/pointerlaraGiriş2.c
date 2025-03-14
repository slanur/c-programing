//
//  main.c
//  pointerlaraGiris2
//
//  Created by SILANUR ÇANDIR on 22.01.2025.
//

#include <stdio.h>

int main(void) {
    //veriable nin bellekte saklandığı yeri  bulmak için bu şekilde kullanıyoruz
    int x=7;
    
    printf("x değişkeninin adresi:%x\n\n",&x);
    //boyut sorgulama
    printf("int:%d byte\n",sizeof(int));
    printf("float:%d byte\n",sizeof(float));
    printf("char:%d byte\n",sizeof(char));
    printf("double:%d byte\n",sizeof(double));
    printf("long double:%d byte\n\n",sizeof(long));
    //adres sorgulama
    int* ptr=&x;
    printf("x veriable:%d\n",x);
    printf("x veriable adres:%d\n",&x);
    printf("x veriable adres:%d\n",ptr);
    printf("ptr veriable adres:%d\n",&ptr);
    printf("x veriable:%d\n\n ",*ptr);
//pointer değerinin arttırılıp azaltılması
    ptr--;
    printf("x veriable adres:%d\n",ptr);
    
    return 0;
}
 /*
  POİNTERLARIN DEĞERİNİN ARTTIRILIP AZALTILMASI
  ->pointerların değerini arttırıp azaltarark bellekte saklandığı yeri değiştirebiliriz
  eğer veriable int türündense her bir değer artışında 4 byte yer değiştirir
  char türündense 1 byte yer değiştirir 
  */
/*
 FONKSİYONLARDA POİNTER PARAMETRESİ
      float kareAlanı(float *ptr);->fonksiyona  bu şekilde parametre atabilirriz veya
      float kareAlanı(float &number);->bu şekilde parametrenin pointer olduğunu belli etmeliyiz

 */
