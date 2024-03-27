#include <stdio.h>
#include <stdlib.h>

#define LONGITUD 20

int tablero[LONGITUD*LONGITUD];
void inicializar(){
    for(int *puntero = tablero;puntero < tablero + LONGITUD*LONGITUD;puntero++){
        *puntero = (rand() % 2 == 0) ? 1 : 0;
    }
}
void pintar(){
    for(int *puntero = tablero;puntero < tablero + LONGITUD*LONGITUD;puntero++){
        if((puntero - tablero) % LONGITUD == 0){
            printf("\n");
        }
        printf("%i",*puntero);
    }
}

int main(){
    inicializar();
    pintar();
    return 0;
}