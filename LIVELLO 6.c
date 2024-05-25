#include<stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

#define DELAY 10000
#define max 100

void setColor(int textColor, int bgColor) 
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (bgColor << 4) | textColor);
}
void printSlowly(const char *text, unsigned int delay) 
{
    while (*text) {
        printf("%c", *text++);
        fflush(stdout); 
        usleep(delay); 
    }
}
void lvl_6(int *LIFE);
void GAMEOVER();
void checklife(int LIFE)
{
 if (LIFE == 0) 
        {
            GAMEOVER();
            return;
        }
}

#define MAX 100
int main(){
    int LIFE=3;
    lvl_6(&LIFE);
    printf("LIVELO 7");

    return 0;
}
void lvl_6(int *LIFE)
{
    char vero[] = "printf";
    char vero2[] = ";";
    char vero1 []="&";
    char scrivi[MAX];
    setColor(3, 0);
    printSlowly("  \t\t\t\t~ ~ LIVELLO 6 ~ ~ \n\n", DELAY);
    
    do {
        setColor(3, 0);
        printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 1 -- \n", DELAY);
        printSlowly("\t\t\t\t\tscrivi cosa manca per far stampare a schermo\n", DELAY);
        setColor(8, 0);
        printSlowly("\t\t\t\t\t_______(\"franco bibi\");\n", DELAY);//printf")
        printSlowly("\t\t\t\t\trisposta:", DELAY);
        scanf("\t\t\t\t\t%s", scrivi);
        int len = strlen(scrivi);
        if (scrivi[len - 1] == '\n')
        scrivi[len - 1] = '\0';
        while (getchar() != '\n');
    
    if (strcmp(scrivi, vero) != 0){
            (*LIFE)--;
            setColor(4, 0);
            char formattedMessage[100];
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else
        {
            setColor(2, 0);
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        } 
    checklife(*LIFE);
    } while (strcmp(scrivi, vero) != 0);
    memset(scrivi, '\0', MAX);
    
    setColor(3, 0);
    printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 2 -- \n", DELAY);
    printSlowly("\t\t\t\t\tscrivi cosa manca per far scrivere da tastiera", DELAY);
    setColor(8, 0);
    printSlowly("\n\t\t\t\t\tscanf(\"%d\", _num);\n", DELAY);//&
    

    do
    {
        setColor(8, 0);
        printSlowly("\t\t\t\t\trisposta:", DELAY);
        scanf("\t\t\t\t\t%s", scrivi);
        int len = strlen(scrivi);
        if (scrivi[len - 1] == '\n')
        scrivi[len - 1] = '\0';
        while (getchar() != '\n');
        if (strcmp(scrivi, vero1) != 0){
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else
        {
            setColor(2, 0);
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        } 
         checklife(*LIFE);
    }while(strcmp(scrivi,vero1)!=0);
    memset(scrivi, '\0', MAX);
    setColor(3, 0);
    printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 3 -- \n", DELAY);
    printSlowly("\t\t\t\t\tscrivi cosa manca, in ordine", DELAY);  //;,&,printf,
    setColor(8, 0);
    printSlowly("\n\t\t\t\t\tprintf(\"scrivi un numero\")_\n", DELAY);
    printSlowly("\t\t\t\t\tscanf(\"%d\", _num);\n", DELAY);
    printSlowly("\t\t\t\t\t______(il numero scritto :%d\", num);\n", DELAY);
    do{
        setColor(8, 0);
        printSlowly("\t\t\t\t\t1:", DELAY);
        scanf("\t\t\t\t\t%s", scrivi);
        int len = strlen(scrivi);
        if (scrivi[len - 1] == '\n')
            scrivi[len - 1] = '\0';
        while (getchar() != '\n');
        if(strcmp(scrivi, vero2)!=0){
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else
        {
            setColor(2, 0);
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        } 
        checklife(*LIFE);
    }while(strcmp(scrivi, vero2)!=0);
    memset(scrivi, '\0', MAX);
    do{
        setColor(8, 0);
        printSlowly("\t\t\t\t\t2:", DELAY);
        scanf("\t\t\t\t\t%s", scrivi);
      if(strcmp(scrivi, vero1)!=0){
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else
        {
            setColor(2, 0);
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        } 
        checklife(*LIFE);
    }while(strcmp(scrivi, vero1)!=0);
    memset(scrivi, '\0', MAX);
    do{
        setColor(8, 0);
        printSlowly("\t\t\t\t\t3:", DELAY);
        scanf("\t\t\t\t\t%s", scrivi);    
        if(strcmp(scrivi, vero)!=0){
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else
        {
            setColor(2, 0);
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        } 
        checklife(*LIFE);
    }while(strcmp(scrivi, vero)!=0);
    memset(scrivi, '\0', MAX);
    system("cls");
}
void GAMEOVER(){
    printf("\n");
    printf("  \t\t\t\tGGGGGGG   AAAAAA  MMM MMM   EEEEEEE    OOOOO   VV     VV  EEEEEEE  RRRRRR \t \t \n");
    printf("  \t\t\t\tG         A    A  MM M MM   E         O     O   VV   VV   E        R     R\t \t  \n");
    printf("  \t\t\t\tG   GGG   AAAAAA  MM M MM   EEEEE     O     O    VV VV    EEEEE    RRRRRR\t \t   \n");
    printf("  \t\t\t\tG     G   A    A  MM   MM   E         O     O     VVV     E        R   RR\t \t   \n");
    printf("  \t\t\t\tGGGGGGG   A    A  MM   MM   EEEEEEE    OOOOO       V      EEEEEEE  R     R\t \t  \n");
    printf("\n");

    getchar();
    getchar();

    exit (1);
}
