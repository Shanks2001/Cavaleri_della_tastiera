#ifndef FUNCTION_H
//LVL_P --> puntatore Universale LVL Attuale
//func_arrayn per chiamare un (n) livello




void (*func_array[10])() = { lvl_0, lvl_1, lvl_2, lvl_3, lvl_4, lvl_5, lvl_6, lvl_7, lvl_8, lvl_9 }; 


void lvl_save ( LVL_P )
{
    
    Actual_lvl = *LVL_P;
    
    fp = fopen ( saveLvl.txt, "w+" ); 
    
    if ( fp == NULL )
    {
        perror ( "data.txt" );
        exit (1);
    }
    
    fputs ( "%d", Actual_lvl );
    
}


lvl_


#endif // FUNCTION_H
