void lvl_7(char *Scelta, int *LIFE)
{
    char vero[] = "for";
    char vero2 = "i";
    char vero3[] = "while";
    char vero1 = "+";
    char vero4[] = "somma";
    char vero5 = "&";
    char vero6[] = "scanf";

    printf("int n=0;\n (int i = 0; i <= 10; i++){\nprintf(\"%%d\", );\n}\n"); //for, i
    scanf("%s", Scelta);

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

        if(strcmp(Scelta, vero2) != 0)
            {
                (*LIFE)--; 
            }
        
        checklife(*LIFE);
    
    }while(strcmp(Scelta, vero2) != 0);

    memset(Scelta, '\0', max); //RESET ARRAY
    
        printf("scrivi cosa manca\n");
        printf("(numero <= 10){\nprintf(\"%%d\", numero);\nnumero+;\n}\n"); //while,+
        scanf("%s", Scelta);
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

        if(strcmp(Scelta, vero1)!=0)
            {
                (*LIFE)--; 
            }
        
        checklife(*LIFE);
    
    }while(strcmp(Scelta, vero1)!=0);

    memset(Scelta, '\0', max); //RESET ARRAY
    
    printf("scrivi cosa manca\n");//somma,&,scanf,;

    printf("int a, b, ;\nsomma= a+b;\nprintf(\"a =\");\nscanf(\"%%d\", a);\nprintf(\"b =\");\n(\"%%d\", &b)\nprintf( \"somma = %%d\" , somma);\n");

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

        if(strcmp(Scelta, vero4)!=0)
            {
                (*LIFE)--;
            }
    
        if(*LIFE==0)
        {
            return;
        }

    }while(strcmp(Scelta, vero4)!=0);

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

        if(strcmp(Scelta, vero5)!=0)
            {
                (*LIFE)--; 
            }
        
        checklife(*LIFE);
    
    }while(strcmp(Scelta, vero5)!=0);

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

        if(strcmp(Scelta, vero6)!=0)
            {
                (*LIFE)--; 
            }
    
    checklife(*LIFE);
    
    }while(strcmp(Scelta, vero6)!=0);

    memset(Scelta, '\0', max); //RESET ARRAY
}
 
