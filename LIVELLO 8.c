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

void lvl_8(int *LIFE);
void GAMEOVER();
void checklife(int LIFE)
{
 if (LIFE == 0) 
        {
            system("cls");
            GAMEOVER(LIFE);
            return;
        }
}

int main(){
    int LIFE=3;
    lvl_8(&LIFE);
    return 0;
}

void lvl_8(int *LIFE){
    char vero[]= "i++";
    char vero1[] = ";";
    char vero2[] = "printf";
    char vero3[]= "=";
    char vero4[] = ",";
    char vero5[]= ";";
    char vero6[] = "for";
    char vero7[]= "i";
    setColor(3, 0);
    char Scelta[max];

    printSlowly("  \t\t\t\t~ ~ LIVELLO 8 ~ ~ \n\n", DELAY);
    printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 1 -- \n", DELAY);
    setColor(3, 0);
    printSlowly("\t\t\t\t\tscrivi cosa manca, in ordine\n", DELAY); //i++,printf,;
    setColor(2, 0);
    printSlowly("\t\t\t\t\tint vet[10];\n\t\t\t\t\tfor(int i=0;i<n;___){\n\t\t\t\t\t_____(\"scrivi i valori %d :\", i + 1);\n\t\t\t\t\tscanf(\"%%d\", &vet[i]);\n\t\t\t\t\tint primo = 1_\n\t\t\t\t\tfor(j=vet[i]-1; j>1; j--){\n\t\t\t\t\tif(vet[i]%%j==0){\n\t\t\t\t\tprimo = 0;\n\t\t\t\t\t}\");\n", DELAY);
    do
    {
        printSlowly("\t\t\t\t\t1:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');
        if(strcmp(Scelta, vero)!=0)
            {
                (*LIFE)--;
                char formattedMessage[100];
                setColor(4, 0);
                snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                printSlowly(formattedMessage, DELAY);
            }else{
                printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
            }
            checklife(*LIFE);

    }while(strcmp(Scelta, vero)!=0);

    memset(Scelta, '\0', max);

    do
    {
        setColor(2, 0);
        printSlowly("\t\t\t\t\t2:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero2)!=0)
        {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else{
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        }
        checklife(*LIFE);

    }while(strcmp(Scelta, vero2)!=0);

    memset(Scelta, '\0', max); //RESET ARRAY

    do
    {
        setColor(2, 0);
        printSlowly("\t\t\t\t\t3:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
        {
            Scelta[len - 1] = '\0';
        }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero1)!=0)
        {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else{
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        }
        checklife(*LIFE);
    }while(strcmp(Scelta, vero1)!=0);

    memset(Scelta, '\0', max); //RESET ARRAY

   setColor(3, 0);
   printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 2 -- \n", DELAY);
   printSlowly("\t\t\t\t\tscrivi cosa manca, in ordine\n", DELAY);//=,",",;
   setColor(2, 0);
   printSlowly("\t\t\t\t\tif(primo =_ 1){\n\t\t\t\t\tprintf(\"numero primo\"_ j);\n\t\t\t\t\t} else {\n\t\t\t\t\tprintf(\"numero non primo\", j)_\n\t\t\t\t\t}\n", DELAY);
    do
    {
        
        printSlowly("\t\t\t\t\t1:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero3)!=0)
        {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else{
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        }
        checklife(*LIFE);
    }while(strcmp(Scelta, vero3)!=0);

    memset(Scelta, '\0', max);

    do
    {
        setColor(2, 0);
        printSlowly("\t\t\t\t\t2:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero4)!=0)
        {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else{
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        }
            checklife(*LIFE);
    
    }while(strcmp(Scelta, vero4)!=0);

    memset(Scelta, '\0', max); //RESET ARRAY

    do
    {
        setColor(2, 0);
        printSlowly("\t\t\t\t\t3:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero5)!=0)
        {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else{
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        }
            checklife(*LIFE);
    
    }while(strcmp(Scelta, vero5)!=0);

    memset(Scelta, '\0', max); //RESET ARRAY

    setColor(3, 0); 
    printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 3 -- \n", DELAY);       
    printSlowly("\t\t\t\t\tscrivi cosa manca, in ordine\n", DELAY);//for,i++,",",i
    setColor(2, 0);
    printSlowly("\t\t\t\t\t___(int i = 0; i < 10; ___){\n\t\t\t\t\tprintf(\"scrivi un valore %d:\"_ i + 1);\n\t\t\t\t\tscanf(\"%d\", &sequenza[_]);\n\t\t\t\t\t}\n", DELAY);    
    do
    {
        setColor(2, 0);
        printSlowly("\t\t\t\t\t1:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero6)!=0)
        {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else{
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        }
            checklife(*LIFE);

    }while(strcmp(Scelta, vero6)!=0);

    memset(Scelta, '\0', max);

    do
    {
        setColor(2, 0);
        printSlowly("\t\t\t\t\t2:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero)!=0)
        {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else{
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        }
            checklife(*LIFE);

    }while(strcmp(Scelta, vero)!=0);

    memset(Scelta, '\0', max); //RESET ARRAY

    do
    {
        setColor(2, 0);
        printSlowly("\t\t\t\t\t3:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
        {
            Scelta[len - 1] = '\0';
        }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero4)!=0)
        {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else{
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        }
        checklife(*LIFE);

    }while(strcmp(Scelta, vero4)!=0);

    do
    {
        setColor(2, 0);
        printSlowly("\t\t\t\t\t4:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero7)!=0)
            {
            (*LIFE)--;
            char formattedMessage[100];
            setColor(4, 0);
            snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
            printSlowly(formattedMessage, DELAY);
        }else{
            printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
        }
        checklife(*LIFE);

    }while(strcmp(Scelta, vero7)!=0);

    memset(Scelta, '\0', max); //RESET ARRAY
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

}
