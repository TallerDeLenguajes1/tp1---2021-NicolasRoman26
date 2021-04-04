#include <stdio.h>

int cuadrado (int numero);
void cuadradoVoid (int *numero);
void invertir (int *valorA, int *valorB);
void orden (int *valorA, int *valorB);

int main()
{
    int numero, *puntNumero, resultado, valorA, valorB;

    printf("Ingrese un numero: ");
    scanf("%d",&numero);

    puntNumero = &numero;

    printf("Direccion de la variable: %u, contenido de la misma: %d", puntNumero, *puntNumero);

    resultado = cuadrado(numero);
    cuadradoVoid(&numero);
    
    printf("\nResultado de la funcion que devolvio un tipo int: %d", resultado);
    printf("\nResultado de la funcion que devolvio un tipo void: %d", numero);

    printf("\n\nIngrese un numero: ");
    scanf("%d",&valorA);
    printf("\nIngrese un segundo numero: ");
    scanf("%d",&valorB);

    printf("\nPrimero numero ingresado se guarda en valorA: %d, segundo numero ingresado se guardara en valorB: %d", valorA, valorB);

    invertir(&valorA, &valorB);

    printf("\nAhora valorA tiene como valor: %d, y valorB tiene como valor: %d", valorA, valorB);

    orden(&valorA, &valorB);
    
    printf("\nValor mas chico: %d, valor mas grande: %d", valorA, valorB);

    getchar();
    return 0;
}

int cuadrado (int numero)
{
    numero = numero * numero;
    return numero;
}

void cuadradoVoid (int *numero)
{
    *numero = *numero * *numero;
}

void invertir (int *valorA, int *valorB)
{
    int auxiliar;

    auxiliar = *valorB;
    *valorB = *valorA;
    *valorA = auxiliar;
}

void orden (int *valorA, int *valorB)
{
    int auxiliar;

    if (*valorA > *valorB)
    {
        auxiliar = *valorB;
        *valorB = *valorA;
        *valorA = auxiliar;
    }
}