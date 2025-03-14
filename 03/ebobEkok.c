//
//  main.c
//  ebob-ekok
//
//  Created by SILANUR ÇANDIR on 29.11.2024.
//

#include <stdio.h>

int main(void) {
     int i,number1,number2,sml,lrg;
     int smallestNumber = 0,largestNumber = 0,ebob=1,ekok=1;
     printf("iki sayı giriniz:");
     scanf("%d %d",&number1,&number2);
     if (number1>number2){
         largestNumber=number1;
         smallestNumber=number2;
     }
     else if (number1<number2){
         smallestNumber=number1;
         largestNumber=number2;
     }
     else if (number1==number2){
         ebob=number1;
         ekok=number1*number2;
     }
    //----------------------------
    sml=smallestNumber;
    lrg=largestNumber;
    for (i=2;i<=smallestNumber;i++) {
        if (smallestNumber%i==0 && largestNumber%i==0) {
            ebob=i;
        }
    }
    if (ebob==0) ebob=1;
    printf("%d ve %d sayılarının obebi:%d\n",sml,lrg,ebob);
    /*
     ekok:ebob*sml/ebob*lrg/ebob
     */
    ekok=ebob*(sml/ebob)*(lrg/ebob);
    printf("%d ve %d sayısının ekoku :%d\n",sml,lrg,ekok);
    
    
    
    
    
    
    
    
    
    
    
    
    

    return 0;
}
