#include<stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#define DELAY 10000
#define MAX 100

void setColor(int textColor, int bgColor) 
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (bgColor << 4) | textColor);
}
void GAMEOVER();
void lvl_9(int *LIFE);
void printSlowly(const char *text, unsigned int delay);

void checklife(int LIFE)
{
 if (LIFE == 0) 
        {
            GAMEOVER();
        }
}
void printSlowly(const char *text, unsigned int delay) 
{
    while (*text) {
        printf("%c", *text++);
        fflush(stdout); 
        usleep(delay); 
    }
}

int main(){
    int LIFE=3;
    lvl_9(&LIFE);
    return 0;
}
void lvl_9(int *LIFE){
    setColor(3, 0);
    printf("  \t\t\t\t~ ~ LIVELLO 9 ~ ~ \n\n");
    char vero[]= "i++";
    char vero1[] = "&";
    char vero2[] = ";";
    char vero3[]= "if";
    char vero4[] = "*file";
    char vero5[]= "fclose(file)";
    char vero6[] = "for";
    char vero7[]= "i";
    char Scelta[MAX];
    printSlowly("\n\t\t\t\t\t -- DOMANDA NUMERO 1 -- \n", DELAY);
    printSlowly("\n\t\t\t\t\tscrivi cosa manca, in ordine\n", DELAY);
   //i++,&,;
   setColor(8, 0);
    printSlowly("\n\t\t\t\tvoid aggiungi(Clienti *c, int *f){\n", DELAY);
    printSlowly("\t\t\t\tif(*f<50){\n", DELAY);
    printSlowly("\t\t\t\t\t int b=0;\n", DELAY);        
    printSlowly("\t\t\t\t   do {\n", DELAY);
    printSlowly("\t\t\t\t   printf(\"scrivi quante prenotazioni vuoi aggiungere:\");\n", DELAY);
    printSlowly("\t\t\t\t   scanf(\"%d\", &b);\n", DELAY);
    printSlowly("\t\t\t\t   }while(b<=0);\n", DELAY);
    printSlowly("\t\t\t\tfor(int i=0; i<b; ___){\n", DELAY);
    printSlowly("\t\t\t\t   printf(\"scrivi il nome:\");\n", DELAY);
    printSlowly("\t\t\t\t   scanf(\"%99s\", c[*f].nome);\n", DELAY);
    printSlowly("\t\t\t\t   printf(\"scrivi il numero di persone:\");\n", DELAY);
    printSlowly("\t\t\t\t   scanf(\"%d\", _c[*f].npersone);\n", DELAY);
    printSlowly("\t\t\t\t   printf(\"scrivi il numero del tavolo:\");\n", DELAY);
    printSlowly("\t\t\t\t   scanf(\"%d\", &c[*f].tavolo)_\n", DELAY);
    printSlowly("\t\t\t\t   (*f)++;", DELAY);
    printSlowly("\n\t\t\t\t}else{\n\t\t\t\tprintf(\"ristorante pieno\");\n\t\t\t\t}\n\t\t\t\t}\n", DELAY);
    do
    {
        setColor(8, 0);
        printf("\n\t\t\t\t1:");
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
                setColor(4, 0);
               char formattedMessage[100];
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
        printf("\t\t\t\t2:");
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero1)!=0)
            {
                setColor(4, 0);
                (*LIFE)--;
                char formattedMessage[100];
                snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                printSlowly(formattedMessage, DELAY);
            }else{
                setColor(2, 0);
                printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
            }
            checklife(*LIFE);
    
    }while(strcmp(Scelta, vero1)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY

    do
    {
        setColor(8, 0);
        printf("\t\t\t\t3:");
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero2)!=0)
            {
                setColor(4, 0);
                (*LIFE)--;
                char formattedMessage[100];
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
    printSlowly("\n \t\t\t\t -- DOMANDA NUMERO 2 -- \n", DELAY);
    printSlowly("\t\t\t\t\tscrivi cosa manca, in ordine\n", DELAY);//i++,if,i,;
    setColor(8, 0);
    printSlowly("\n\t\t\t\tvoid stampa(Clienti *c, int f){\n", DELAY);
    printSlowly("\t\t\t\t   for(int i=0; i<f; ___){\n", DELAY);
    printSlowly("\t\t\t\t       printf(\"%d) nome:%s numero persone:%d numero del tavolo:%d orario:%d:%d\",\n\t\t\t\ti+1,c[i].nome, c[i].npersone, c[i].tavolo, c[i].data.ora, c[i].data.minuti);\n\t\t\t\t  }\n\t\t\t\t  }\n", DELAY);
    printSlowly("\t\t\t\t      int MAX = 0;\n", DELAY);
    printSlowly("\t\t\t\t      int j = 0;\n", DELAY);
    printSlowly("\t\t\t\t   for(int i=0; i < f; i++){\n\t\t\t\t  __(MAX < c[i].npersone){\n  \t\t\t\tMAX=c[_].npersone;\t\t\t\t\n", DELAY);
    printSlowly("\t\t\t\tvoid ricerca( Clienti *c, int f){\n \t\t\t\tj=i;\n \t\t\t\t}\n \t\t\t\t}\n \t\t\t\tprintf(\"nome:%s numero di persone:%d numero del tavolo:%d\", c[j].nome, c[j].npersone, c[j].tavolo);\n}\n", DELAY);
    do
    {
        setColor(8, 0);
        printf("\t\t\t\t1:");
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero)!=0)
            {
                setColor(4, 0);
                (*LIFE)--;
                char formattedMessage[100];
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
        printf("\t\t\t\t2:");
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero3)!=0)
            {
                setColor(4, 0);
                (*LIFE)--;
                char formattedMessage[100];
                snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                printSlowly(formattedMessage, DELAY);
            }else{
                setColor(2, 0);
                printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
            }
            checklife(*LIFE);
    
    }while(strcmp(Scelta, vero3)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY

    do
    {
        setColor(8, 0);
        printf("\t\t\t\t3:");
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero7)!=0)
            {
                setColor(4, 0);
                (*LIFE)--;
                char formattedMessage[100];
                snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                printSlowly(formattedMessage, DELAY);
            }else{
                setColor(2, 0);
                printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
            }
            checklife(*LIFE);
    }while(strcmp(Scelta, vero7)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY
    setColor(3, 0);
    printSlowly("\n  \t\t\t\t -- DOMANDA NUMERO 3 -- \n", DELAY);//a
    printSlowly("\n\t\t\t\t\tscrivi cosa manca, in ordine\n\n", DELAY);//for,*file,fclose(file),;
    setColor(8, 0);
    printSlowly("\t\t\t\t void ordinamento(Clienti *c, int f){\n\t\t\t\t for(int i=0; i<f-1; i++){\n\t\t\t\t  ___(int j=0; j<f-i-1; j++){\n\t\t\t\t   if(c[j].data.ora < c[j+1].data.ora){\n\t\t\t\t  Clienti MAX=c[j+1];\n\t\t\t\t  c[j+1]=c[j];\n\t\t\t\t  c[j]=MAX;\n\t\t\t\t   }\n\t\t\t\tif(c[j].data.ora == c[j+1].data.ora && c[j].data.minuti < c[j+1].data.minuti){\n\t\t\t\tClienti MAX=c[j+1];\n\t\t\t\tc[j+1]=c[j];\n\t\t\t\tc[j]=MAX;\n\t\t\t\t  }\n\t\t\t\t }\n\t\t\t\t }\n\t\t\t\t}\n\t\t\t\tvoid file(Clienti *c, int f){\n\t\t\t\tFILE _____=fopen(\"prenotazioni.txt\", \"w\");\n\t\t\t\tif(file==NULL){\n\t\t\t\tprintf(\"ERROR\");\n\t\t\t\t}else{\n\t\t\t\tprintf(\"file aperto con succeso\");\n\t\t\t\t}\n\t\t\t\tfprintf(file, \"numero prenotazioni %d\", f);\n\t\t\t\tfor(int i=0; i<f; i++){\n\t\t\t\tfprintf(file, \"%d) nome:%s numero persone:%d numero tavolo:%d orario:%d:%d\",\n\t\t\t\ti+1, c[i].nome, c[i].npersone, c[i].tavolo, c[i].data.ora, c[i].data.minuti);\n\t\t\t\t}\n\n\t\t\t\t_________________\n\t\t\t\tprintf(\"file salvato\");\n\t\t\t\t}\n", DELAY);
    do
    {
        setColor(8, 0);
        printf("\t\t\t\t1:");
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero6)!=0)
            {
                setColor(4, 0);
                (*LIFE)--;
                char formattedMessage[100];
                snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                printSlowly(formattedMessage, DELAY);
            }else{
                setColor(2, 0);
                printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
            }
            checklife(*LIFE);
    }while(strcmp(Scelta, vero6)!=0);

    memset(Scelta, '\0', MAX);

    do
    {
        setColor(8, 0);
        printf("\t\t\t\t2:");
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero4)!=0)
            {
                setColor(4, 0);
                (*LIFE)--;
                char formattedMessage[100];
                snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                printSlowly(formattedMessage, DELAY);
            }else{
                setColor(2, 0);
                printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
            }
            checklife(*LIFE);
    }while(strcmp(Scelta, vero4)!=0);

    memset(Scelta, '\0', MAX); //RESET ARRAY

    do
    {
        setColor(8, 0);
        printf("\t\t\t\t3:");
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero5)!=0)
            {
                setColor(4, 0);
                (*LIFE)--;
                char formattedMessage[100];
                snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                printSlowly(formattedMessage, DELAY);
            }else{
                setColor(2, 0);
                printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
            }
            checklife(*LIFE);
    }while(strcmp(Scelta, vero5)!=0);

    do
    {
        setColor(8, 0);
        printf("\t\t\t\t4:");
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
    
        while (getchar() != '\n');

        if(strcmp(Scelta, vero2)!=0)
            {
                setColor(4, 0);
                (*LIFE)--;
                char formattedMessage[100];
                snprintf(formattedMessage, sizeof(formattedMessage), "\n  \t\t\t\tRisposta sbagliata! \n  \t\t\t\tHai perso una vita! \n  \t\t\t\tAdesso hai %d vite \n\n", *LIFE);
                printSlowly(formattedMessage, DELAY);
            }else{
                setColor(2, 0);
                printSlowly("\n\t\t\t\t\tCorretto!\n\n", DELAY);
            }
            checklife(*LIFE);

    }while(strcmp(Scelta, vero2)!=0);
    memset(Scelta, '\0', MAX); //RESET ARRAY

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
    exit(1);
}
