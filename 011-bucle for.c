#include <stdio.h>

int main(){
    int coleccion[5] = {1,2,3,4,5};
    
    int *puntero = coleccion;
    int i;
    for(i = 0;i<5;i++){
        printf("El valor del puntero es: %i \n",*puntero);
        puntero++;
    } 
}