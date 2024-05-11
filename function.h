#ifndef FUNCTION_H
//LVL_P --> puntatore Universale LVL Attuale
//func_arrayn per chiamare un (n) livello
/////////////////////////////////////////////////
void W_checkpoint( int *live );

void R_checkpoint( int *live );

void lvl_save ( LVL_P );

///////////////////////////////////////////////////

void (*func_array[10])() = { lvl_0, lvl_1, lvl_2, lvl_3, lvl_4, lvl_5, lvl_6, lvl_7, lvl_8, lvl_9 }; 



void lvl_save ( LVL_P )
{
    
    Actual_lvl = *LVL_P;
    
    FILE* fp = fopen ( saveLvl.txt, "w+" ); 
    
    if ( fp == NULL )
    {
        perror ( "saveLvl.txt" );
        exit (1);
    }
    
    fputs ( "%d", Actual_lvl );
    
}


lvl_
//////////////////////////////////////////////////////////



void W_checkpoint( int *live )
{
 FILE* fp = fopen ("life.txt", "w+" );
    if ( fp == NULL )
    {
        perror ( "life.txt" );
        exit (1);
    }
    
 fprintf ( fp, "%d", live );
 fclose ( fp );
}

void R_checkpoint ( int *live )
{
    FILE* fp = fopen( "life.txt", "r+" );
    if ( fp == NULL )
    {
        perror ( "life.txt" );
        exit (1);
    }
    fscanf( fp, "%d", life );
    fclose( fp );
}

/////////////////////////////////////
#endif // FUNCTION_H
