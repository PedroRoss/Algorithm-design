#include <stdio.h>

int main()
{
    // Se determinan variables
    int num, suma;

    // Se inicializa por única vez suma
    suma = 0;

    // Se solicita al usuario ingresar el número de su elección
    printf("Ingrese un número entero distinto a 0\n");
    scanf("%d", &num);

    // Se muestran las sumas de cada número más su par desde 1 hasta el número elegido
    for (int x = 1; x <= num; x++)
    {
        suma = x + x;

        printf("Para el número %d la suma de su par es %d\n", x, suma);
    }
}