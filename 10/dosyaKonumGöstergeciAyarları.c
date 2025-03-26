//
//  main.c
//  dosyaKonumGöstergeciAyarları
//
//  Created by SILANUR ÇANDIR on 21.03.2025.
//

#include <stdio.h>

int main(void) {
    FILE* fptr;
    char data[100];
    char message[100];
    fptr=fopen("/Users/silanurcandir/Desktop/10/data.txt/ data.txt","r");
    if (fptr==NULL) {
        printf("file open unsuccessful\n");
    }else{
        fscanf(fptr,"%s %s",data,message);
        printf("%s %s\n",data,message );
    }
     
    
    fclose(fptr);
    return 0;
}
/*
 konum göstergeci dosya açıldığında ilk başta durur.Dosyayan her okuma veya dosyaya yazma işlemi yapıldığında konum göstergeci bir karakter ilerler
 ftell,fseek,rewind fonksiyonları ile konum göstergecine müdahale edebiliyoruz
 ->fseek dosya göstergecini istediğimi< kadar ileri veya geri götürmemize yardımcı olur
 SEEK_SET dosyanın başını baz alarak işlem yapıyor
 SEEK_CUR konum göstergecinin o anki durmunu baz alarak işlem yapıyor
 SEEK_END dosyanın sonunu baz alarak işlem yapıyor
 ->ftell konum göstergecinin o anda nerede olduğunu gösteriyor
 ->rewind konum göstergecini dosyanoın en başına getiriyor
 */
