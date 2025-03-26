//
//  main.c
//  dosyaKlonlama
//
//  Created by SILANUR ÇANDIR on 23.03.2025.
//

#include <stdio.h>

int main(void) {
    FILE *fptr,*fptrcopy;
    fptr=fopen("/Users/silanurcandir/Desktop/10/data.txt/ data.txt","r");
    fptrcopy=fopen("datacopy.txt","w");
    
    if (fptr==NULL) {
        printf("data.txt OPEN UNSUCCESSFUL!\n");
    }else{
        if (fptrcopy==NULL) {
            printf("datacopy.txt OPEN UNSUCCESSFUL!\n");
        }else{
            while (!feof(fptr)) {
                putc(getc(fptr),fptrcopy);
            }
            printf("the file has been copied\n");
        }
    }
    fclose(fptr);
    fclose(fptrcopy);
    return 0;
}
