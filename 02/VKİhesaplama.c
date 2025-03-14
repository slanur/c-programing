//
//  main.c
//
//
//  Created by SILANUR ÇANDIR on 9.11.2024.
//vücut kitle indexi hesaplama

#include <stdio.h>

int main(void) {
    /*
     indexCalculation=weight(kilogram)/height(meter)*height
     BMI values
     Under weight: less than 18.5
     normal: between 18.5 and 24.9
     overweight: between 25 and 29.9
     obese:30 or greater
     */
    float indexCalculation=0.00,weight,height;
    printf("your enterweigh t(kg) and height(meter):");
    scanf("%f %f",&weight,&height);
    
    indexCalculation=weight/(height*height);
    printf("your body mass index is:%f\n",indexCalculation);
    
    if (indexCalculation<18.5) {
        printf("you are underweight according to your BMI values\n");
    }
    else if (indexCalculation>18.5 && indexCalculation<24.9){
        printf("you are normal according to your BMI values\n");
    }
    else if (indexCalculation>24.9 && indexCalculation<29.9){
        printf("you are overweight according to your BMI values\n");
    }
    else if (indexCalculation>=30){
        printf("you are obese according to your BMI values\n");
    }
    else{
        printf("there is no such value.\n");
    }



    return 0;
}
