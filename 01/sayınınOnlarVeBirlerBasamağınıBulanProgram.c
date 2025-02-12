//
//  main.c
//  girilen sayının onlar ve birler basamağını bulan program
//
//  Created by SILANUR ÇANDIR on 31.10.2024.
//

#include <stdio.h>

int main(void)
{
   
    int sayı,birlerbasamağı,onlarbasamağı;
    printf("bir sayı giriniz:");
    scanf("%d",&sayı);
    birlerbasamağı=sayı%10;
    onlarbasamağı=(sayı%100)/10;
    printf("girdiğiniz sayının onlar basamağı:%d\n",onlarbasamağı);
    printf("girdiğiniz sayının birler basamağı:%d\n",birlerbasamağı);
    
    
    
    return 0;
}
