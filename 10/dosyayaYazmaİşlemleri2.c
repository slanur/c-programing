//
//  main.c
//  dosyayaYazmaİşlemleri2
//
//  Created by SILANUR ÇANDIR on 19.03.2025.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE* fptr;
    int i;
    char sentence[60];
    int numbers[7];
    fptr=fopen("/Users/silanurcandir/Desktop/10/data.txt/ data.txt","w");
    if (fptr==NULL) {
        printf("file open unsuccessful");
    }
    else{
        fputs("ı love programming\n",fptr);
        fputs("c is interesting language\n",fptr);
        fprintf(fptr,"%d is my lucky number\n",7);
        fprintf(fptr,"----------------------------------------\n");
        printf("enter a ssentence:");
        fgets(sentence,60,stdin);
        fprintf(fptr,"your sentence:%s\n",sentence);
        fprintf(fptr,"----------------------------------------\n");
        printf("enter 7 number:");
        for (i=0;i<7;i++) {
            scanf("%d",&numbers[i]);
        }
        fwrite(numbers,sizeof(int),7,fptr);
        /*
         bunu dedikten sonra fwrite'ı siliyoruz for döngüsünün üstüne fread'ı yazıyoruz ve içini fwrite gibi dolduruyoruz
         sonradan modu da 'r' ye alıyoruz  böylece txt dosyasında da yazdıklarımız görebiliriz
         fread(numbers,sizeof(int),7,fptr);
         for (i=0;i<7;i++) {
             scanf("%d",&numbers[i]);
         }x
         */
        fprintf(fptr,"----------------------------------------\n");
        printf("data was written to successfully\n");
    }
    //fgets ile sadece bir satır alabiliyoruz
    fclose(fptr);
    return 0;
}
