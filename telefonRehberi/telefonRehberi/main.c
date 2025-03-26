//
//  main.c
//  telefonRehberi
//
//  Created by SILANUR ÇANDIR on 23.03.2025.
/*
        Telefon Rehberi
 1.Telefon ekle
 2.Telefonları listele
 3.Arama yap
 4.Çıkış
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "header.h"
#include "menu.h"
#include "phoneAdd.h"
#include "phoneList.h"
#include "phoneSearch.h"


int main(void) {
    int choice=0;
    char searchName[20];
    int searchResult=0;
    
    menu();
    do {
        printf("\n\nSeciminizi giriniz:");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                if (phoneAdd()==0) {
                    printf("\n Telefon numarasi basarili bir sekilde eklendi\n");
                }else{
                    printf("\n Telelfon numarasi eklenirken hata olustu\n");
                }
                break;
            case 2:
                if (phoneList()==0) {
                    printf("\n Telefon numaralari basarili bir sekilde listelendi\n");
                }else{
                    printf("\n Telelfon numaralari listelenirken hata olustu\n");
                }
                break;
            case 3 :
                printf("Aranacak ismi giriniz(max 19 karakter):");
                scanf("%s",searchName);
                searchResult=phoneSearch(searchName);
                if (searchResult==0) {
                    printf("\nAranilan kayit bulunamadi\n");
                }else{
                    printf("\nToplam %d kayit bulundu\n",searchResult);
                }
                break;
            case 4:
                printf("\n Cikis yaptiniz. Hoscakalin\n\n");
                return 0;
                break;

            default:printf("\n Lutfen 1-4 arasi bir deger giriniz!\n");
                break;
        }
    } while (choice !=4);
     
    
    
    return 0;
}

