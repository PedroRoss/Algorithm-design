#include <stdio.h>

int main()
{

    int numeros[3];
    int aux;

    for (int x = 0; x < 3; x++)
    {
        do
        {
            printf("Ingrese un número que sea mayor que 3 y menor que 15 \n");
            scanf("%d", &numeros[x]);

            if (numeros[x] < 4 || numeros[x] > 14)
            {
                printf("Ingrese un número mayor que 3 y menor que 15 \n");
            }

        } while (numeros[x] <= 3 || numeros[x] >= 15);
    }

    for (int x = 0; x < 3; x++)
    {
        for (int x = 0; x < 2; x++)
        {
            if (numeros[x] < numeros[x + 1])
            {
                aux = numeros[x + 1];
                numeros[x + 1] = numeros[x];
                numeros[x] = aux;
            }
        }
    }

    printf("Los números ordenados de mayor a menor son: \n");

    for (int x = 0; x < 3; x++)
    {
        printf("%d", numeros[x]);

        if (x < 2)
        {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}