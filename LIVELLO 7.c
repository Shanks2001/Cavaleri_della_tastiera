#include<stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

#define DELAY 10000
#define MAX 100

void lvl_7(int *LIFE);
void GAMEOVER(int LIFE);
void END(int LIFE);
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

void checklife(int LIFE)
{
 if (LIFE == 0) 
        {
            GAMEOVER(LIFE);
            return;
        }
}

int main(){
    
    int LIFE=3;
    lvl_7(&LIFE);
    return 0;
}

void lvl_7( int *LIFE)
{
    setColor(3, 0);
     printSlowly("  \t\t\t\t~ ~ LIVELLO 7 ~ ~ \n\n", DELAY);
    char Scelta[MAX];
    char vero[] = "for";
    char vero2[]= "i";
    char vero3[] = "while";
    char vero1[]= "+";
    char vero4[] = "somma";
    char vero5[]= "&";
    char vero6[] = "scanf";
    printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 1 -- \n", DELAY);
    printSlowly("\t\t\t\t\tscrivi cosa manca, in ordine\n", DELAY);
    setColor(8, 0);
    printSlowly("\t\t\t\t\tint n=0;\n\t\t\t\t\t ___(int i = 0; i <= 10; i++){\n\t\t\t\t\tprintf(\"%d\", _);\n\t\t\t\t\t}\n", DELAY);//for,i
        do
        {
            setColor(8, 0);
            printSlowly("\t\t\t\t\t1:", DELAY);
            scanf("%s", Scelta);
         int len = strlen(Scelta);

             if (Scelta[len - 1] == '\n')
                {
                    Scelta[len - 1] = '\0';
                }
                while(getchar() != '\n');

             if(strcmp(Scelta, vero)!=0)
                {
                    (*LIFE)--;
                    char formattedMessage[100];
                    setColor(4, 0);
                    snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                    printSlowly(formattedMessage, DELAY);
                }else{
                    setColor(2, 0);
                    printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
                }
            checklife(*LIFE);

        }while(strcmp(Scelta, vero)!=0);

    memset(Scelta, '\0', MAX);

    do
    {
        setColor(8, 0);
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
                setColor(2, 0);
                printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
            }
            checklife(*LIFE);
    
    }while(strcmp(Scelta, vero2)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY

    setColor(3, 0);
    printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 2 -- \n", DELAY);
    printSlowly("\t\t\t\t\tscrivi cosa manca, in ordine\n", DELAY);
    setColor(8, 0);
    printSlowly("\t\t\t\t\t_____(numero <= 10){\n\t\t\t\t\tprintf(\"%d\", numero);\n\t\t\t\t\tnumero+_;\n\t\t\t\t\t}\n", DELAY);//while,+

    do
    {
        setColor(8, 0);
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
                setColor(2, 0);
                printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
            }
            checklife(*LIFE);

    }while(strcmp(Scelta, vero3)!=0);

    memset(Scelta, '\0', MAX);

    do
    {
        setColor(8, 0);
        printSlowly("\t\t\t\t\t2:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while(getchar() != '\n');

        if(strcmp(Scelta, vero1)!=0)
            {
                (*LIFE)--;
                char formattedMessage[100];
                setColor(4, 0);
                snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                printSlowly(formattedMessage, DELAY);
            }else{
                setColor(2, 0);
                printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
            }
            checklife(*LIFE);
    
    }while(strcmp(Scelta, vero1)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY

    setColor(3, 0);
    printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 3 -- \n", DELAY);
    printSlowly("\t\t\t\t\tscrivi cosa manca, in ordine\n", DELAY);//somma,&,scanf,;
    setColor(8, 0);
    printSlowly("\t\t\t\t\tint a, b, _____;\n\t\t\t\t\tsomma= a+b;\n\t\t\t\t\tprintf(\"a =\");\n\t\t\t\t\tscanf(\"%d\", _a);\n\t\t\t\t\tprintf(\"b =\");\n\t\t\t\t\t____(\"%d\", &b);\n\t\t\t\t\tprintf( \"somma = %d\" , somma);\n", DELAY);
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
    
        while(getchar() != '\n');

        if(strcmp(Scelta, vero4)!=0)
            {
                (*LIFE)--;
                char formattedMessage[100];
                setColor(4, 0);
                snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                printSlowly(formattedMessage, DELAY);
            }else{
                setColor(2, 0);
                printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
            }
            checklife(*LIFE);

    }while(strcmp(Scelta, vero4)!=0);

    memset(Scelta, '\0', MAX);

    do
    {
        setColor(8, 0);
        printSlowly("\t\t\t\t\t2:", DELAY);
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while(getchar() != '\n');

        if(strcmp(Scelta, vero5)!=0)
            {
                    (*LIFE)--;
                    char formattedMessage[100];
                    setColor(4, 0);
                    snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                    printSlowly(formattedMessage, DELAY);
                }else{
                    setColor(2, 0);
                    printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
                }
            checklife(*LIFE);
    
    }while(strcmp(Scelta, vero5)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY

    do
    {
        setColor(8, 0);
        printSlowly("\t\t\t\t\t3:", DELAY);
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
                    setColor(2, 0);
                    printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
                }
            checklife(*LIFE);
    
    }while(strcmp(Scelta, vero6)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY

    system("cls");
    END(*LIFE);
}
void END(int LIFE){
    printf("  \t\t\t\t\t\t\tEEEEEEE   NN     NN   DDDDDD\t\t\t   \n");
    printf("  \t\t\t\t\t\t\tE         NNN    NN   D     DD\t\t\t \n");
    printf("  \t\t\t\t\t\t\tEEEEE     NNNN   NN   D      DD\t\t\t\n");
    printf("  \t\t\t\t\t\t\tE         NN NN  NN   D     DD\t\t\t \n");
    printf("  \t\t\t\t\t\t\tEEEEEEE   NN  NN NN   DDDDDD\t\t\t   \n");
}
void GAMEOVER(int LIFE){
    printf("\n");
    printf("  \t\t\t\tGGGGGGG   AAAAAA  MMM MMM   EEEEEEE    OOOOO   VV     VV  EEEEEEE  RRRRRR \t \t \n");
    printf("  \t\t\t\tG         A    A  MM M MM   E         O     O   VV   VV   E        R     R\t \t  \n");
    printf("  \t\t\t\tG   GGG   AAAAAA  MM M MM   EEEEE     O     O    VV VV    EEEEE    RRRRRR\t \t   \n");
    printf("  \t\t\t\tG     G   A    A  MM   MM   E         O     O     VVV     E        R   RR\t \t   \n");
    printf("  \t\t\t\tGGGGGGG   A    A  MM   MM   EEEEEEE    OOOOO       V      EEEEEEE  R     R\t \t  \n");
    printf("\n");
}
