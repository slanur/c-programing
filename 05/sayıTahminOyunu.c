//
//  main.c
//  number guess play
//
//  Created by SILANUR ÇANDIR on 10.12.2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int randomNumber(int);


int main(void) {
    
    int number=0,i;
    srand(time(NULL));
    number=randomNumber(number);
    
    printf("Our number between 1-100.\n");
    printf("You have 5 chances to guess the number correctly\n");
    
    
    for (i=1;i<=5;i++) {
        int guess=0;
        printf("enter the %d. number:",i);
        scanf("%d",&guess);
        if (number==guess) {
            printf("CONGRATULATIONS\n"); return 0;
        }//end if
        if (i==5){
            printf("you didn't know\n");
            printf("number:%d\n",number);
            return 0;
        }//end if
        if (number>guess) printf("please try more than larger\n");
        if (number<guess) printf("please try more than smaller\n");
        printf("please repeat try\n");
    }//end for
    

    
    return 0;
}//end int main 


int randomNumber(int number){
    number=rand()%100+1;
    return number;
}

