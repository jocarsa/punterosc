#include <stdio.h>

int main(){
    int edad = 45;
    int edad2;
    edad2 = edad;
    int *puntero;
    printf("Mi edad es de %i \n",edad);
    printf("Mi edad2 es de %i \n",edad2);
    printf("La direccion de memoria de la edad es: %p \n",&edad);
    
    puntero = &edad;
    
    printf("El valor del puntero es: %p \n",puntero);
    printf("El contenido del puntero es: %i \n",*puntero);
    
    edad++;
    
    printf("Mi edad2 es de %i \n",edad2);
    printf("Mi nueva edad es de %i \n",edad);
    printf("El 'nuevo' contenido del puntero es: %i \n",*puntero);
    
}