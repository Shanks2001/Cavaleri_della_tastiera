#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 100;

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
void GAMEOVER(int LIFE);
void END(int LIFE);
void ripeti(int LIFE);
void lvl_1(int *LIFE);
void lvl_2(int *LIFE);
void lvl_3(int *LIFE);
void lvl_4(int *LIFE);
void lvl_5(int *LIFE);
void checklife(int LIFE);

//VARIABILE CHIAMATA "LIFE"

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
    lvl_1(&LIFE);
    
    return 0;
}


void lvl_1(int *LIFE){
     system("cls");
    int risposta;
    printf("~ ~ LIVELLO 1 ~ ~ \n\n");
    do
    {
        printf("\n -- DOMANDA NUMERO 1 -- \n");//a

        printf("A cosa serve il printf?\n");
        printf("A) Stampa il testo su schermo\n");
        printf("B) Legge un numero intero inserito dall'utente\n");
        printf("C) E' un costrutto che permette di eseguire determinate istruzioni solo se una condizione specificata e' vera\n");
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
        printf(" -- DOMANDA NUMERO 2 -- \n"); //c

        printf("A cosa serve il scanf?\n");
        printf("A) E' un costrutto che permette di iterare un valore\n");
        printf("B) Aggiungi uno spazio prima di inserire l'input\n");
        printf("C) Legge un input inserito dall'utente\n");
        risposta = Scelta();

        if(risposta != 3)
        {
            (*LIFE)--;
            printf("\nRisposta sbagliata! \n Hai perso una vita! \n Adesso hai %d vite \n\n", *LIFE);
        }else
        {
            printf("\nCorretto!\n\n");
        } 
    
        checklife(*LIFE);
   
    } while(risposta != 3);

    do
    {
        printf("--DOMANDA NUMERO 3 --\n");//a

        printf("Che cosa e' l'if?");
        printf("\n A) E' un costrutto che permette di eseguire determinate istruzioni solo se una condizione specificata e' vera\n");
        printf("B) E' un costrutto che permette di eseguire un altro blocco di istruzioni\n");
        printf("C) E' un costrutto che permete di verificare ulteriori condizioni\n");
        risposta = Scelta();

        if(risposta != 1)
        {
            (*LIFE)--;
            printf("\nRisposta sbagliata! \n Hai perso una vita! \n Adesso hai %d vite \n\n", *LIFE);
        } else
        {
            printf("\nCorretto!\n\n");
        } 

        checklife(*LIFE);
   
    }while(risposta!=1);

    system("cls");
    lvl_2(LIFE);
}
void lvl_2(int *LIFE){
        printf("~ ~ LIVELLO 2 ~ ~ \n\n");
        int risposta;
    do{
        printf("--DOMANDA NUMERO 1--\n ");//b
        printf("A cosa serve il for?\n");
        printf("A) E' un costrutto che permette di eseguire determinate istruzioni solo se una condizione specificata e' vera\n");
        printf("B) E' utilizzato per eseguire un blocco di istruzioni un numero fissato di volte\n");
        printf("C) Garantisce l'esecuzione del blocco di istruzioni almeno una volta prima di controllare la condizione.\n");
        risposta = Scelta();
        if(risposta != 2)
          {
            (*LIFE)--;
            printf("\nRisposta sbagliata! \n Hai perso una vita! \n Adesso hai %d vite \n\n", *LIFE);
        } else
        {
            printf("\nCorretto!\n\n");
        } 
        checklife(*LIFE);
        
    }while (risposta != 2);

    do
    {
        printf("--DOMANDA NUMERO 2--\n");//b
        printf("A cosa serve il while?");
        printf("\nA) E' un costrutto che permette di eseguire determinate istruzioni solo se una condizione specificata e' vera\n");
        printf("B) E' utilizzato per eseguire un blocco di istruzioni finche' una condizione specificata e' vera.\n");
        printf("C) E' un costrutto che permette di verificare ulteriori condizioni\n");
        risposta = Scelta();
        if(risposta != 2)
        {
            (*LIFE)--;
            printf("\nRisposta sbagliata! \n Hai perso una vita! \n Adesso hai %d vite \n\n", *LIFE);
        } else
        {
            printf("\nCorretto!\n\n");
        } 
        checklife(*LIFE);
    
    }while(risposta != 2);

    do{
        printf("--DOMANDA NUMERO 3--\n ");//c
        printf("A cosa serve il do while?\n");
        printf("A) E' utilizzato per eseguire un blocco di istruzioni un numero fissato di volte\n");
        printf("B)E' un costrutto che permette di eseguire un altro blocco di istruzioni\n");
        printf("C) Garantisce l'esecuzione del blocco di istruzioni almeno una volta prima di controllare la condizione.\n");
        risposta = Scelta();
        if(risposta != 3)
        {
            (*LIFE)--;
            printf("\nRisposta sbagliata! \n Hai perso una vita! \n Adesso hai %d vite \n\n", *LIFE);
        } else
        {
            printf("\nCorretto!\n\n");
        } 
        checklife(*LIFE);
    
    }while(risposta != 3);

    system("cls");

    lvl_3(LIFE);
    
}
void lvl_3(int *LIFE){
        int risposta;
        printf("~ ~ LIVELLO 3 ~ ~\n\n");
    do
    {
        printf("cosa manca?\n");
        printf("for(i = 0; i < 15; i++){\n");
        printf("   printf(\" scrivi un numero %%d:\", i + 1);\n");
        printf("   scanf(\"%%d\", &serie[i]);\n");
        printf("}\n");
        printf("   (i = 0; i < 15; i++){\n");
        printf("   somma += serie[i];\n");
        printf("}\n");
        printf("A)scanf\n");//c
        printf("B)printf\n");
        printf("C)for\n");
        risposta = Scelta();
        if(risposta != 3){
            (*LIFE)--;
            printf("\nRisposta sbagliata! \n Hai perso una vita! \n Adesso hai %d vite \n\n", *LIFE);
        }else
        {
        printf("\nCorretto!\n\n");
        }
    
        checklife(*LIFE);
        
    }while (risposta != 3);

    do
    {
        printf("cosa manca?\n");
        printf("char a;\n");
        printf("printf(\"codice ascii di una letere\");\n");
        printf("printf(\"scrivi un caratere:\");\n");
        printf("scanf(\"%%c\", a);\n");
        printf("printf(\"ecco il valore in ascii: %%d\", a);\n");
        printf("A);\n");
        printf("B),\n");
        printf("C)&\n");//c
        risposta = Scelta();
        if(risposta != 3){
            (*LIFE--);
            printf("\nRisposta sbagliata! \n Hai perso una vita! \n Adesso hai %d vite \n\n", *LIFE);
        }else
        {
        printf("\nCorretto!\n\n");
        }
        checklife(*LIFE);
    
    }while(risposta != 3);
    do
    {
        printf("cosa manca?\n");
        printf("do {\n");
        printf("    printf(\"Inserisci il valore %%d: \", indice + 1);\n");
        printf("    scanf(\"%%d\", array[indice]);\n");
        printf("    indice++;\n");
        printf("}while (indice < 10 && array[indice - 1] != -1);\n");
        printf("A);\n");
        printf("B),\n");
        printf("C)&\n");//c
        risposta= Scelta();
        if(risposta != 3){
            (*LIFE)--;
            printf("\nRisposta sbagliata! \n Hai perso una vita! \n Adesso hai %d vite \n\n", *LIFE);
        }else
        {
        printf("\nCorretto!\n\n");
        }
    
        checklife(*LIFE);
   
    }while(risposta != 3);

    system("cls");

    lvl_4(LIFE);
}
void lvl_4(int *LIFE){
        printf("~ ~ LIVELLO 4 ~ ~ \n\n");
        int risposta;
    do
    {
        printf("cosa manca?\n");
        printf("for(i = 0; i < 15; i++){\n");
        printf("    printf(\" scrivi un numero %%d:\", i + 1);\n");
        printf("    scanf(\"%%d\", &serie[i]);\n");
        printf("}\n");
        printf("(i = 0; i < 15; i++){\n");
        printf("    somma += serie[i];\n");
        printf("}\n");
        printf("A)scanf\n");//c
        printf("B)printf\n");
        printf("C)for\n");
        risposta = Scelta();
        if(risposta != 3){
            (*LIFE)--;
            printf("\nRisposta sbagliata! \n Hai perso una vita! \n Adesso hai %d vite \n\n", *LIFE);
            }else
            {
                printf("\nCorretto!\n\n");
            }
        checklife(*LIFE);
        
    }while (risposta != 3);

    do
    {
        printf("cosa manca?\n");
        printf("int palindromo(char parola[]){\n");
        printf("    int l = strlen(parola);\n");
        printf("    for(int i=0; i</2; i++){\n");
        printf("        if(parola[i]!=parola[l-1-i]){\n");
        printf("           return 0;\n");
        printf("         }\n");
        printf("     }\n");
        printf("     return 1;\n}");
        printf("A);\n");//b
        printf("B)l\n");
        printf("C)i++\n");
        risposta= Scelta();
        if(risposta != 2){
            (*LIFE)--;
            printf("\nRisposta sbagliata! \n Hai perso una vita! \n Adesso hai %d vite \n\n", *LIFE);
            }else
            {
                printf("\nCorretto!\n\n");
            }
        checklife(*LIFE);
    
    }while(risposta != 2);
    do
    {
        printf("cosa manca?");
        printf("int filtro(char a){\n");
        printf("if((a>=A && a<=Z)){\n");
        printf("   printf(\"e' una letera maiuscola \");\n");
        printf("   return 1;\n");
        printf("   }else if((a>=a && a<=z)){\n");
        printf("    printf(\"e' una letera minuscola \");\n");
        printf("    return 0;\n");
        printf("    }else{\n");
        printf("    printf(\"non e' una letera\");\n");
        printf("    return -1;\n");
        printf("    }\n");
        printf("    }\n");
        printf("A)''\n");//a
        printf("B))\n");
        printf("C);\n");
        risposta= Scelta();
        if(risposta != 1){
            (*LIFE)--;
            printf("\nRisposta sbagliata! \n Hai perso una vita! \n Adesso hai %d vite \n\n", *LIFE);
            }else
            {
                printf("\nCorretto!\n\n");
            }

        checklife(*LIFE);
    
    }while(risposta!=1);

    printf("livelLO 5\n");
    
    system("cls");

    lvl_5(LIFE);
    
}
void lvl_5(int *LIFE){
     printf("~ ~ LIVELLO 5 ~ ~ \n\n");
      int risposta;
    do
    {
        printf("cosa manca?\n}");
        printf("#include<stdio.h>\n");
        printf("typedef struct{ \n");
        printf("   char via[30];\n");
        printf("   char citta[30];\n");
        printf("   int CAP[100];\n");
        printf("}Indirizo;\n");
        printf("typedef struct {\n");
        printf("   char nome[30];\n");
        printf("   char cognome[30];\n");
        printf("   int eta;\n");
        printf("   Indirizo indirizoresidente;\n");
        printf("}Persona;\n");
        printf("int main(){\n");
        printf("Persona persona1;\n");
        printf("printf(\"scrivi il nome\");\n");
        printf("scanf(\"%%s\", persona1nome);\n");
        printf("printf(\"scrivi il cognome\");\n");
        printf("scanf(\"%%s\", persona1cognome);\n");
        printf("printf(\"scrivi eta\");\n");
        printf("scanf(\"%%d\", &persona1eta);\n");
        printf("printf(\"scrivi la residenza (via, cita, CAP)\");\n");
        printf("scanf(\"%%s %%s %%d\", persona1.indirizoresidente.via, persona1.indirizoresidente.citta, &persona1.indirizoresidente.CAP);\n");
        printf("getchar();\n");
        printf("}\n");
        printf("A)return 0;\n");//b
        printf("B).\n");
        printf("C);\n");
        risposta = Scelta();
        if(risposta != 2){
            (*LIFE)--;
            printf("\nRisposta sbagliata! \n Hai perso una vita! \n Adesso hai %d vite \n\n", *LIFE);
            }else
            {
                printf("\nCorretto!\n\n");
            }
        
        checklife(*LIFE);
        
    }while (risposta != 2);

    do
    {
        printf("cosa manca?\n");
        printf("#include<stdio.h>\n\n");
        printf("int main(){\n");
        printf("int n1=0;\n");
        printf("int n2=0;\n");
        printf("int n3=0;\n");
        printf("printf(\"scrivi un valore =\", n1);\n");
        printf("scanf(\"%%d\", &n1);\n");
        printf("printf(\"scrivi un valore =\", n2);\n");
        printf("scanf(\"%%d\", &n2);\n");
        printf("n3 = somma(n1,n2);\n");
        printf("printf(\"risultato=%%d\", n3);\n");
        printf("return 0;\n");
        printf("}\n");
        printf("int somma(int a, int b){\n");
        printf("int tottale=0;\n");
        printf("tottale = a + b;\n");
        printf("return tottale;\n");
        printf("}\n");

        printf("A)int somma(int a, int b);\n");//a
        printf("B)somma(n1,n2)\n");
        printf("C)getchar();\n");
        risposta = Scelta();
        if(risposta != 1){
            (*LIFE)--;
            printf("\nRisposta sbagliata! \n Hai perso una vita! \n Adesso hai %d vite \n\n", *LIFE);
            }else
            {
                printf("\nCorretto!\n\n");
            }
    
        checklife(*LIFE);
    
    }while(risposta != 1);
    
    do
    {
        printf("cosa manca?\n");
        printf("#include<stdio.h>\n");
        printf("#include<string.h>\n");
        printf("int main (){\n");
        printf(" int a = 5;\n");
        printf(" char b = 'c';\n");
        printf(" int *p1;\n");
        printf(" char *p2;\n");
        printf(" p1 = &a;\n");
        printf(" p2 = &b;\n");
        printf(" printf(\"indirizo di due variabili %%p, %%p\", p1,p2);\n");
        printf(" printf(\"il valore delle celle di memoria %%d, %%c\", p1, p2);\n");
        printf(" *p1 = 18;\n");
        printf(" *p2 = 'a';\n");
        printf(" printf(\"indirizo di due variabili %%p, %%p\", p1, p2);\n");
        printf(" printf(\"il valore delle celle di memoria %%d, %%c\", *p1, *p2);\n");
        printf(" return 0;\n");
        printf("}\n"); 

        printf("A)%%d\n");//c
        printf("B)%%p\n");
        printf("C)*\n");
        risposta = Scelta();
        if(risposta != 3){
            (*LIFE)--;
            printf("\nRisposta sbagliata! \n Hai perso una vita! \n Adesso hai %d vite \n\n", *LIFE);
            }else
            {
                printf("\nCorretto!\n\n");
            }
    
        checklife(*LIFE);
    
    }while(risposta != 3);

    system("cls");

    END(LIFE);
}
void GAMEOVER(int LIFE){
    printf("\n");
    printf("  \t\t\t\tGGGGGGG   AAAAAA  MMM MMM   EEEEEEE    OOOOO   VV     VV  EEEEEEE  RRRRRR \t \t \n");
    printf("  \t\t\t\tG         A    A  MM M MM   E         O     O   VV   VV   E        R     R\t \t  \n");
    printf("  \t\t\t\tG   GGG   AAAAAA  MM M MM   EEEEE     O     O    VV VV    EEEEE    RRRRRR\t \t   \n");
    printf("  \t\t\t\tG     G   A    A  MM   MM   E         O     O     VVV     E        R   RR\t \t   \n");
    printf("  \t\t\t\tGGGGGGG   A    A  MM   MM   EEEEEEE    OOOOO       V      EEEEEEE  R     R\t \t  \n");
    printf("\n");
    ripeti(LIFE);
}
void END(int LIFE){
    printf("  \t\t\t\t\t\t\tEEEEEEE   NN     NN   DDDDDD\t\t\t   \n");
    printf("  \t\t\t\t\t\t\tE         NNN    NN   D     DD\t\t\t \n");
    printf("  \t\t\t\t\t\t\tEEEEE     NNNN   NN   D      DD\t\t\t\n");
    printf("  \t\t\t\t\t\t\tE         NN NN  NN   D     DD\t\t\t \n");
    printf("  \t\t\t\t\t\t\tEEEEEEE   NN  NN NN   DDDDDD\t\t\t   \n");
    ripeti(LIFE);
}
void ripeti(int LIFE){
    char scelta;
    
    while (1) {
        printf("Vuoi riprovare? (y/n): ");
        scanf(" %c", &scelta);
        switch (scelta) {
            case 'y':
            case 'Y':
                LIFE=3;
                printf("%d", LIFE);
                lvl_1(&LIFE);
                break; 
            case 'n':
            case 'N':
                exit(0);
            default:
                printf("Scelta non valida. Riprova.\n");
                break;
        }        
    }
}
