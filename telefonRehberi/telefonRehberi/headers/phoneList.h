int phoneList(void){
    Record currentRecord;
    FILE* fptr;
    fptr=fopen("/Users/silanurcandir/Desktop/telefonRehberi/telefonRehberi/telefonRehberi.txt","r");
    if (fptr==NULL) {
        return -1;
    }
    printf("\n\nIsim\t\tSoyisim\t\ttelefon\n");
    printf("----\t\t-------\t\t-------\n");
    while (!feof(fptr)) {
fscanf(fptr,"%s%s%s",currentRecord.name,currentRecord.lastname,currentRecord.phone);
        printf("%s\t\t",currentRecord.name);
        printf("%s\t\t",currentRecord.lastname);
        printf("%s\n",currentRecord.phone);
    }
    
    fclose(fptr);
    return 0;
}

