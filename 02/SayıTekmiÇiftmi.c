//
//  main.c
//  girilen sayının tek mi çift mi olduğunu bulan program
//
//  Created by SILANUR ÇANDIR on 3.11.2024.
//


#include <stdio.h>

int main(void)
{
    int sayı;
    printf("bir doğal sayı giriniz:");
    scanf("%d",&sayı);
    
    if (sayı%2 ==0)
    {
        printf("girdiğiniz sayı çifttir\n");
    }
    else{
        printf("girdiğiniz sayı tektir\n");
    }
    
    
    
    
    return 0;
}
