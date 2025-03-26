int phoneAdd(void){
    Record newRecord;
    FILE* fptr;
    fptr=fopen("/Users/silanurcandir/Desktop/telefonRehberi/telefonRehberi/telefonRehberi.txt","a");
    if (fptr==NULL) {
        return -1;
    }
    printf("\n\n");
    printf("Isim giriniz(max 19 karakter):");
    scanf("%s",newRecord.name);
    printf("Soy isim giriniz(max 19 karakter):");
    scanf("%s",newRecord.lastname);
    printf("Telefon numarasi giriniz(max 10 karakter):");
    scanf("%s",newRecord.phone);
    fprintf(fptr,"\n%s %s %s",newRecord.name,newRecord.lastname,newRecord.phone);
    fclose(fptr);
    return 0;
}
