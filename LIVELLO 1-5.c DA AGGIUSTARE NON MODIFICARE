#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int Scelta() {
    char Scelta;
    scanf(" %c", &Scelta);
    switch(Scelta) {
        case 'a':
        case 'A':
            return 1;
        case 'b':
        case 'B':
            return 2;
        case 'c':
        case 'C':
            return 3;
        default:
            return 4;
    }
}
void GAMEOVER();
void END();
void Game(int *LIFE);
void lvl_1(int *LIFE);
void lvl_2(int *LIFE);
void lvl_3(int *LIFE);
void lvl_4(int *LIFE);
void lvl_5(int *LIFE);
void checklife(int *LIFE);

//VARIABILE CHIAMATA "LIFE"

void checklife(int *LIFE)
{
 if (*LIFE == 0) 
        {
            GAMEOVER();
            return;
        }
}

int main(){
       
    Game(&LIFE);
    
    return 0;
}

void Game(int *LIFE)
{
    lvl_1(int *LIFE);
    lvl_2(int *LIFE);
    lvl_3(int *LIFE);
    lvl_4(int *LIFE);
    lvl_5(int *LIFE);
}

void lvl_1(int *LIFE)
{
    int LIFE = 3;
    printf("~ ~ LIVELLO 1 ~ ~\n");
    int risposta;
    do
    {
        printf("\n -- DOMANDA NUMERO 1 -- \n\n A cosa serve il printf?");//a
        printf("\n A) Stampa il testo su schermo\n B) Legge un numero intero inserito dall'utente \n C) E' un costrutto che permette di eseguire determinate istruzioni solo se una condizione specificata e' vera\n");
        risposta = Scelta();
        if(risposta != 1)
        {
            (*LIFE)--;
            printf("\nRisposta sbagliata! \n Hai perso una vita! \n Adesso hai %d vite \n\n", *LIFE);
        }else
        {
        printf("\nCorretto!\n\n");
        }

    checklife(*LIFE);
    }while (risposta != 1);

    do
    {
    printf(" -- DOMANDA NUMERO 2 -- \n\n A cosa serve il scanf?"); //c
    printf("\n A) E' un costrutto che permette di iterare un valore\n B) Aggiungi uno spazio prima di inserire l'input\n C) Legge un input inserito dall'utente\n");
    
    risposta = Scelta();

    if(risposta != 3)
    {
        (*LIFE)--;
        printf("\nRisposta sbagliata! \n Hai perso una vita! \n Adesso hai %d vite \n\n", *LIFE);
    }else
    {
        printf("\nCorretto!\n\n");
    } 
    
    if (*LIFE == 0) 
        {
            GAMEOVER();
            return;
        }
    } while(risposta != 3);

    do
    {
    printf("--DOMANDA NUMERO 3 --\n\n Che cosa e' l'if?");//a
    printf("\n A) E' un costrutto che permette di eseguire determinate istruzioni solo se una condizione specificata e' vera\n B) E' un costrutto che permette di eseguire un altro blocco di istruzioni\n C) E' un costrutto che permete di verificare ulteriori condizioni\n");
    
    risposta = Scelta();

    if(risposta != 1)
        {
        (*LIFE)--;
        printf("\nRisposta sbagliata! \n Hai perso una vita! \n Adesso hai %d vite \n\n", *LIFE);
        } else
    {
        printf("\nCorretto!\n\n");
    } 

    if (*LIFE == 0) 
        {
            GAMEOVER();
            return;
        }
    }while(risposta!=1);

}
void lvl_2(int *LIFE)
{
    printf("~ ~ LIVELLO 2 ~ ~ \n\n");
        int risposta;
    do{
        printf("--DOMANDA NUMERO 1--\n\n A cosa serve il for?");//b
        printf("\n A) E' un costrutto che permette di eseguire determinate istruzioni solo se una condizione specificata e' vera\n B) E' utilizzato per eseguire un blocco di istruzioni un numero fissato di volte\n C) Garantisce l'esecuzione del blocco di istruzioni almeno una volta prima di controllare la condizione.\n");
        risposta = Scelta();
        if(risposta != 2)
          {
        (*LIFE)--;
        printf("\nRisposta sbagliata! \n Hai perso una vita! \n Adesso hai %d vite \n\n", *LIFE);
    } else
    {
        printf("\nCorretto!\n\n");
    } 
        if (*LIFE == 0) {
            GAMEOVER();
            return;
            }
    }while (risposta != 2);

    do
    {
    printf("--DOMANDA NUMERO 2--\n\n A cosa serve il while?");//b
    printf("\nA) E' un costrutto che permette di eseguire determinate istruzioni solo se una condizione specificata e' vera\nB) E' utilizzato per eseguire un blocco di istruzioni finche' una condizione specificata e' vera.\nC) E' un costrutto che permette di verificare ulteriori condizioni\n");
    risposta = Scelta();
    if(risposta != 2)
    {
        (*LIFE)--;
        printf("\nRisposta sbagliata! \n Hai perso una vita! \n Adesso hai %d vite \n\n", *LIFE);
    } else
    {
        printf("\nCorretto!\n\n");
    } 
    (*LIFE)--;
    if (*LIFE == 0) {
            GAMEOVER();
            return;}
    }while(risposta != 2);
    do{
    printf("--DOMANDA NUMERO 3--\n\n A cosa serve il do while?");//c
    printf("\nA) E' utilizzato per eseguire un blocco di istruzioni un numero fissato di volte\nB)E' un costrutto che permette di eseguire un altro blocco di istruzioni\nC) Garantisce l'esecuzione del blocco di istruzioni almeno una volta prima di controllare la condizione.\n");
    risposta = Scelta();
    if(risposta != 3)
    {
        (*LIFE)--;
        printf("\nRisposta sbagliata! \n Hai perso una vita! \n Adesso hai %d vite \n\n", *LIFE);
    } else
    {
        printf("\nCorretto!\n\n");
    } 
    (*LIFE)--;
    if (*LIFE == 0) {
            GAMEOVER();
            return;
            }
    }while(risposta != 3);    
}
void lvl_3(int *LIFE)
{
    printf("~ ~ LIVELLO 3 ~ ~\n\n");
    int risposta;
    
    do
    {
        printf("cosa manca?\n\n for(i = 0; i < 15; i++){\nprintf(\" scrivi un numero %%d:\", i + 1);\nscanf(\"%%d\", &serie[i]);\n}\n(i = 0; i < 15; i++){\nsomma += serie[i];\n}\n ");
        printf("\na)scanf\nb)printf\nc)for\n");//c
        risposta = Scelta();
        if(risposta != 3)
        (*LIFE)--;
        if (*LIFE == 0) {
            GAMEOVER();
            return;
            }
    }while (risposta != 3);

    do
    {
    printf("cosa manca?\nchar a;\nprintf(\"codice ascii di una letere\");\nprintf(\"scrivi un caratere:\");\nscanf(\"%%c\", a);\nprintf(\"ecco il valore in ascii: %%d\", a);");
    printf("\na);\nb),\nc)&\n");
    risposta = Scelta();
    if(risposta != 3)
    (*LIFE)--;
    if (*LIFE == 0) {
            GAMEOVER();
            return;}
    }while(risposta != 3);
    do
    {
    printf("cosa manca?\ndo {\nprintf(\"Inserisci il valore %%d: \", indice + 1);\nscanf(\"%%d\", array[indice]);\nindice++;\n}while (indice < 10 && array[indice - 1] != -1);");
    printf("\na);\nb),\nc)&\n");//c
    risposta= Scelta();
    if(risposta != 3)
    (*LIFE)--;
    if (*LIFE == 0) {
            GAMEOVER();
            return;
            }
    }while(risposta != 3);

    
}
void lvl_4(int *LIFE)
{
    printf("~ ~ LIVELLO 4 ~ ~")
    int risposta;
    do
    {
        printf("cosa manca?\nfor(i = 0; i < 15; i++){\nprintf(\" scrivi un numero %%d:\", i + 1);\nscanf(\"%%d\", &serie[i]);\n}\n(i = 0; i < 15; i++){\nsomma += serie[i];\n}");
        printf("\na)scanf\nb)printf\nc)for\n");//c
        risposta = Scelta();
        if(risposta != 3)
        (*LIFE)--;
        if (*LIFE == 0) {
            GAMEOVER();
            return;
            }
    }while (risposta != 3);

    do
    {
    printf("cosa manca?\nint palindromo(char parola[]){\nint l = strlen(parola);\nfor(int i=0; i</2; i++){\nif(parola[i]!=parola[l-1-i]){\nreturn 0;\n}}\nreturn 1;\n}");
    printf("\nfor);\nb)l\nc)i++\n");//b
    risposta= Scelta();
    if(risposta != 2)
    (*LIFE)--;
    if (*LIFE == 0) {
            GAMEOVER();
            return;}
    }while(risposta != 2);
    do
    {
    printf("cosa manca?\nint filtro(char a){\nif((a>=A && a<=Z)){\nprintf(\"e' una letera maiuscola \");\nreturn 1;\n}else if((a>=a && a<=z))\n{\nprintf(\"e' una letera minuscola \");\nreturn 0;\n}else{\nprintf(\"non e' una letera\");\nreturn -1;\n}\n}");
    printf("\na)''\nb))\nc);\n");//a
    risposta= Scelta();
    if(risposta != 1)
    (*LIFE)--;
    if (*LIFE == 0) {
            GAMEOVER();
            return;
            }
    }while(risposta!=1);   
}

void lvl_5(int *LIFE)
{
    printf("~ ~ LIVELLO 5 ~ ~");
    int risposta;
    do{
        printf("cosa manca?\n#include<stdio.h>\ntypedef struct{ \nchar via[30];\nchar citta[30];\nint CAP[100];\n}Indirizo;\ntypedef struct {\nchar nome[30];\nchar cognome[30];\nint eta;\nIndirizo indirizoresidente;\n}Persona;\nint main(){\nPersona persona1;\n\nprintf(\"scrivi il nome\");\nscanf(\"%%s\", persona1nome);\nprintf(\"scrivi il cognome\");\nscanf(\"%%s\", persona1cognome);\nprintf(\"scrivi eta\");\nscanf(\"%%d\", &persona1eta);\nprintf(\"scrivi la residenza (via, cita, CAP)\");\nscanf(\"%%s %%s %%d\", persona1.indirizoresidente.via, persona1.indirizoresidente.citta, &persona1.indirizoresidente.CAP);\ngetchar();\n}");
    printf("\na)return 0;\nb).\nc);\n");//b
        risposta = Scelta();
        if(risposta != 2)
        (*LIFE)--;
        if (*LIFE == 0) {
            GAMEOVER();
            return;
            }
    }while (risposta != 2);

    do{
    printf("cosa manca?\n#include<stdio.h>\n\nint main(){\nint n1=0;\nint n2=0;\nint n3=0;\nprintf(\"scrivi un valore =\", n1);\nscanf(\"%%d\", &n1);\nprintf(\"scrivi un valore =\", n2);\nscanf(\"%%d\", &n2);\nn3 = somma(n1,n2);\nprintf(\"risultato=%%d\", n3);\nreturn 0;\n}\nint somma(int a, int b){\nint tottale=0;\ntottale = a + b;\nreturn tottale;\n}\n");
    printf("\na)int somma(int a, int b);\nb)somma(n1,n2)\nc)getchar();\n");//a
    risposta = Scelta();
    if(risposta != 1)
    (*LIFE)--;
    if (*LIFE == 0) {
            GAMEOVER();
            return;}
    }while(risposta != 1);
    do
    {
    printf("cosa manca?\n#include<stdio.h>\n#include<string.h>\nint main (){\nint a = 5;\nchar b = 'c';\nint *p1;\nchar *p2;\np1 = &a;\np2 = &b;\nprintf(\"indirizo di due variabili %%p, %%p\", p1,p2);\nprintf(\"il valore delle celle di memoria %%d, %%c\", p1, p2);\n*p1 = 18;\n*p2 = 'a';\nprintf(\"indirizo di due variabili %%p, %%p\", p1, p2);\nprintf(\"il valore delle celle di memoria %%d, %%c\", *p1, *p2);\nreturn 0;\n}");
    printf("\na)%%d\nb)%%p\nc)*\n");//c
    risposta = Scelta();
    if(risposta != 3)
    (*LIFE)--;
    if (*LIFE == 0) {
            GAMEOVER();
            return;
            }
    }while(risposta != 3);
    END();
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
void END(){
    printf("  \t\t\t\t\t\t\tEEEEEEE   NN     NN   DDDDDD\t\t\t   \n");
    printf("  \t\t\t\t\t\t\tE         NNN    NN   D     DD\t\t\t \n");
    printf("  \t\t\t\t\t\t\tEEEEE     NNNN   NN   D      DD\t\t\t\n");
    printf("  \t\t\t\t\t\t\tE         NN NN  NN   D     DD\t\t\t \n");
    printf("  \t\t\t\t\t\t\tEEEEEEE   NN  NN NN   DDDDDD\t\t\t   \n");

    exit(1);
}
