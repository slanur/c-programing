//
//  main.c
//  telefon faturası hesaplama
//
//  Created by SILANUR ÇANDIR on 4.11.2024.
//
/*
 4dk=1tl sabit sonraki her dakika için ek 0.07
 konuşma dakikasını girdi olarak al
 */
#include <stdio.h>

int main(void) {
    float fatura,konuşmadakika;
    printf("telefonla kaç dakika konuştuğunuzu giriniz:");
    scanf("%f",&konuşmadakika);
    
    if (konuşmadakika<=4 && konuşmadakika>0) {
        fatura=1;
    }
    else{
        fatura=(konuşmadakika-4)*0.07+1;
    }
    
    printf("bu konuşma için ödemeniz gereken tutar:%.2f\n",fatura);
    
    
    
    return 0;
}
