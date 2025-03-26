//
//  main.c
//  cumledeki kelime sayısını bulma
//
//  Created by SILANUR ÇANDIR on 25.01.2025.
//

#include <stdio.h>

int main(void) {
    char cumle[100];
    int i=0,k=1;
    printf("bir cumle giriniz:");
    fgets(cumle,100,stdin);
    
    while(cumle[i] != '\0') {
        if (cumle[i]==' ') k++;
        i++;
    }
    printf("cumledeki kelime sayısı:%d\n",k);



    return 0;
}
