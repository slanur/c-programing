//
//  main.c
//  dosyaya yazma işlemleri
//
//  Created by SILANUR ÇANDIR on 18.03.2025.
//

#include <stdio.h>

int main(void) {
    FILE* fptr;
    fptr=fopen("/Users/silanurcandir/Desktop/10/data.txt/ data.txt ", "w");
    char name;
    //dosya açılmış mı açılmamış mı kontrol etmek için:
    //ayrıca dosyaya birşey yazdırılabiliyormu kontrol etmek için
    if (fptr==NULL) {
        printf("FILE OPEN UNSUCCESSFUL!\n");
    }
    else{
        putc('M',fptr);//tek bir karakter yazdırmak için bu şekilde putc kullanabiliriz
        printf("Data is written to file \n");
        for (name='a'; name<='z';name++) {
            putc(name,fptr);
        }
    }
    
    fclose(fptr);
 
    return 0;
}
