//
//  main.c
//  döngülerle çarpım tablosu
//
//  Created by SILANUR ÇANDIR on 9.11.2024.
//

#include <stdio.h>

int main(void) {
   
    int number=0,i=1;
    
    printf("enter a number(1 to 10):");
    scanf("%d",&number);
    
    if (number>0 && number<=10) {
        while (i<=10) {
            printf("%d x %d=%d\n",number,i,number*i);
            i++;
        }
    }
    else{
        printf("please don't this\n");
    }
    
    
    
    
    
    
    
    return 0;
}
