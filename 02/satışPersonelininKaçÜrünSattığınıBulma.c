//
//  main.c
//  satış personelinin kaç ürün sattığını bulma 
//
//  Created by SILANUR ÇANDIR on 8.11.2024.
/*
 number products
 day7=25
 day6=19
 day5=15
 day4=10
 day3=7
 day2=5
 day1=2
  Asking the user for a day and finding the number of sales
 made until that day.
 For example, if entered on Wednesday, the number of products
 sold will be 5+4+4.
*/

#include <stdio.h>

int main(void) {
    int day,numberofproducts=0;
    day=0;
    char *dayname;
    printf("enter a number of day(1-7):");
    scanf("%d",&day);
    
    switch (day) {
        case 7:numberofproducts+=25;
            if (day==7){dayname="sunday";}
        case 6:numberofproducts+=19;
            if (day==6){dayname="saturday";}
        case 5:numberofproducts+=15;
            if (day==5){dayname="friday";}
        case 4:numberofproducts+=10;
            if (day==4){dayname="thoursday";}
        case 3:numberofproducts+=7;
            if (day==3){dayname="wednesday";}
        case 2:numberofproducts+=5;
            if (day==2){dayname="tuesday";}
        case 1:numberofproducts+=2;
            if (day==1){dayname="monday";}
            break;
        default:printf("you didn't enter a valid number");
            break;
    }
    printf("A total of %d products were sold by the end of %s.\n",numberofproducts,dayname);
    

    return 0;
}
