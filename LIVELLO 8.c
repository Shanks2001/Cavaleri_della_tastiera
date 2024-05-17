void lvl_8(int *LIFE){
    char vero[]= "i++";
    char vero1[] = ";";
    char vero2[] = "printf";
    char vero3[]= "=";
    char vero4[] = ",";
    char vero5[]= ";";
    char vero6[] = "for";
    char vero7[]= "i";

    char Scelta[max];
    printf("  \t\t\t\t~ ~ LIVELLO 8 ~ ~ \n\n");
    printf("\n  \t\t\t\t -- DOMANDA NUMERO 1 -- \n");
    do
    {
        printf("\t\t\t\t\tscrivi cosa manca, in ordine\n");//i++,printf,;
        printf("\t\t\t\t\tint vet[10];\n\t\t\t\t\tfor(int i=0;i<n;){\n\t\t\t\t\t(\"scrivi i valori %%d :\", i + 1);\n\t\t\t\t\tscanf(\"%%d\", &vet[i]);\n\t\t\t\t\tint primo = 1\n\t\t\t\t\tfor(j=vet[i]-1; j>1; j--){\n\t\t\t\t\tif(vet[i]%%j==0){\n\t\t\t\t\tprimo = 0;\n\t\t\t\t\t}\");\n");
        
        printf("\t\t\t\t\t1:");
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
                printf("\n\t\t\t\t\tRisposta sbagliata! \n\t\t\t\t\t Hai perso una vita! \n\t\t\t\t\t Adesso hai %d vite \n\n", *LIFE);
            }else{
                printf("\n\t\t\t\t\tCorretto!\n\n");
            }
            checklife(*LIFE);

    }while(strcmp(Scelta, vero)!=0);

    memset(Scelta, '\0', max);

    do
    {
        printf("\t\t\t\t\t2:");
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
            printf("\n\t\t\t\t\tRisposta sbagliata! \n\t\t\t\t\t Hai perso una vita! \n\t\t\t\t\t Adesso hai %d vite \n\n", *LIFE);
        }else{
            printf("\n\t\t\t\t\tCorretto!\n\n");
        }
        checklife(*LIFE);

    }while(strcmp(Scelta, vero2)!=0);

    memset(Scelta, '\0', max); //RESET ARRAY

    do
    {
        printf("\t\t\t\t\t3:");
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
            printf("\n\t\t\t\t\tRisposta sbagliata! \n\t\t\t\t\t Hai perso una vita! \n\t\t\t\t\t Adesso hai %d vite \n\n", *LIFE);
        }else{
            printf("\n\t\t\t\t\tCorretto!\n\n");
        }
        checklife(*LIFE);
    }while(strcmp(Scelta, vero1)!=0);
    memset(Scelta, '\0', max); //RESET ARRAY

    printf("\n  \t\t\t\t -- DOMANDA NUMERO 2 -- \n");
    do
    {
        printf("\t\t\t\t\tscrivi cosa manca, in ordine\n");//=,",",;
        printf("\t\t\t\t\tif(primo = 1){\n\t\t\t\t\tprintf(\"numero primo\" j);\n\t\t\t\t\t} else {\n\t\t\t\t\tprintf(\"numero non primo\", j)\n\t\t\t\t\t}\n");
        printf("\t\t\t\t\t1:");
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
            printf("\n\t\t\t\t\tRisposta sbagliata! \n\t\t\t\t\t Hai perso una vita! \n\t\t\t\t\t Adesso hai %d vite \n\n", *LIFE);
        }else{
            printf("\n\t\t\t\t\tCorretto!\n\n");
        }
        checklife(*LIFE);
    }while(strcmp(Scelta, vero3)!=0);

    memset(Scelta, '\0', max);

    do
    {
        printf("\t\t\t\t\t2:");
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
            printf("\n\t\t\t\t\tRisposta sbagliata! \n\t\t\t\t\t Hai perso una vita! \n\t\t\t\t\t Adesso hai %d vite \n\n", *LIFE);
        }else{
            printf("\n\t\t\t\t\tCorretto!\n\n");
        }
            checklife(*LIFE);
    
    }while(strcmp(Scelta, vero4)!=0);

    memset(Scelta, '\0', max); //RESET ARRAY

    do
    {
        printf("\t\t\t\t\t3:");
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
            printf("\n\t\t\t\t\tRisposta sbagliata! \n\t\t\t\t\t Hai perso una vita! \n\t\t\t\t\t Adesso hai %d vite \n\n", *LIFE);
        }else{
            printf("\n\t\t\t\t\tCorretto!\n\n");
        }
            checklife(*LIFE);
    
    }while(strcmp(Scelta, vero5)!=0);

    memset(Scelta, '\0', max); //RESET ARRAY

    printf("\n  \t\t\t\t -- DOMANDA NUMERO 3 -- \n");
    do
    {
        
        printf("\t\t\t\t\tscrivi cosa manca, in ordine\n");//for,i++,",",i
        printf("\t\t\t\t\t(int i = 0; i < 10; ){\n\t\t\t\t\tprintf(\"scrivi un valore %%d:\" i + 1);\n\t\t\t\t\tscanf(\"%%d\", &sequenza[]);\n\t\t\t\t\t}\n");
        printf("\t\t\t\t\t1:");
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
            printf("\n\t\t\t\t\tRisposta sbagliata! \n\t\t\t\t\t Hai perso una vita! \n\t\t\t\t\t Adesso hai %d vite \n\n", *LIFE);
        }else{
            printf("\n\t\t\t\t\tCorretto!\n\n");
        }
            checklife(*LIFE);

    }while(strcmp(Scelta, vero6)!=0);

    memset(Scelta, '\0', max);

    do
    {
        printf("\t\t\t\t\t2:");
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
            printf("\n\t\t\t\t\tRisposta sbagliata! \n\t\t\t\t\t Hai perso una vita! \n\t\t\t\t\t Adesso hai %d vite \n\n", *LIFE);
        }else{
            printf("\n\t\t\t\t\tCorretto!\n\n");
        }
            checklife(*LIFE);

    }while(strcmp(Scelta, vero)!=0);

    memset(Scelta, '\0', max); //RESET ARRAY

    do
    {
        printf("\t\t\t\t\t3:");
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
            printf("\n\t\t\t\t\tRisposta sbagliata! \n\t\t\t\t\t Hai perso una vita! \n\t\t\t\t\t Adesso hai %d vite \n\n", *LIFE);
        }else{
            printf("\n\t\t\t\t\tCorretto!\n\n");
        }
        checklife(*LIFE);

    }while(strcmp(Scelta, vero4)!=0);

    do
    {
        printf("\t\t\t\t\t4:");
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
            printf("\n\t\t\t\t\tRisposta sbagliata! \n\t\t\t\t\t Hai perso una vita! \n\t\t\t\t\t Adesso hai %d vite \n\n", *LIFE);
        }else{
            printf("\n\t\t\t\t\tCorretto!\n\n");
        }
        checklife(*LIFE);

    }while(strcmp(Scelta, vero7)!=0);

    memset(Scelta, '\0', max); //RESET ARRAY
    system("cls");
}
