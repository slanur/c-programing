//
//  main.c
//  dinamikBellekYönetimi
//
//  Created by SILANUR ÇANDIR on 23.03.2025.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int*  x=(int*)malloc(sizeof(int));//girdiğimiz eleman sayısı n ise sizeof'u n ile çarpıyoruz 
    *x=7;
    free(x);//kullandığı belleği serbest bıraktı
    /*
     bazı fonksiyonlar var ve bunlar #include <stdlib.h> kütüphanesi içinde
     malloc(memory allocation)=hafıza tahsisi
     calloc(contiguous allocation)=bitişik tahsis
     realloc(reallocation)=gerçek lokasyon
     free=serbest bırakmak
     */
    //malloc bellekte, belirtilen  byte kadar yer kaplıyor
    
    
    return 0;
}
