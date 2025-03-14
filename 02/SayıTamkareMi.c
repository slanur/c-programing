//
//  main.c
//  sayı tam kare mi değil mi
//
//  Created by SILANUR ÇANDIR on 4.11.2024.
//

#include <stdio.h>
#include "math.h"
int main(void) {
    int number,squareRoot;
        
    printf("Enter a positive number:");
    scanf("%d",&number);
    squareRoot=sqrt(number);
    
   
    
    if (number<0) {
        printf("Please,do not do that\n");
    }
    else{
        squareRoot=sqrt(number);
        if (number==squareRoot*squareRoot) {
        printf("The number you entered is a perfect square number.\n");
            printf("Square root of ");
            printf("the number you entered:%d\n",squareRoot);
        }
        else{
        printf("The number you entered is not a perfect square\n");
        }
        
    }
    return 0;
}
