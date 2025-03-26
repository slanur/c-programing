//
//  main.c
//  içİçeStructKullanımı
//
//  Created by SILANUR ÇANDIR on 16.03.2025.
// öğretmenler atanmak için bir sınava ve ardından bir mülakata giriyorlar eğer mülakatı geçerseler sınavda başarılı oluyorlar

#include <stdio.h>
struct condidateInfo{//aday bilgi
    char* name;
    char* lastname;
    int age;
    int note;//sınav notu
    float  avarage;//diploma notu
};
struct interview{
    char* interviewer;
    char* interviewDate;
    struct condidateInfo candidate;
    int interviewNote;
    
};
int main(void) {
    struct interview y;
    y.interviewer="Sila Candir";
    y.interviewDate="25.12.2024";
    y.interviewNote=89;

    y.candidate.name="Esma";
    y.candidate.lastname="Candir";
    y.candidate.age=25;
    y.candidate.note=80;
    y.candidate.avarage=2.69;

    printf("mulakati yapan:%s\n",y.interviewer);
    printf("mulakat tarihi:%s\n",y.interviewDate);
    printf("mulakat notu:%d\n\n",y.interviewNote);
    
    printf("adayin adi:%s\n",y.candidate.name);
    printf("adayin soyadi:%s\n",y.candidate.lastname);
    printf("adayin adi:%d\n",y.candidate.age);
    printf("adayin adi:%d\n",y.candidate.note);
    printf("adayin adi:%.2f\n\n",y.candidate.avarage);



    return 0;
}
