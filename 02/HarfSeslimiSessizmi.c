//
//  main.c
//
//
//  Created by SILANUR ÇANDIR on 8.11.2024.
//harf sesli mi sessiz mi

#include <stdio.h>

int main(void) {
    char letter;
    
    printf("you enter a letter:");
    scanf("%c",&letter);
    
    switch (letter) {
        case 'a':            
        case 'e':
        case 'i':
        case 'o':
        case 'u':printf("you entered a vowel letter\n");
            break;
        default:printf("%c is a consonant or not a letter\n",letter);
            break;
    }
    return 0;
}
