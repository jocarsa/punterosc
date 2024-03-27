#include <stdio.h>

int main(){
    int edad = 45;
    int *puntero;
    printf("Mi edad es de %i \n",edad);
    printf("La direccion de memoria de la edad es: %p \n",&edad);
    
    puntero = &edad;
    
    printf("El valor del puntero es: %i \n",puntero);
    
    
}