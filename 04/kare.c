//
//  main.c
//  kare
//
//  Created by SILANUR ÇANDIR on 30.11.2024.
//

#include <stdio.h>

int main(void) {
    int i,kenar,j;
    
    printf(" karenin kenar uzunluğunu giriniz:");
    scanf("%d",&kenar);
    
    for (i=1;i<=kenar;i++) {
        for (j=1;j<=kenar;j++) {
            if (i==1||i==kenar)
                printf("* ");
            else if (j==1 || j==kenar)
                printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
       

    return 0;
}
