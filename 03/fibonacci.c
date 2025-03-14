//
//  main.c
//  fibonacci
//
//  Created by SILANUR ÇANDIR on 23.11.2024.
//1 1 2 3 5 8...fibonacci

#include <stdio.h>

int main(void) {
    int i,size,oldsum=1,newsum=1,j=0;
    
    printf("enter a fibomacci series size:");
    scanf("%d",&size);
    printf("1 ");
    
    for (i=1;i<=size-1;i++) {
        printf("%d ",newsum);
        j=newsum;
        newsum+=oldsum;
        oldsum=j;
    }
    
    printf("\n");



    
    
    return 0;
}
