#include <stdio.h>

int main(){
    int coleccion[5] = {1,2,3,4,5};
    
    int *puntero = coleccion;
    
    printf("El valor del puntero es: %i \n",*puntero);
    
    puntero++;
    
    printf("El valor del puntero es: %i \n",*puntero);
    
}