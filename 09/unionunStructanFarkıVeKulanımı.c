//
//  main.c
//  unionunStructanFarkıVeKullanımı
//
//  Created by SILANUR ÇANDIR on 17.03.2025.
//

#include <stdio.h>
union unions{
    char name[40];
    int age;
    float weight;
}uStudent;
typedef struct{
    char name[40];
    int age;
    float weight;
}student;
int main(void) {
    printf("size of union:%d\n",sizeof(uStudent));//40
    printf("size of struct:%d\n",sizeof(student));//48
/*  struct ile union arasındaki farklar:
 1)
     ->struct bellekte yer ayırırken her veri türünün toplamı kadar yer ayırır. Mesela burada boyutu 40 olan bir dizi bir int ve birde float var. yani 40+4+4=48
     ->unionda ise en büyük verinin boyutu kadar yer ayırır.Yani 40
 2)
 unionda aynı anda iki tane union üyesini çağırıp kullanamayız
 en son hangi değeri çağırdıysanız onu kullanırsınız
 */
    printf("enter name:");
    scanf("%s",&uStudent.name);
    
    printf("enter age:");
    scanf("%d",&uStudent.age);
    printf("\n\n");
    printf("name:%s\n",uStudent.name);
   printf("age:%d\n",uStudent.age);
    return 0;
}
