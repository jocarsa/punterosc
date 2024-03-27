#include <stdio.h>

void cambiaNumero(int *puntero){
    *puntero += 2;
}

int main(){
    int edad = 45;
    printf("Hasta este momento la edad vale %i \n",edad);
    cambiaNumero(&edad);
    printf("Ahora la edad vale %i \n",edad);
    return 0;
}