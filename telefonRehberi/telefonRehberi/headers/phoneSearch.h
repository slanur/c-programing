int phoneSearch(char* ptSearch){
    int i=0;
    Record currentRecord;
    FILE* fptr;
fptr=fopen("/Users/silanurcandir/Desktop/telefonRehberi/telefonRehberi/telefonRehberi.txt","r");
    if (fptr==NULL) {
        return -1;
    }
    
    while (!feof(fptr)) {
fscanf(fptr,"%s%s%s",currentRecord.name,currentRecord.lastname,currentRecord.phone);
        if (!strcmp(ptSearch,currentRecord.name))
            //strcmp fonksiyonu karşılaştırma komutudur ve ptSearch currant'e eşitse 0 değerini döndürür.!'i koymamın sebebi dönen sayiyi 1 alıp ifin içine girmek
        {
            printf("%s\t\t",currentRecord.name);
            printf("%s\t\t",currentRecord.lastname);
            printf("%s\n",currentRecord.phone);
            i++;
        }
    }
    
    fclose(fptr);
 
    
    
    return i;
}
