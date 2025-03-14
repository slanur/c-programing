//
//  main.c
//  dizilerleTekÇiftSayıBulma
//
//  Created by SILANUR ÇANDIR on 12.01.2025.
//

#include <stdio.h>
int boyut=0;
int number[30];

void diziyeElemanGirme(void);
void tekmiCiftmi(void);

int main(void) {
    printf("dizinin boyutunu giriniz:");
    scanf("%d",&boyut);
    diziyeElemanGirme();
    tekmiCiftmi();
    
    return 0;
}
void diziyeElemanGirme(void){
    printf("%d tane eleman giriniz:",boyut);
    for (int i=0;i<boyut;i++) {
        scanf("%d",&number[i]);
    }
    
}
void tekmiCiftmi(void){
    printf("çift\ttek\n");
    for (int i=0;i<boyut;i++) {
        if (number[i]%2==0) {
            printf("%d",number[i]);
        }
        else{
            printf("\t\t%d",number[i]);
        }
        printf("\n");
    }
}
