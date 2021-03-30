#include <stdio.h>

int main()
{
    int numero=26;
    int *puntNumero;

    puntNumero = &numero;

    printf("Contenido del puntero: %d \n", *puntNumero);
    printf("Direccion de memoria almacenada por el puntero: %u \n", puntNumero);
    printf("Direccion de memoria de la variable: %u \n", &numero);
    printf("Direccion de memoria del puntero: %u \n", &puntNumero);
    printf("Tamanio de memoria usado por la variable: %d \n", sizeof(numero));


    getchar();
    return 0;
}