//
//  main.c
//  ponterlarVeFonksiyonlar
//
//  Created by SILANUR ÇANDIR on 25.01.2025.
//

#include <stdio.h>
/*
 burada iki tam sayıyı fonksiyona gönderip toplamlarını ve farklarını yazdıran bir program var
 voidde normalde dışarıya bir değer çkmaz ama burada çıkıyor
 void fonksiyonu dışarıya değer döndürmüyor ama işaretçi kullanarak parametreleri değiştiriyor.
 C dilinde, işaretçi (pointer) ile parametreler fonksiyona gönderildiğinde, bu parametrelerin gerçek değerleri üzerinde işlem yapılabilir
 */
void update(int *a,int *b) {
    int x=0,y=0;
    x=*a;
    y=*b;
    *a=*a+*b;
    if (x>y) x-=y;
    else y-=x;
    *b=y;
}

int main(void) {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("toplam:%d\nfark:%d\n", a, b);

    return 0;
}
