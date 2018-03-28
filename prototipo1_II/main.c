#include <stdio.h>
#include <stdlib.h>

void sumarNumeros(int, int);

int main()
{
    int numero1;
    int numero2;

    printf("Ingrese un numero: ");
    scanf("%d", &numero1);

    printf("Ingrese un numero: ");
    scanf("%d", &numero2);

    sumarNumeros(numero1, numero2);

    return 0;
}

//desarrollo o implementación de la función

void sumarNumeros(int numero1, int numero2)
{
    int retorno;

    retorno = numero1 + numero2;

    printf("La suma es: %d", retorno);
}
