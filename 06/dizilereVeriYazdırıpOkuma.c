//
//  main.c
//  dizilereVeriYazdırıoOkuma
//
//  Created by SILANUR ÇANDIR on 31.12.2024.
//

#include <stdio.h>
int main(void){
   
    double myArray[10];
    int choose,index;
    
    do {
        printf("make a choose exit to -1\n");
        printf("write to array choose the 1\n");
        printf("read to array choose the 2\n");
        scanf("%d",&choose);
        if (choose==-1) break;
        if (choose!=2 && choose!=1) {
            printf("are you kidding me?\n");
            continue;
        }
        printf("enter array index:");
        scanf("%d",&index);
        if (index<0 || index>9) {
            printf("index is should be range 0-9\n");
            continue;
        }
        switch (choose) {
            case 1:
                printf("enter a value:");
                scanf("%lf",&myArray[index]);
                break;
            case 2:
                printf("%.2f\n",myArray[index]);
                break;
        }
        
        
        
    } while (choose!=-1);
    
    
    
        return 0;
}
