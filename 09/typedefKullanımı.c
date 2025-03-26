//
//  main.c
//  typedefKullanımı
//
//  Created by SILANUR ÇANDIR on 16.03.2025.
//
/*
  typedef mevcut bir veriable türüne takma ad vermemizi sağlıyor
 */
typedef int i ;
//özellikle struct'larda kullanılıyor
typedef struct{
    char* name;
    int age;
    float weight;
}Student;
#include <stdio.h>

int main(void) {
    i x=7,y=19;
    printf("%d %d\n",x,y);
    printf("---------------------\n");
    
    //struct student s1=.......yazmak yerine bu şekilde kullanabiliriz
    Student s1={"nazli",28,65.02};
    Student s2={"ceren",27,62.03};
    
    printf("name:%s; age:%d; weight:%.2f\n",s1.name,s1.age,s1.weight);
    printf("name:%s; age:%d; weight:%.2f\n",s2.name,s2.age,s2.weight);

    return 0;
}
