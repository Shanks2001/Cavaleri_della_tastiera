
void lvl_8(char *Scelta, int *LIFE)
{
    printf("~ ~ LIVELLO 8 ~ ~")
    printf("scrivi cosa manca\n"); //i++,%d,;

    printf("void aggiungi(Clienti *c, int *f){\nif(*f<50){\nint b=0;\ndo {\nprintf(\"scrivi quante prenotazioni vuoi aggiungere:\");\nscanf(\"%%d\", &b);\n}while(b<=0);\nfor(int i=0; i<b; ){\nprintf(\"scrivi il nome:\");\nscanf(\"%%99s\",  c[*f].nome);\nprintf(\"scrivi il numero di persone:\");\nscanf(\"\", &c[*f].npersone);\nprintf(\"scrivi il numero del tavolo:\")\nscanf(\"%%d\", &c[*f].tavolo);\nprintf(\"scrivi l'ora(ora):\");\nscanf(\"%%d\", &c[*f].data.ora);\nprintf(\"scrivi l'ora(minuti):\");\nscanf(\"%%d\", &c[*f].data.minuti);\n(*f)++;\n}\n}else{\nprintf(\"ristorante pieno\");\n}\nkill();\n}\n");
    printf("1:");
    fgets(Scelta, sizeof(Scelta), stdin);
    printf("2:");
    fgets(Scelta, sizeof(Scelta), stdin);
    printf("3:");
    fgets(Scelta, sizeof(Scelta), stdin);

    memset(Scelta, '\0', sizeof(Scelta));

    printf("scrivi cosa manca \n");//i++,if,i,;
    printf("void stampa(Clienti *c, int f){\nfor(int i=0; i<f; ){\nprintf(\"%%d) nome:%%s numero persone:%%d numero del tavolo:%%d orario:%%d:%%d\", \ni+1,c[i].nome, c[i].npersone, c[i].tavolo, c[i].data.ora, c[i].data.minuti);\n}\n}\nvoid ricerca( Clienti *c, int f){\nint MAX = 0;\nint j = 0;\nfor(int i=0; i < f; i++){\n\n(MAX < c[].npersone){\nMAX=c[].npersone;\nj=i;\n}\n}\ntroll();\nprintf(\"nome:%%s numero di persone:%%d numero del tavolo:%%d\", c[j].nome, c[j].npersone, c[j].tavolo);\n}\n");
    printf("1:");
    fgets(Scelta, sizeof(Scelta), stdin);
    printf("2:");
    fgets(Scelta, sizeof(Scelta), stdin);
    printf("3:");
    fgets(Scelta, sizeof(Scelta), stdin);

    memset(Scelta, '\0', sizeof(Scelta));

    printf("scrivi cosa manca\n");//for,*file,fclose(file);
    printf("(int i = 0; i < 10; ){\nvoid ordinamento(Clienti *c, int f){\n\nfor(int i=0; i<f-1; i++){\n(int j=0; j<f-i-1; j++){\nif(c[j].data.ora < c[j+1].data.ora){\nClienti max=c[j+1];\nc[j+1]=c[j];\nc[j]=max;\n}\nif(c[j].data.ora == c[j+1].data.ora && c[j].data.minuti < c[j+1].data.minuti){\nClienti max=c[j+1];\nc[j+1]=c[j];\nc[j]=max;\n}\n}\n\n}\n}\nvoid file(Clienti *c, int f){\n\nFILE =fopen(\"prenotazioni.txt\", \"w\");\nif(file==NULL){\nprintf(\"ERROR\");\n}else{\nprintf(\"file aperto con succeso\n\");\n}\n\nfprintf(file, \"numero prenotazioni %d\", f);\nfor(int i=0; i<f; i++){\n\nfprintf(file, \"%d) nome:%s numero persone:%d numero tavolo:%d orario:%d:%d\", i+1, c[i].nome, c[i].npersone, c[i].tavolo, c[i].data.ora, c[i].data.minuti);\n}\nstampa_fregato_in_loop();\n\nprintf(\"\nfile salvato\");\n}\n");
    printf("1:");
    fgets(Scelta, sizeof(Scelta), Scelta);
    printf("2:");
    fgets(Scelta, sizeof(Scelta), Scelta);
    printf("3:");
    fgets(Scelta, sizeof(Scelta), stdin);
    printf("4:");
    fgets(Scelta, sizeof(Scelta), stdin);
    printf("BOSS");

    return 0;
}
