//
//  main.c
//  satır sütun sayısı
//
//  Created by SILANUR ÇANDIR on 19.11.2024.
//

#include <stdio.h>
int main(void) {
    int satır,sütun,i,j,k=0;
    printf("satır sayısını girinşz:");
    scanf("%d",&satır);
    printf("sütun sayısını giriniz:");
    scanf("%d",&sütun);
    
    for (i=1;i<=satır;i++) {
        for (j=1;j<=sütun;j++) {
            printf("%d ",++k);
        }
        printf("\n");
    }
    return 0;
}

