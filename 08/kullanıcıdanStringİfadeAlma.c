//
//  main.c
//  kullanicidanStringİfadeAlma
//
//  Created by SILANUR ÇANDIR on 19.01.2025.
//

#include <stdio.h>

int main(void)
{
    char ch,sen[100],s[100];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");//burada bu ifade olmazsa kod calışmaz neden olduğunu araştır
    scanf("%[^\n]%*c",sen);
    
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
    return 0;
}
/*
 fgets(diziAdı,diziBoyutu,stdin) ile de alabiliyoruz

 */
