//
//  main.c
//  stringler
//
//  Created by SILANUR ÇANDIR on 24.01.2025.
//

#include <stdio.h>
//stringleri ya arraylerle ya da pointerlarla oluşturabiliriz
int main(void) {
    char greetings[]="Hello C!";//burada null işaretini otomatik eklenir
    //{'H','e','l','l','o',' ','C','!','\0'} bu şekilde de string tanımlayabiliriz
    //en sondaki null ifadesi dizinin bittiğini belirtir ve bellekte yer kaplar
    printf("%s\n\n",greetings);

    char message[]="string is \"very\" important";
    //çift tırnağı bu şekilde kullanabiliriz
    printf("%s\n\n",message);
    
    char* messagePtr="How are you today?";
    int i=0;
    while (*(messagePtr+i)!='\0') {
        printf("%c",*(messagePtr+i));
        i++; 
    }
    printf("\n\n");
    return 0;
}
/*
 puts() ile ekrana string yazdırabiliriz
 gets veya fgets ile kullanıcıdan string alabiliriz
 putchar da sadece bir karakter yazdırmak için kullanılır
 */
