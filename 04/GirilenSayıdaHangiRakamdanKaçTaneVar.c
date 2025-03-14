//
//  main.c
// Girilen sayıda hangi rakamdan kaç adet olduğunu gösteren program
//
//  Created by SILANUR ÇANDIR on 8.12.2024.
//

#include <stdio.h>

int main(void) {
    while(1){
        long number1;
        int mod=0,basamak=0;
        int bir=0,iki=0,uc=0,dort=0,bes=0,alti=0,yedi=0,sekiz=0,dokuz=0,sifir=0;
        char kontrol;
        printf("enter a number:");
        scanf("%ld",&number1);
        while (number1!=0) {
            mod=number1%10;
            number1/=10;
            basamak++;
            switch (mod) {
                case 1:
                    bir++;
                    break;
                case 2:
                    iki++;
                    break;
                case 3:
                    uc++;
                    break;
                case 4:
                    dort++;
                    break;
                case 5:
                    bes++;
                    break;
                case 6:
                    alti++;
                    break;
                case 7:
                    yedi++;
                    break;
                case 8:
                    sekiz++;
                    break;
                case 9:
                    dokuz++;
                    break;
                case 0:
                    sifir++;
                    break;
                default:printf("geçerli bir ifade girmediniz!\n");
                    break;
            }
        }

            printf("girdiğiniz sayi %d basamaklı\n",basamak);
            printf("0->%d\n",sifir);
            printf("1->%d\n",bir);
            printf("2->%d\n",iki);
            printf("3->%d\n",uc);
            printf("4->%d\n",dort);
            printf("5->%d\n",bes);
            printf("6->%d\n",alti);
            printf("7->%d\n",yedi);
            printf("8->%d\n",sekiz);
            printf("9->%d\n",dokuz);
            printf("devam etmek istiyor musunuz?");
            scanf("%s",&kontrol);
            if (kontrol=='E'|| kontrol=='e') continue;
            break;
        
    }
    return 0;
}
//KISA YOLU
/*int main (void){
    
    int sayi;
    scanf("%d",&sayi);
    printf("%d\n",sayi);//122
    for (int i=0;i<10;i++) {
        int s=sayi;
        int sayaç=0;
        while (s>0) {
            int bas=s%10;//2
            s=s/10;//12
            if (i==bas)
                sayaç++;
        }
        printf("%d %d\n",i,sayaç);

    }
    return 0;
}*/

