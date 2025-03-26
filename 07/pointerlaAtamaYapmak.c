//
//  main.c
//  pointerlaAtamaYapmak
//
//  Created by SILANUR ÇANDIR on 26.03.2025.
//

#include <stdio.h>
void atama_yap_1(int x){
    x=20;
}
void atama_yap_2(int* x){
    *x=30;
}//pointerlarla fonksiyona parametre olarak gelen değişkenin değeri değiştirilebilir

int main(int argc, const char * argv[]) {
    int a=5;
    printf("%d\n",a);
    
    atama_yap_1(a);
    printf("%d\n",a);
    
    
    atama_yap_2(&a);
    printf("%d\n",a);
    
    
    return 0;
}

