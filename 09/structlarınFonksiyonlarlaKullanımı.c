//
//  main.c
//  struclarınFonksiyonlarlaKullanımı
//
//  Created by SILANUR ÇANDIR on 16.03.2025.
//

#include <stdio.h>
struct info{
    char* name;
    int age;
};
void showMe(struct info);
int main(void) {
    struct info x;
    x.name="Zeynep";
    x.age=35;
    
    showMe(x);
    return 0;
}
void showMe(struct info x){
    printf("name:%s\n",x.name);
    printf("age:%d\n",x.age); 
    
}
