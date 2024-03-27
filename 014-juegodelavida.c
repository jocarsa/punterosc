#include <stdio.h>
#include <stdlib.h>

#define LONGITUD 20

int tablero[LONGITUD*LONGITUD];

int main(){
    for(int *puntero = tablero;puntero < tablero + LONGITUD*LONGITUD;puntero++){
        *puntero = (rand() % 2 == 0) ? 1 : 0;
    }
    
    return 0;
}