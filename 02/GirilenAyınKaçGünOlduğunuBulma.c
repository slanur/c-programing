//
//  main.c
//
//
//  Created by SILANUR ÇANDIR on 8.11.2024.
//girilen ayın kaç gün olduğunu bulma
/*
 Nisan, Haziran, Eylül, Kasım. 31 gün süren aylar: Ocak, Mart, Mayıs, Temmuz, Ağustos, Ekim, Aralık.
 */
#include <stdio.h>

int main(void) {
    int month;
    printf("you enter a month number(1-12):");
    scanf("%d",&month);
    if (month>0 && month<12) {
    switch (month) {
        case 2:printf("you entered month are 28 days,");
               printf("but it consist of 29 days every 4 years.\n");
            break;
//4 6 9 and 11 it can be like this write
        case 4:
        case 6:
        case 9:
        case 11:printf("you entered month are 30 days.\n");
            break;
        default:printf("you entered month are 31 days.\n");
            break;
    }
}
    else printf("please enter a valid number\n");
    return 0;
}
