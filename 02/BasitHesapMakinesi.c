//
//  main.c
//
//
//  Created by SILANUR ÇANDIR on 8.11.2024.
//basit hesap makinesi

#include <stdio.h>

int main(void) {
    float number1=0.00,number2=0.00;
    char operator;
    
    printf("enter two numbers:");
    scanf("%f %f",&number1,&number2);
    printf("enter the operator you want to take(+,-,/,*):");
    scanf("%s",&operator);
    
    switch (operator) {
        case'+':
        printf("%.2f+%.2f=%.2f\n",number1,number2,number1+number2);
            break;
        case'-':
        printf("%.2f-%.2f=%.2f\n",number1,number2,number1-number2);
            break;
        case'/':
        printf("%.2f/%.2f=%.2f\n",number1,number2,number1/number2);
            break;
        case'*':
        printf("%.2f*%.2f=%.2f\n",number1,number2,number1*number2);
            break;
        default:printf("you entered the wrong operator\n");
            break;
    }
   
    return 0;
}
