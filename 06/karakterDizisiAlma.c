//
//  main.c
//  karakterDizisiAlma
//
//  Created by SILANUR ÇANDIR on 12.01.2025.
//

#include <stdio.h>

int main(void) {
    char name[30];
    printf("Adınız nedir:");
    //fgets(dizinin adi,büyüklüğü,stdin);
    fgets(name,30,stdin);
    printf("%s\n",name);
    
    
    return 0;
}
