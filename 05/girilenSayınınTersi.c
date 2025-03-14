//
//  main.c
//  Inverse of the entered number
//
//  Created by SILANUR ÇANDIR on 6.12.2024.
//

#include <stdio.h>

void inverse_number(int number){
    int mod=0;
    while(number!=0){
        mod=number%10;
        number=(number-mod)/10;
        printf("%d",mod);
    }
}//this function write is entered number inverse
int main(void){
    int number;
    printf("enter a number:");
    scanf("%d",&number);
    inverse_number(number);
    printf("\n");
    return 0;
}
