#ifndef FUNCTION_H
//LVL_P --> puntatore Universale LVL Attuale
//func_arrayn per chiamare un (n) livello
// LIFE --> vite
//v_life--> variable_life
///////////////////DICHIARAZIONE_FUNZIONI//////////////////////////////
void W_checkpoint( int *LIFE );

int R_checkpoint( int *LIFE );

void lvl_save ( int* LVL_P );

int lvl_open ( int* LVL_P );
///////////////////////////////////////////////////////////////////////

//////////////////////SAVE_LEVEL////////////////////////////

void (*func_array[10])() = { lvl_0, lvl_1, lvl_2, lvl_3, lvl_4, lvl_5, lvl_6, lvl_7, lvl_8, lvl_9 };



void lvl_save ( int* LVL_P )
{

    int Attual_lvl = *LVL_P;

    FILE* fp = fopen ( saveLvl.txt, "w+" );

    if ( fp == NULL )
    {
        perror ( "saveLvl.txt" );
        exit (1);
    }

    fputs ( "%d", Actual_lvl );

    fclose ( fp );

}


int lvl_open ( int* LVL_P )/////////////DA CONTROLLARE
{



    FILE* fp = fopen ( saveLvl.txt, "r" );

    if ( fp == NULL )
    {
        perror ( "saveLvl.txt" );
        exit (1);
    }

    int Attual_lvl;

    fscanf( fp, "%d", &Attual_lvl );

    *LVL_P = Attual_lvl;


    fclose ( fp );

    return Attual_lvl;
}

//////////////////////////////////////////////////////////////////



///////////////////////CHECKPOINT///////////////////////////////////



void W_checkpoint( int *LIFE )
{
    int v_life = *LIFE;

    FILE* fp = fopen ( "life.txt", "w+" );
    if ( fp == NULL )
    {
        perror ( "life.txt" );
        exit (1);
    }

 fprintf ( fp, "%d", v_life );
 fclose ( fp );
}

int R_checkpoint ( int *LIFE )///////////ANCHE QUI DA CONTROLLARE IMPUT O RETURN FUNZIONE
{
    int v_life;

    FILE* fp = fopen( "life.txt", "r+" );
    if ( fp == NULL )
    {
        perror ( "life.txt" );
        exit (1);
    }
    fscanf( fp, "%d", LIFE );

    *LIFE = v_life;

    fclose( fp );

    return v_life;
}

//////////////////////////////////////////////////////
#endif // FUNCTION_H
