#include <stdio.h>
#include <stdlib.h>

int sumarNumeros(int, int);

int main()
{
    int numero1;
    int numero2;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d", &numero1);

    printf("Ingrese un numero: ");
    scanf("%d", &numero2);

    resultado=sumarNumeros(numero1, numero2);

    printf("El resultado de la suma es: %d\n", resultado);
}

//desarrollo o implementación de la función

int sumarNumeros(int numero1, int numero2)
{
    int retorno;

    retorno = numero1 + numero2;

    return retorno;
}
