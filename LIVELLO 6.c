
void lvl_6(char *Scelta, int *LIFE)
{
    char vero[] = "printf";
    char vero2[] = ";";
    char vero1[]= "&";
    
    do 
    {
        printf("Scrivi cosa manca per far stampare a schermo \n (\"franco bibi\");\n"); //printf
        scanf("%s", Scelta);
        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }

        while (getchar() != '\n');
    
        if (strcmp(Scelta, vero) != 0)
            {
                (*LIFE)--;
            }
    
    checklife(*LIFE);

    } while (strcmp(Scelta, vero) != 0);

    memset(Scelta, '\0', max); //RESET ARRAY
    
    do
    {
        printf("scrivi cosa manca per far scrivere da tastiera");
        printf("\nscanf(\"%%d\", num);\n");//&
        scanf("%s", Scelta);

        int len = strlen(Scelta);

        if (Scelta[len - 1] == '\n')
            {
                Scelta[len - 1] = '\0';
            }
        
        while (getchar() != '\n');

        if (strcmp(Scelta, vero1) != 0)
            {
                (*LIFE)--;
            }
       
        checklife(*LIFE);
    
    }while(strcmp(Scelta,vero1)!=0);

    memset(Scelta, '\0', max); //RESET ARRAY
    
    printf("scrivi cosa manca, in ordine");//;,&,printf,

    printf("\nprintf(\"scrivi un numero\")\n scanf(\"%%d\", num);\n(il numero scritto :%%d\", num) \");\n");

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

        if(strcmp(Scelta, vero2)!=0)
            {
                (*LIFE)--;
            }
    
        if(*LIFE==0)
        {
            return;
        }

    }while(strcmp(Scelta, vero2)!=0);

    memset(Scelta, '\0', max);

    do
    {
        printf("2:");
        scanf("%s", Scelta);

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

        if(strcmp(Scelta, vero)!=0)
            {
                (*LIFE)--; 
            }
    
    checklife(*LIFE);
    
    }while(strcmp(Scelta, vero)!=0);

    memset(Scelta, '\0', max); //RESET ARRAY
}
