//
//  main.c
//  girilen sayılardan en büyüğünü ve en küçüğünü bulan program
//0 girince solanıyor
//  Created by SILANUR ÇANDIR on 21.11.2024.
//

#include <stdio.h>

int main(void) {
    int number,smallestnumber=0,largestnumber=0,i=1;
    do {
        printf("%dth enter a number:",i);
        scanf("%d",&number);
        if(number==0) break;
        if(number<smallestnumber) smallestnumber=number;
        if (number>largestnumber) largestnumber=number;
        i++;
    } while (number!=0);
    
    printf("largest number:%d\n",largestnumber);
    printf("smallest number:%d\n",smallestnumber);


    return 0;
}
