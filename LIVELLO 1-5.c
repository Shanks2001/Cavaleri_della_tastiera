#include <stdio.h>
int scelta() {
    char scelta;
    scanf(" %c", &scelta);
    switch(scelta) {
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
void livelo_1(int *live);
void livelo_2(int *live);
void livelo_3(int *live);
void livelo_4(int *live);
void livelo_5(int *live);
int main(){
    int live=3;
    livelo_1(&live);
    
    return 0;
}
void livelo_1(int *live){
    int scelt;
    do{
       printf("a cosa serve il printf?");//a
    printf("\na) stampa il testo su scermo\nb) legge un numero intero inserito dall'utente\nc)costrutto che permete di eseguire determinate istruzioni solo se una condizione specificata e' vera\n");
    scelt= scelta();
    if(scelt!=1)
    (*live)--;
    if (*live == 0) {
            GAMEOVER();
            return;
            }
    }while (scelt!=1);
    do{
    printf("a cosa serve il scanf?");//c
    printf("\na)costrutto che permete di iterare un valore\nb)aggiungi uno spazio prima di inserire l'input\nc)legge un input inserito dall'utente\n");
    scelt= scelta();
    if(scelt!=3)
    (*live)--;
    if (*live == 0) {
            GAMEOVER();
            return;}
    }while(scelt!=3);
    do{
    printf("a cosa serve il if?");//a
    printf("\na)costrutto che permete di eseguire determinate istruzioni solo se una condizione specificata e' vera\nb)costrutto che permete di eseguire un altro blocco di istruzioni\nc)costrutto che permete di verificare ulteriori condizioni\n");
    scelt= scelta();
    if(scelt!=1)
    (*live)--;
    if (*live == 0) {
            GAMEOVER();
            return;
            }
    }while(scelt!=1);

    printf("LIVELLO 2\n");
    livelo_2(live);
    
}
void livelo_2(int *live){
        int scelt;
    do{
        printf("a cosa serve il for?");//b
        printf("\na)costrutto che permete di eseguire determinate istruzioni solo se una condizione specificata e' vera\nb)utilizzato per eseguire un blocco di istruzioni un numero fissato di volte\nc)garantisce l'esecuzione del blocco di istruzioni almeno una volta prima di controllare la condizione.\n");
        scelt= scelta();
        if(scelt!=2)
        (*live)--;
        if (*live == 0) {
            GAMEOVER();
            return;
            }
    }while (scelt!=2);

    do{
    printf("a cosa serve il while?");//b
    printf("\na)costrutto che permete di eseguire determinate istruzioni solo se una condizione specificata e' vera\nb)utilizzato per eseguire un blocco di istruzioni finche' una condizione specificata e' vera.\nc)costrutto che permete di verificare ulteriori condizioni\n");
    scelt= scelta();
    if(scelt!=2)
    (*live)--;
    if (*live == 0) {
            GAMEOVER();
            return;}
    }while(scelt!=2);
    do{
    printf("a cosa serve il do while?");//c
    printf("\na)utilizzato per eseguire un blocco di istruzioni un numero fissato di volte\nb)costrutto che permete di eseguire un altro blocco di istruzioni\nc)garantisce l'esecuzione del blocco di istruzioni almeno una volta prima di controllare la condizione.\n");
    scelt= scelta();
    if(scelt!=3)
    (*live)--;
    if (*live == 0) {
            GAMEOVER();
            return;
            }
    }while(scelt!=3);

    printf("LIVELLO 3\n");
    livelo_3(live);
    
    }
void livelo_3(int *live){
        int scelt;
    do{
        printf("cosa manca?\nfor(i = 0; i < 15; i++){\nprintf(\" scrivi un numero %%d:\", i + 1);\nscanf(\"%%d\", &serie[i]);\n}\n(i = 0; i < 15; i++){\nsomma += serie[i];\n}");
        printf("\na)scanf\nb)printf\nc)for\n");//c
        scelt= scelta();
        if(scelt!=3)
        (*live)--;
        if (*live == 0) {
            GAMEOVER();
            return;
            }
    }while (scelt!=3);

    do{
    printf("cosa manca?\nchar a;\nprintf(\"codice ascii di una letere\");\nprintf(\"scrivi un caratere:\");\nscanf(\"%%c\", a);\nprintf(\"ecco il valore in ascii: %%d\", a);");
    printf("\na);\nb),\nc)&\n");
    scelt= scelta();
    if(scelt!=3)
    (*live)--;
    if (*live == 0) {
            GAMEOVER();
            return;}
    }while(scelt!=3);
    do{
    printf("cosa manca?\ndo {\nprintf(\"Inserisci il valore %%d: \", indice + 1);\nscanf(\"%%d\", array[indice]);\nindice++;\n}while (indice < 10 && array[indice - 1] != -1);");
    printf("\na);\nb),\nc)&\n");//c
    scelt= scelta();
    if(scelt!=3)
    (*live)--;
    if (*live == 0) {
            GAMEOVER();
            return;
            }
    }while(scelt!=3);

    printf("LIVELLO 4\n");
    livelo_4(live);
}
void livelo_4(int *live){
          int scelt;
    do{
        printf("cosa manca?\nfor(i = 0; i < 15; i++){\nprintf(\" scrivi un numero %%d:\", i + 1);\nscanf(\"%%d\", &serie[i]);\n}\n(i = 0; i < 15; i++){\nsomma += serie[i];\n}");
        printf("\na)scanf\nb)printf\nc)for\n");//c
        scelt= scelta();
        if(scelt!=3)
        (*live)--;
        if (*live == 0) {
            GAMEOVER();
            return;
            }
    }while (scelt!=3);

    do{
    printf("cosa manca?\nint palindromo(char parola[]){\nint l = strlen(parola);\nfor(int i=0; i</2; i++){\nif(parola[i]!=parola[l-1-i]){\nreturn 0;\n}}\nreturn 1;\n}");
    printf("\nfor);\nb)l\nc)i++\n");//b
    scelt= scelta();
    if(scelt!=2)
    (*live)--;
    if (*live == 0) {
            GAMEOVER();
            return;}
    }while(scelt!=2);
    do{
    printf("cosa manca?\nint filtro(char a){\nif((a>=A && a<=Z)){\nprintf(\"e' una letera maiuscola \");\nreturn 1;\n}else if((a>=a && a<=z))\n{\nprintf(\"e' una letera minuscola \");\nreturn 0;\n}else{\nprintf(\"non e' una letera\");\nreturn -1;\n}\n}");
    printf("\na)''\nb))\nc);\n");//a
    scelt= scelta();
    if(scelt!=1)
    (*live)--;
    if (*live == 0) {
            GAMEOVER();
            return;
            }
    }while(scelt!=1);

    printf("LIVELLO 5\n");
    livelo_5(live);
    
}
void livelo_5(int *live){
      int scelt;
    do{
        printf("cosa manca?\n#include<stdio.h>\ntypedef struct{ \nchar via[30];\nchar citta[30];\nint CAP[100];\n}Indirizo;\ntypedef struct {\nchar nome[30];\nchar cognome[30];\nint eta;\nIndirizo indirizoresidente;\n}Persona;\nint main(){\nPersona persona1;\n\nprintf(\"scrivi il nome\");\nscanf(\"%%s\", persona1nome);\nprintf(\"scrivi il cognome\");\nscanf(\"%%s\", persona1cognome);\nprintf(\"scrivi eta\");\nscanf(\"%%d\", &persona1eta);\nprintf(\"scrivi la residenza (via, cita, CAP)\");\nscanf(\"%%s %%s %%d\", persona1.indirizoresidente.via, persona1.indirizoresidente.citta, &persona1.indirizoresidente.CAP);\ngetchar();\n}");
    printf("\na)return 0;\nb).\nc);\n");//b
        scelt= scelta();
        if(scelt!=2)
        (*live)--;
        if (*live == 0) {
            GAMEOVER();
            return;
            }
    }while (scelt!=2);

    do{
    printf("cosa manca?\n#include<stdio.h>\n\nint main(){\nint n1=0;\nint n2=0;\nint n3=0;\nprintf(\"scrivi un valore =\", n1);\nscanf(\"%%d\", &n1);\nprintf(\"scrivi un valore =\", n2);\nscanf(\"%%d\", &n2);\nn3 = somma(n1,n2);\nprintf(\"risultato=%%d\", n3);\nreturn 0;\n}\nint somma(int a, int b){\nint tottale=0;\ntottale = a + b;\nreturn tottale;\n}\n");
    printf("\na)int somma(int a, int b);\nb)somma(n1,n2)\nc)getchar();\n");//a
    scelt= scelta();
    if(scelt!=1)
    (*live)--;
    if (*live == 0) {
            GAMEOVER();
            return;}
    }while(scelt!=1);
    do{
    printf("cosa manca?\n#include<stdio.h>\n#include<string.h>\nint main (){\nint a = 5;\nchar b = 'c';\nint *p1;\nchar *p2;\np1 = &a;\np2 = &b;\nprintf(\"indirizo di due variabili %%p, %%p\", p1,p2);\nprintf(\"il valore delle celle di memoria %%d, %%c\", p1, p2);\n*p1 = 18;\n*p2 = 'a';\nprintf(\"indirizo di due variabili %%p, %%p\", p1, p2);\nprintf(\"il valore delle celle di memoria %%d, %%c\", *p1, *p2);\nreturn 0;\n}");
    printf("\na)%%d\nb)%%p\nc)*\n");//c
    scelt= scelta();
    if(scelt!=3)
    (*live)--;
    if (*live == 0) {
            GAMEOVER();
            return;
            }
    }while(scelt!=3);

    printf("LIVELLO 6\n");
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
}
void END(){
    printf("  \t\t\t\t\t\t\tEEEEEEE   NN     NN   DDDDDD\t\t\t   \n");
    printf("  \t\t\t\t\t\t\tE         NNN    NN   D     DD\t\t\t \n");
    printf("  \t\t\t\t\t\t\tEEEEE     NNNN   NN   D      DD\t\t\t\n");
    printf("  \t\t\t\t\t\t\tE         NN NN  NN   D     DD\t\t\t \n");
    printf("  \t\t\t\t\t\t\tEEEEEEE   NN  NN NN   DDDDDD\t\t\t   \n");
}