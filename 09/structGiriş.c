//
//  main.c
//  structGiriş
//
//  Created by SILANUR ÇANDIR on 14.03.2025.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <struct.h>
//struct kendi veriable türümüzü oluşturmaya yarıyor
//içerisinde birden fazla veriable türü barındırabilir
//struct kopyalama struct verilerini değiştirme aşağıda
struct student{
    char myLetter;
    char* name;
    char* lastname;
    int no;
    float score;
    char parentName[20];
};
int main(void) {
    struct student x;
    struct student x2;
/* struct student x={'A',"silanur","candir",1905,95.06,"zeynep"}; bu şekilde her bir değişkeni farklı bir satırda tanımlamadan tek satırda tanımlayabiliriz
 */
    x.myLetter='S';
    x.name="silanur";
    x.lastname="candir";
    x.no=1905;
    x.score=95.06;
    strcpy(x.parentName,"zeynep");
    
    x2.myLetter='H';
    x2.name="hakan";
    x2.lastname="candir";
    x2.no=1961;
    x2.score=90.04;
    strcpy(x2.parentName,"sabri");
    
    printf("Letter:%c\n",x.myLetter);
    printf("Name:%s\n",x.name);
    printf("lastname:%s\n",x.lastname);
    printf("no:%d\n",x.no);
    printf("score:%.2f\n",x.score);
    printf("-------------------\n");
    printf("Letter:%c\n",x2.myLetter);
    printf("Name:%s\n",x2.name);
    printf("lastname:%s\n",x2.lastname);
    printf("no:%d\n",x2.no);
    printf("score:%.2f\n",x2.score);
    printf("-------------------\n");
    printf("KOPYALAMA\n");
    struct student x3;
    x3=x;
    printf("Letter:%c\n",x3.myLetter);
    printf("Name:%s\n",x3.name);
    printf("lastname:%s\n",x3.lastname);
    printf("no:%d\n",x3.no);
    printf("score:%.2f\n",x3.score);
    printf("-------------------\n");
//değişkenlerin değerleri sonradan değiştirilebiliyor
    
    return 0;
}
