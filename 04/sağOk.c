//
//  main.c
//  ders video
//
//  Created by SILANUR ÇANDIR on 26.11.2024.
//Sağ ok

#include <stdio.h>

int main(void) {
    int i,j,row,a=0;
    char letter;
    printf("enter a letter:");
    scanf("%c",&letter);
    printf("enter  a row number:");
    scanf("%d",&row);
    
    for (i=0;i<row;i++) {
        if (i<=row/2)
            a++;
        else a--;
        for (j=1;j<a;j++) {
            printf(" ");
        }
        
        printf("%c\n",letter);
        
    }
    
        return 0;
}
/*
 int i=1,j,sayı;
 printf("bir tek sayı giriniz:");
 scanf("%d",&sayı);
 
 for (i=1;i<=(sayı/2)+1;i++) {
     for (j=1;j<=i;j++) {
         printf(" ");
     }
     printf("A");
     printf("\n");
 }
 for (i=1;i<=sayı/2;i++) {
     for (j=i;j<=sayı/2;j++) {
         printf(" ");
     }
     printf("A");
     printf("\n");
 }

 */

