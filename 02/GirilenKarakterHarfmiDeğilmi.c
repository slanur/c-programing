//
//  main.c
//  girilen karakterin harf olup olmadığını bulan program
//
//  Created by SILANUR ÇANDIR on 4.11.2024.
//
/*
 herhangi bir karakteri girdi olarak alan ve bu karakterin bir harf olup olmadığını ve küçük harf mi büyük harf mi olduğunu bulan program
 */

#include <stdio.h>

int main(void) {
    
    char character;
    printf("enter a charater:");
    scanf("%c",&character);
    
    if (character>='A' && character<='Z') {
        printf("%c is an uppercase letter\n",character);
    }
    else if (character>='a' && character<='z'){
        printf("%c is a lowercase letter\n",character);
    }else{
        printf("%c is a not letter\n",character);
    }
    
    
    
    return 0;
}
