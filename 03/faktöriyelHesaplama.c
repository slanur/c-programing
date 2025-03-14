//
//  main.c
//  factorial calculation
//
//  Created by SILANUR ÇANDIR on 10.11.2024.
//

#include <stdio.h>

int main(void) {
    int i,factorial=1,myNumber;
    
    printf("enter a natural number:");
    scanf("%d",&myNumber);
    if (myNumber<0) {
        printf("please enter a valid number\n");
        return 0;
    }
    for (i=1;i<=myNumber;i++) {
        factorial*=i;
    }//end of for
    printf("%d factorial:%d\n",myNumber,factorial);
    
    /*
     ANOTHER WAY
     int i,factorial=1,myNumber;
     
     printf("enter a natural number:");
     scanf("%d",&myNumber);
     
     for (i=myNumber;i>1;i--) {
         factorial*=i;
     }//end of for
     printf("%d factorial:%d\n",myNumber,factorial);
     */
    
    
    
    
    
    
    
    
    return 0;
}//end of main
