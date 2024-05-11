#include<stdio.h>
#include <string.h>
void livelo_6(char *scrivi, int *live);

#define max 100
int main(){
    char scrivi[max];
    int live=3;
    livelo_6(scrivi, &live);
    printf("LIVELO 7");

    return 0;
}
void livelo_6(char *scrivi, int *live){
    char vero[] = "printf";
    char vero2[] = ";";
    char vero1 []="&";
    
do {
    printf("scrivi cosa manca per far stampare a schermo\n(\"franco bibi\");\n");//printf
    scanf("%s", scrivi);
    int len = strlen(scrivi);

    if (scrivi[len - 1] == '\n')
        scrivi[len - 1] = '\0';
    while (getchar() != '\n');
    
    if (strcmp(scrivi, vero) != 0)
        (*live)--;
    if (*live == 0) {
        return;
    }
} while (strcmp(scrivi, vero) != 0);
    memset(scrivi, '\0', max);
    
    
do{
    printf("scrivi cosa manca per far scrivere da tastiera");
    printf("\nscanf(\"%%d\", num);\n");//&
    scanf("%s", scrivi);
    int len = strlen(scrivi);
    if (scrivi[len - 1] == '\n')
        scrivi[len - 1] = '\0';
    while (getchar() != '\n');
    if (strcmp(scrivi, vero1) != 0)
        (*live)--;
    if (*live == 0) {
        return;
    }
    
}while(strcmp(scrivi,vero1)!=0);
    memset(scrivi, '\0', max);
    
    printf("scrivi cosa manca, in ordine");//;,&,printf,
    printf("\nprintf(\"scrivi un numero\")\n scanf(\"%%d\", num);\n(il numero scritto :%%d\", num) \");\n");
    do{
    printf("1:");
    scanf("%s", scrivi);
    int len = strlen(scrivi);
    if (scrivi[len - 1] == '\n')
        scrivi[len - 1] = '\0';
    while (getchar() != '\n');
    if(strcmp(scrivi, vero2)!=0)
    (*live)--;
    if(*live==0){
        return;
    }
    }while(strcmp(scrivi, vero2)!=0);
    memset(scrivi, '\0', max);
    do{
    printf("2:");
    scanf("%s", scrivi);
    if(strcmp(scrivi, vero1)!=0)
    (*live)--;
    if(*live==0){
        return;
    }
    }while(strcmp(scrivi, vero1)!=0);
    memset(scrivi, '\0', max);
    do{
        printf("3:");
    scanf("%s", scrivi);    
    if(strcmp(scrivi, vero)!=0)
    (*live)--;
    if(*live==0){
        return;
    }
    
    }while(strcmp(scrivi, vero)!=0);
    memset(scrivi, '\0', max);
}