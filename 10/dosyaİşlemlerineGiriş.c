//
//  main.c
//  Dosya işlemlerine girirş
//
//  Created by SILANUR ÇANDIR on 18.03.2025.
//
/*
 1)Dosyayı aç
 2)dosyanın içine birşeyler yaz
 3)dosyayı kapat
 */
#include <stdio.h>

int main(void) {
    
    FILE *fptr;
    fptr=fopen("//Users//silanurcandir//Desktop//10// data.txt","w");//ilk kısma dosyanın adını veya yolunu; ikinci kısma ise dosyanın modunu yazıyoruz yani dosyanın açılma amacı
    fclose(fptr);
    
    
    return 0;
}
