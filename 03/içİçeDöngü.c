//
//  main.c
//  iç içe döngü
//
//  Created by SILANUR ÇANDIR on 10.11.2024.
//


#include <stdio.h>

int main(void)
{
    
    int i,j;
    for (i=1;i<=4;i++) {
        for (j=1;j<=3;j++) {
            printf("hello world\n");
        }//end of inner
        printf("----------------------------\n");
    }//end of outer
    
    for (i=1;i<=4;i++) {
        for (j=1;j<=3;j++) {
          printf("hello world-");
        }//end of inner
        printf("\n----------------------------\n");
    }//end of outer
    
    for (i=1;i<=4;i++) {
        for (j=1;j<=3;j++) {
          printf("hello world ");
            if (j!=3) {
                printf(" - ");
            }
        }//end of inner
        printf("\n----------------------------\n");
    }//end of outer
    return 0;
}//end of main

