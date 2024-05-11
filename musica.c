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
void livelo_1(int *live);
int main() {
    int live=3;
    
    livelo_1(&live);

    printf("%d", live);
  
    return 0;
}
void livelo_1(int *live){
    int scelt;
    do{
       printf("a cosa serve il printf?");
    printf("\na) stampa il testo su scermo\nb) legge un numero intero inserito dall'utente\nc)costrutto che permete di eseguire determinate istruzioni solo se una condizione specificata e' vera\n");
    scelt= scelta();
    if(scelt!=1)
    (*live)--;
    if (*live == 0) {
            printf("Hai esaurito tutte le vite. Il livello termina.\n");
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
            printf("Hai esaurito tutte le vite. Il livello termina.\n");
            return;}
    }while(scelt!=3);
    do{
    printf("a cosa serve il if?");//a
    printf("\na)costrutto che permete di eseguire determinate istruzioni solo se una condizione specificata e' vera\nb)costrutto che permete di eseguire un altro blocco di istruzioni\nc)costrutto che permete di verificare ulteriori condizioni\n");
    scelt= scelta();
    if(scelt!=1)
    (*live)--;
    if (*live == 0) {
            printf("Hai esaurito tutte le vite. Il livello termina.\n");
            return;
            }
    }while(scelt!=1);
    
    }
