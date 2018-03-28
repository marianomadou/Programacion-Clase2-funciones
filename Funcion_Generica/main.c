#include <stdio.h>
#include <stdlib.h>

/** \brief Pide al usuario un número entero y lo valida
 *
 * \param El texto del mensaje a mostrar
 * \param El valor minimo del intervalo de validación
 * \param El valor máximo del intervalo de validación
 * \return Un número entero validado
 *
 */

int pedirEntero(char[], int, int);

int validarEntero(int, int, int);

int main()
{
    int edad;
    int legajo;

    edad = pedirEntero("Ingrese edad\n", 18, 65);
    legajo = pedirEntero("Ingrese numero de legajo \n", 1, 1500);

    printf("La edad es: %d\n", edad);
    printf("El legajo es: %d\n", legajo);
    return 0;
}


int pedirEntero(char mensaje[], int min, int max)
{
    int numero;

    printf("%s", mensaje);
    scanf("%d", &numero);

    numero = validarEntero(numero, min, max);

    return numero;

}

int validarEntero(int dato, int min, int max)
{
    while(dato < min || dato >max)
    {
        printf("Error: Ingrese entre %d y %d\n", min, max);
        scanf("%d", &dato);
    }
    return dato;
}
