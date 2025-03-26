//
//  main.c
//  dinamikBellekYönetimi2
//
//  Created by SILANUR ÇANDIR on 23.03.2025.
//

#include <stdio.h>
#include <stdlib.h>
//calloc ve raelloc kullanımı
//malloc bellekte daha önce kullanılmış alanlara dokunmuyor ama calloc hepsine sıfır değerini atıyor
int main(void) {
    int n=5;
    int* arr=(int*)calloc(n, sizeof(int));
    if (arr==NULL) {
        printf("bellek ayirma basarisiz\n");
        return 1;
    }else{
        printf("callloc ile oluşturulan array:");
        for (int i=0;i<n;i++) {
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
    free(arr);
    return 0;
}
 /*realloc kullanımı:
  realloc belirlediğimiz boyutu değiştirmeye yarıyor.
  Eğer sonradan belleğin  boyutunu değiştirmek istersek
  arr=(int*)realloc(arr,new_size*sizeof(int)); şeklinde değiştirebiliriz. new_size burada bizim belirlediğimiz bir sayı 
  
  */
