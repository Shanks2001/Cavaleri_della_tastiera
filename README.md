c'è un problema con questa funzione 
void ripeti(int LIFE){
    char scelta;
    
    while (1) {
        printf("Vuoi riprovare? (y/n): ");
        scanf(" %c", &scelta);
        switch (scelta) {
            case 'y':
            case 'Y':
                LIFE=3;
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
sta nel livello 1-5 lo gia isolata in un file qua presente 
se mi sapete agliutare vi rigrazio ❤
