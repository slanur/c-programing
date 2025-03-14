//
//  main.c
//  kenar uzunlukları alınan bir üçggenin hangi tür olduğunu bulma
//
//  Created by SILANUR ÇANDIR on 3.11.2024.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /*
     a*a=b*b +c*c dik üçgen
     a*a<b*b+c*c dar açılı üçgen
     a*a>b*b+c*c geniş açılı üçgen
     a b c sayıları farklılık gösterebilir
     */
    int a,b,c;
    char uzunkenar;
    
    printf("üçgenin kenar uzunluklarını giriniz:");
    scanf("%d %d %d",&a,&b,&c);
    //----------------------------------------------
    /*
     ilk önce girilen uzunlukların üçgen olma koşulunu sağlayıp sağlamadığını kontrol etmeliyiz
     */
    
    if (abs(a-b)<c && c<a+b) {
        if (a>b && a>c) {
            uzunkenar='a';
        }else if (b>a && b>c){
            uzunkenar='b';
        }else{
            uzunkenar='c';
        }
        //-----------------------------
        if (uzunkenar==a) {
            if (a*a==b*b+c*c) {
                printf("bu bir dik üçgendir\n");
            }else if (a*a>b*b+c*c){
                printf("bu üçben geniş açılıdır\n");
            }
            else if (a*a<b*b+c*c){
                printf("bu üçgen dar açılıdır\n");
            }//--------------------------------------
        }else if (uzunkenar==b){
            if (b*b==a*a+c*c) {
                printf("bu bir dik üçgendir\n");
            }else if (b*b>a*a+c*c){
                printf("bu üçben geniş açılıdır\n");
            }
            else if (b*b<a*a+c*c){
                printf("bu üçgen dar açılıdır\n");
            }//--------------------------------------
        }else{
            if (c*c==b*b+a*a) {
                printf("bu bir dik üçgendir\n");
            }else if (c*c>b*b+a*a){
                printf("bu üçben geniş açılıdır\n");
            }
            else if(c*c<b*b+a*a){
                printf("bu üçgen dar açılıdır\n");
            }//--------------------------------------
        }
            
        
        }
    else{
        printf("girdiğiniz uzunluklarla üçgen elde edilemez\n");
        }
    return 0;
}
