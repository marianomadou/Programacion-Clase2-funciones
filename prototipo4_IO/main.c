#include <stdio.h>
#include <stdlib.h>

int sumarNumeros(void);

int main()
{
    int retorno;

    retorno = sumarNumeros();
    printf("La suma es: %d", retorno);

    return 0;
}

int sumarNumeros(void)
{
    int retorno;
    int numero1;
    int numero2;

    printf("Ingrese un numero: ");
    scanf("%d", &numero1);

    printf("Ingrese un numero: ");
    scanf("%d", &numero2);

    retorno = numero1 + numero2;

    return retorno;

}
