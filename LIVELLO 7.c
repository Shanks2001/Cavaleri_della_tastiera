void lvl_7( int *LIFE)
{
       printf("  \t\t\t\t~ ~ LIVELLO 7 ~ ~ \n\n");
    char Scelta[max];
    char vero[] = "for";
    char vero2[]= "i";
    char vero3[] = "while";
    char vero1[]= "+";
    char vero4[] = "somma";
    char vero5[]= "&";
    char vero6[] = "scanf";

        do
        {
            printf("\n  \t\t\t\t -- DOMANDA NUMERO 1 -- \n");
            printf("\t\t\t\t\tscrivi cosa manca, in ordine\n");
            printf("\t\t\t\t\tint n=0;\n\t\t\t\t\t (int i = 0; i <= 10; i++){\n\t\t\t\t\tprintf(\"%%d\", );\n\t\t\t\t\t}\n");//for,i
            printf("\t\t\t\t\t1:");
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
        printf("\n  \t\t\t\t -- DOMANDA NUMERO 2 -- \n");
        printf("\t\t\t\t\tscrivi cosa manca, in ordine\n");
        printf("\t\t\t\t\t(numero <= 10){\n\t\t\t\t\tprintf(\"%%d\", numero);\n\t\t\t\t\tnumero+;\n\t\t\t\t\t}\n");//while,+

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
    
        while(getchar() != '\n');

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
    

    do
    {
        printf("\n  \t\t\t\t -- DOMANDA NUMERO 3 -- \n");
        printf("\t\t\t\t\tscrivi cosa manca, in ordine\n");//somma,&,scanf,;
        printf("\t\t\t\t\tint a, b, ;\n\t\t\t\t\tsomma= a+b;\n\t\t\t\t\tprintf(\"a =\");\n\t\t\t\t\tscanf(\"%%d\", a);\n\t\t\t\t\tprintf(\"b =\");\n\t\t\t\t\t(\"%%d\", &b);\n\t\t\t\t\tprintf( \"somma = %%d\" , somma);\n");
        printf("\t\t\t\t\t1:");
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
                    printf("\n\t\t\t\t\tRisposta sbagliata! \n\t\t\t\t\t Hai perso una vita! \n\t\t\t\t\t Adesso hai %d vite \n\n", *LIFE);
                }else{
                    printf("\n\t\t\t\t\tCorretto!\n\n");
                }
            checklife(*LIFE);

    }while(strcmp(Scelta, vero4)!=0);

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
    
        while(getchar() != '\n');

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

        if(strcmp(Scelta, vero6)!=0)
            {
                    (*LIFE)--;
                    printf("\n\t\t\t\t\tRisposta sbagliata! \n\t\t\t\t\t Hai perso una vita! \n\t\t\t\t\t Adesso hai %d vite \n\n", *LIFE);
                }else{
                    printf("\n\t\t\t\t\tCorretto!\n\n");
                }
            checklife(*LIFE);
    
    }while(strcmp(Scelta, vero6)!=0);

    memset(Scelta, '\0', max); //RESET ARRAY

    system("cls"); //RESET ARRAY
}
 
