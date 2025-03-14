//
//  main.c
//  dizilerinTerstenYazımı
//
//  Created by SILANUR ÇANDIR on 12.01.2025.
//

#include <stdio.h>

int main(void) {
    int array[7];
    printf("7 tane sayi giriniz:");
    for (int i=0;i<7;i++) {
        scanf("%d",&array[i]);
        }
    printf("tersi\n");
    for (int i=6;i>=0;i--) {
        printf("%d\n",array[i]);
    }
    
    
        return 0;
}
