//
//  main.c
//
//girilen sayıya kadar olan asal sayıları yazdırma
//  Created by SILANUR ÇANDIR on 10.11.2024.
//

#include <stdio.h>

int main(void) {
   
    int number,i,j,control;
    
  //____________________________________________________
    printf("enter a positive number greater than 1:");
    scanf("%d",&number);
    if (number<=1) {
        printf("please enter a valid number\n");
        return 0;
    }
    //__________________________________________
    for (i=2;i<=number;i++) {
        control=1;
        for (j=2;j<=i/2;j++) {
            if (i%j==0) {
                control=0;
                break;
            }//end of if
        }//end of inner for
        
        if (control !=0) {
            printf("%d\n",i);
        }
    }//end of outer for
    
    return 0;
}
