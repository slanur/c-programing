//
//  main.c
//  Program to find out whether the entered numbers are in a special format Program to find out whether the entered numbers are in a special format
//
//  Created by SILANUR ÇANDIR on 3.11.2024.
//

#include <stdio.h>
/*
 our special format:abcd=(ab+cd)*(ab+cd)
 our number must be 4 digits
 abcd/100=ab
 abcd%100=cd
 */

int main(void) {
    int abcd,ab,cd;
    printf("enter a 4 digit number:");
    scanf("%d",&abcd);
    
    ab=abcd/100;
    cd=abcd%100;
    
    if (abcd==(ab+cd)*(ab+cd)) {
        printf("The number you entered conforms to ");
        printf("the special format\n");
    }
    else{
        printf("The number you entered does not comply ");
        printf("with the special format\n");
        printf("Please enter another number.\n");
    }
   
    
    
    
    
    return 0;
}
