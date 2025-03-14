//
//  main.c
//  1 den n ye kadar olan sayıların toplamı
//
//  Created by SILANUR ÇANDIR on 13.11.2024.
//

#include <stdio.h>

int main(void) {
    int sum=0,i=1,j;
    
    printf("enter a natural number:");
    scanf("%d",&j);
    if (j<0) {
        printf("you didn't enter a valid number!\n");
        return 0;
    }
    
    while (i<=j) {
        sum+=i;
        i++;
    }
    printf("Sum of numbers from 1 to n:%d\n",sum);


    return 0;
}
