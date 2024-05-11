#include<stdio.h>
#include <string.h>

#define max 100
int main(){
    char scrivi[max];

    printf("scrivi cosa manca\n");
   
    printf("int n=0;\n (int i = 0; i <= 10; i++){\nprintf(\"\", i);\n}\n");//for,%d
    printf("1:");
    fgets(scrivi, sizeof(scrivi), stdin);
    printf("2:");
    fgets(scrivi, sizeof(scrivi), stdin);

    memset(scrivi, '\0', sizeof(scrivi));

    printf("scrivi cosa manca\n");
    printf("(numero <= 10){\nprintf(\"\", numero);\nnumero++;\n}\n");//while,%d
    
   printf("1:");
    fgets(scrivi, sizeof(scrivi), stdin);
    printf("2:");
    fgets(scrivi, sizeof(scrivi), stdin);

    memset(scrivi, '\0', sizeof(scrivi));

    printf("scrivi cosa manca\n");//somma,&,scanf,;
    printf("int a, b, ;\nsomma= a+b;\nprintf(\"a =\");\nscanf(\"%%d\", a);\nprintf(\"b =\");\n(\"%%d\", &b)\nprintf( \"somma = %%d\" , somma);\n");
    
    printf("1:");
    fgets(scrivi, sizeof(scrivi), stdin);
    printf("2:");
    fgets(scrivi, sizeof(scrivi), stdin);
    printf("3:");
    fgets(scrivi, sizeof(scrivi), stdin);
    printf("4:");
    fgets(scrivi, sizeof(scrivi), stdin);
    printf("LIVELO 8");

    return 0;
}
