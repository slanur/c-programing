//
//  main.c
//  dosya okuma işlemleri
//
//  Created by SILANUR ÇANDIR on 21.03.2025.
//

#include <stdio.h>

int main(void) {
    FILE* fptr;
    char myLetter;
    fptr=fopen("/Users/silanurcandir/Desktop/10/data.txt/ data.txt","r");
    if (fptr==NULL) {
        printf("file open unseccussful\n");
        
    }else{
        do {
            myLetter=getc(fptr);
            printf("%c",myLetter);
 
        } while (myLetter!=EOF);//dosyanın sonunu feof(fptr) fonksiyonu ile de kontrol edebiliriz
    }
    printf("\nreading is over\n ");
    fclose(fptr);
    return 0;
}

