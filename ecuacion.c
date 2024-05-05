/*Programa para aplicar la formula n(n+1)(2n+1)/6 mostrando los resultados de 1 hasta n*/

#include <stdio.h>

int main()
{

    int n, R;

    printf("Ingrese su número distinto de 0 \n");
    scanf("%d", &n);

    if (n != 0)
    {
        for (int x = 1; x <= n; x++)
        {
            R = ((x * (x + 1) * ((2 * x) + 1)) / 6);

            printf("%10d", R);

            if (x < n)
            {
                printf(", ");
            }
        }

        printf("\n");
    }
    else
    {
        printf("El número ingresado no es distinto de 0");
    }

    return 0;
}
