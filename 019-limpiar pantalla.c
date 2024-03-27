#include <stdio.h>
#include <stdlib.h>

#define LONGITUD 20

int tablero[LONGITUD*LONGITUD];

void limpiar_pantalla() {
    printf("\033[2J\033[H"); 
    fflush(stdout); 
}

void inicializar(){
    for(int *puntero = tablero;puntero < tablero + LONGITUD*LONGITUD;puntero++){
        *puntero = (rand() % 2 == 0) ? 1 : 0;
    }
}
void pintar(){
    limpiar_pantalla();
    for(int *puntero = tablero;puntero < tablero + LONGITUD*LONGITUD;puntero++){
        if((puntero - tablero) % LONGITUD == 0){
            printf("\n");
        }
        printf("%i",*puntero);
    }
}

void actualizar() {
    int nuevo_tablero[LONGITUD * LONGITUD];

    for (int *puntero = tablero; puntero < tablero + LONGITUD * LONGITUD; puntero++) {
        int i = (puntero - tablero) / LONGITUD;
        int j = (puntero - tablero) % LONGITUD;
        int vecinos = 0;

        for (int di = -1; di <= 1; di++) {
            for (int dj = -1; dj <= 1; dj++) {
                if (di == 0 && dj == 0) continue; 
                int *vecino = puntero + di * LONGITUD + dj;
                if (vecino >= tablero && vecino < tablero + LONGITUD * LONGITUD && *vecino == 1) {
                    vecinos++;
                }
            }
        }

        if (*puntero == 1) {
            if (vecinos < 2 || vecinos > 3) {
                *(nuevo_tablero + (puntero - tablero)) = 0;
            } else {
                *(nuevo_tablero + (puntero - tablero)) = 1;
            }
        } else {
            if (vecinos == 3) {
                *(nuevo_tablero + (puntero - tablero)) = 1; 
            } else {
                *(nuevo_tablero + (puntero - tablero)) = 0; 
            }
        }
    }
    for (int *puntero = tablero, *nuevo_puntero = nuevo_tablero; puntero < tablero + LONGITUD * LONGITUD; puntero++, nuevo_puntero++) {
        *puntero = *nuevo_puntero;
    }
}



int main(){
    inicializar();
    pintar();
    actualizar();
    pintar();
    return 0;
}