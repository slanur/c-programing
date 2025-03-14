//
//  main.c
//  girilen sayının asal sayı olup olmadığını bulma
//
//  Created by SILANUR ÇANDIR on 9.11.2024.
//

#include <stdio.h>

int main(void) {
    int i=2,number;
    
    printf("enter a positive number greater than 1:");
    scanf("%d",&number);
    
    if (number<=1) {
        printf("please enter a valid number\n");
        return 0;
    }
    while (i<=number/2) {
        if (number%i==0) {
            
            printf("%d is a not prime number\n",number);
            
            return 0;}
        
         i++;
    }
    printf("%d is a prime number\n",number);
    
    return 0;
}
   /*
    ANOTHER A WAY
    int i;
    printf("Enter a positive number greater than 1:");
    scanf("%d",&i);
    if (i<=1) {
        printf("please enter a valid number\n");
        return 0;
    }
    
    while(i) {
        if (i%2==0 && i!=2) {
            printf("%d is not prime number\n",i);
        }
        else if (i%3==0 && i!=3){
            printf("%d is not prime number\n",i);
        }
        else if (i%5==0 && i!=5){
            printf("%d is not prime number\n",i);
        }
        else{
            printf("%d is a prime number\n",i);
        }
        break;
}
    */
 
