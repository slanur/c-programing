//
//  main.c
//  dizilerleZarAtma
//
//  Created by SILANUR ÇANDIR on 12.01.2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//100 kere zar at hangi sayıdan kaç tane geldiğini yazdır
int main(void){
    int dice,howMany[7]={0,0,0,0,0,0,0,0};
    srand(time(NULL));

    for (int i=1;i<=100;i++) {
        dice=rand()%6+1;
        howMany[dice]++;
    }
    printf("zar numarasi\tkac defa geldi\n");
    for (int i=1;i<=6;i++) {
        printf("%d\t\t\t\t%d\n",i,howMany[i]);
    }
    
        return 0;
    
}
