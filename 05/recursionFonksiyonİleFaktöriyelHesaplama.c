//
//  main.c
//  recursiom fonksiyon ile factöriyel hesaplama
//
//  Created by SILANUR ÇANDIR on 9.12.2024.
//

#include <stdio.h>

int factorial(int);

int main(void){
    int number1;
    printf("enter a number:");
    scanf("%d",&number1);
    printf("%d\n",factorial(number1));
    return 0;
}
int factorial(int number1){
    if (number1>0)
        return  number1*factorial(number1-1);
    else return 1;
    }

