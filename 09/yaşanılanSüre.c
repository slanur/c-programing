//
//  main.c
//  yaşanılanGünSayısı
//
//  Created by SILANUR ÇANDIR on 16.03.2025.
//

#include <stdio.h>
struct myDate{
    int day;
    int month;
    int year;
};

int main(void) {
    struct myDate old;
    struct myDate now;
    
    printf("enter your date of birth(day,month,year):");
    scanf("%d%d%d",&old.day,&old.month,&old.year);
    
    printf("enter today's date(day,month,year):");
    scanf("%d%d%d",&now.day,&now.month,&now.year);
    
    //28.05.1990
    //23.04.2023 gibi bir örnek için 
    if (old.day>now.day) {
        now.day+=30;
        now.month-=1;
    }//doğum tarihinin günü şuanki tarihin gününden büyük olursa gün sayısının negatif çıkmaması için
    if (old.month>now.month) {
        now.month+=12;
        now.year -=1;
    }//doğum tarihinin ayı şuanki tarihin ayından  büyük olursa gün sayısının negatif çıkmaması için

    printf("you have lived:\n");
    printf("%d year, %d month, %d day ",now.year-old.year,now.month-old.month,now.day-old.day);
    printf("till now\n\n");
    
    return 0;
}
