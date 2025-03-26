//
//  main.c
//  BasitÖrnek
//
//  Created by SILANUR ÇANDIR on 14.03.2025.
//

#include <stdio.h>
struct car{
    char brand[20];
    char model[20];
    int year;
};
int main(void) {
    struct car c1={"opel","corsa",1990};
    struct car c2={"ford","focus",1971};
    struct car c3={"BMW","X5",1999};

    printf("%s %s %d\n",c1.brand,c1.model,c1.year);
    printf("%s %s %d\n",c2.brand,c2.model,c2.year);
    printf("%s %s %d\n",c3.brand,c3.model,c3.year);

    return 0;
}
