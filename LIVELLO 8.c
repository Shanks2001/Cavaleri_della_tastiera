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

    printf("scrivi cosa manca\n");
   //i++,printf,;
    printf("int vet[10];\nfor(int i=0;i<n;){\n(\"scrivi i valori %%d :\", i + 1);\nscanf(\"%%d\", &vet[i]);\nint primo = 1\nfor(j=vet[i]-1; j>1; j--){\nif(vet[i]%%j==0){\nprimo = 0;\n}\");\n");
    do
    {
        printf("1:");
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
            }
    
        if(*LIFE==0)
        {
            return;
        }

    }while(strcmp(Scelta, vero)!=0);

    memset(Scelta, '\0', max);

    do
    {
        printf("2:");
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
            }
        
        checklife(*LIFE);
    
    }while(strcmp(Scelta, vero1)!=0);

    memset(Scelta, '\0', max); //RESET ARRAY

    do
    {
        printf("3:");
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
            }
    
    checklife(*LIFE);
    
    }while(strcmp(Scelta, vero2)!=0);

    memset(Scelta, '\0', max); //RESET ARRAY

    printf("scrivi cosa manca \n");//=,",",;
    printf("if(primo = 1){\nprintf(\"numero primo\" j);\n} else {\nprintf(\"numero non primo\", j)\n}\n");
    do
    {
        printf("1:");
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
            }
    
        if(*LIFE==0)
        {
            return;
        }

    }while(strcmp(Scelta, vero3)!=0);

    memset(Scelta, '\0', max);

    do
    {
        printf("2:");
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
            }
        
        checklife(*LIFE);
    
    }while(strcmp(Scelta, vero4)!=0);

    memset(Scelta, '\0', max); //RESET ARRAY

    do
    {
        printf("3:");
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
            }
    
    checklife(*LIFE);
    
    }while(strcmp(Scelta, vero5)!=0);

    memset(Scelta, '\0', max); //RESET ARRAY

    printf("scrivi cosa manca\n");//for,i++,",",i
    printf("(int i = 0; i < 10; ){\nprintf(\"scrivi un valore %%d:\" i + 1);\nscanf(\"%%d\", &sequenza[]);\n}\n");
    do
    {
        printf("1:");
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
            }
    
        if(*LIFE==0)
        {
            return;
        }

    }while(strcmp(Scelta, vero6)!=0);

    memset(Scelta, '\0', max);

    do
    {
        printf("2:");
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
            }
        
        checklife(*LIFE);
    
    }while(strcmp(Scelta, vero)!=0);

    memset(Scelta, '\0', max); //RESET ARRAY

    do
    {
        printf("3:");
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
            }
    
    checklife(*LIFE);
    
    }while(strcmp(Scelta, vero4)!=0);

    do
    {
        printf("4:");
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
            }
    
        if(*LIFE==0)
        {
            return;
        }

    }while(strcmp(Scelta, vero7)!=0);

    memset(Scelta, '\0', max);


    memset(Scelta, '\0', max); //RESET ARRAY
    printf("LIVELO 9");
}
