
void livelo_6(int *LIFE){
    char vero[] = "printf";
    char vero2[] = ";";
    char vero1 []="&";
    char scrivi[max];
    printf("  \t\t\t\t~ ~ LIVELLO 6 ~ ~ \n\n");
    
do {
    printf("\n  \t\t\t\t -- DOMANDA NUMERO 1 -- \n");
    printf("\t\t\t\t\tscrivi cosa manca per far stampare a schermo\n");
    printf("\t\t\t\t\t(\"franco bibi\");\n");//printf")
    printf("\t\t\t\t\trisposta:");
    scanf("\t\t\t\t\t%s", scrivi);
    int len = strlen(scrivi);
    if (scrivi[len - 1] == '\n')
        scrivi[len - 1] = '\0';
    while (getchar() != '\n');
    
    if (strcmp(scrivi, vero) != 0){
        (*LIFE)--;
        printf("\n\t\t\t\t\tRisposta sbagliata! \n\t\t\t\t\t Hai perso una vita! \n\t\t\t\t\t Adesso hai %d vite \n\n", *LIFE);
    }else
    {
        printf("\n\t\t\t\t\tCorretto!\n\n");
    } 
    checklife(*LIFE);
} while (strcmp(scrivi, vero) != 0);
    memset(scrivi, '\0', max);
    
    
do{
    printf("\n  \t\t\t\t -- DOMANDA NUMERO 2 -- \n");
    printf("\t\t\t\t\tscrivi cosa manca per far scrivere da tastiera");
    printf("\n\t\t\t\t\tscanf(\"%%d\", num);\n");//&
    printf("\t\t\t\t\trisposta:");
    scanf("\t\t\t\t\t%s", scrivi);
    int len = strlen(scrivi);
    if (scrivi[len - 1] == '\n')
        scrivi[len - 1] = '\0';
    while (getchar() != '\n');
    if (strcmp(scrivi, vero1) != 0){
        (*LIFE)--;
        printf("\n\t\t\t\t\tRisposta sbagliata! \n\t\t\t\t\t Hai perso una vita! \n\t\t\t\t\t Adesso hai %d vite \n\n", *LIFE);
    }else
    {
        printf("\n\t\t\t\t\tCorretto!\n\n");
    } 
    checklife(*LIFE);
}while(strcmp(scrivi,vero1)!=0);
    memset(scrivi, '\0', max);
    printf("\n  \t\t\t\t -- DOMANDA NUMERO 3 -- \n");
    printf("\t\t\t\t\tscrivi cosa manca, in ordine");//;,&,printf,
    printf("\n\t\t\t\t\tprintf(\"scrivi un numero\")\n");
    printf("\t\t\t\t\tscanf(\"%%d\", num);\n");
    printf("\t\t\t\t\t(il numero scritto :%%d\", num) \");\n");
    do{
    printf("\t\t\t\t\t1:");
    scanf("\t\t\t\t\t%s", scrivi);
    int len = strlen(scrivi);
    if (scrivi[len - 1] == '\n'){
        scrivi[len - 1] = '\0';}
    while (getchar() != '\n');
    if(strcmp(scrivi, vero2)!=0){
        (*LIFE)--;
        printf("\n\t\t\t\t\tRisposta sbagliata! \n\t\t\t\t\t Hai perso una vita! \n\t\t\t\t\t Adesso hai %d vite \n\n", *LIFE);
    }else
    {
        printf("\n\t\t\t\t\tCorretto!\n\n");
    } 
    checklife(*LIFE);
    }while(strcmp(scrivi, vero2)!=0);
    memset(scrivi, '\0', max);
    do{
    printf("\t\t\t\t\t2:");
    scanf("\t\t\t\t\t%s", scrivi);
    if(strcmp(scrivi, vero1)!=0){
        (*LIFE)--;
        printf("\n\t\t\t\t\tRisposta sbagliata! \n\t\t\t\t\t Hai perso una vita! \n\t\t\t\t\t Adesso hai %d vite \n\n", *LIFE);
    }else
    {
        printf("\n\t\t\t\t\tCorretto!\n\n");
    } 
    checklife(*LIFE);
    }while(strcmp(scrivi, vero1)!=0);
    memset(scrivi, '\0', max);
    do{
        printf("\t\t\t\t\t3:");
    scanf("\t\t\t\t\t%s", scrivi);    
    if(strcmp(scrivi, vero)!=0){
        (*LIFE)--;
        printf("\n\t\t\t\t\tRisposta sbagliata! \n\t\t\t\t\t Hai perso una vita! \n\t\t\t\t\t Adesso hai %d vite \n\n", *LIFE);
    }else
    {
        printf("\n\t\t\t\t\tCorretto!\n\n");
    } 
    checklife(*LIFE);
    }while(strcmp(scrivi, vero)!=0);
    memset(scrivi, '\0', max);
}
