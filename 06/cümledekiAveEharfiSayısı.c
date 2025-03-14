//
//  main.c
//  birCümledeGecen_A_ve_E_HarfiSaayısı
//
//  Created by SILANUR ÇANDIR on 18.01.2025.
//

#include <stdio.h>

int main(void) {
    char name[100];
    int a=0,e=0;
     
    for (int i=0;i<=100;i++) {
        scanf("%c",&name[i]);
        if (name[i]=='a'||name[i]=='A') a++;
        if (name[i]=='e'||name[i]=='E') e++;
        if (name[i]=='.') break;
    }
    printf("a sayısı:%d\n",a);
    printf("e sayısı:%d\n",e);
    return 0;
}
