//
//  main.c
//  dik üçgen alhoritması
/*
 *
 **
 ***
 ###
 ##
 #
 */
//  Created by SILANUR ÇANDIR on 10.11.2024.
//

#include <stdio.h>

int main(void) {
    int i,j,sharps;
    
   printf("enter a number sharps:");
    scanf("%d",&sharps);
    
    for (i=1;i<=sharps;i++) {
        for (j=1;j<=i;j++) {
            printf("#");
        }//end of inner
        printf("\n");
    }//end of outer
    
        
    for (i=1;i<=sharps;i++) {
        for (j=sharps;j>=i;j--) {
            printf("*");
        }//end of inner
        printf("\n");
    }//end of outer
        return 0;
}//end of main
