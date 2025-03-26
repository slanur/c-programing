typedef struct{
    char name[20];
    char lastname[20];
    char phone[11];//tek seferde birden fazla sayı alabilmek için char olarak tanımladık
}Record;
 
void menu(void);
int phoneAdd(void);
int phoneList(void);
int phoneSearch(char*);
