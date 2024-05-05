#include <stdio.h> <funcionZodiacal.h>

int main()
{
    int dia, mes;

    printf("Ingresa el día de tu nacimiento (1-31): ");
    scanf("%d", &dia);

    printf("Ingresa el mes de tu nacimiento (1-12): ");
    scanf("%d", &mes);

    printf("Tu signo zodiacal es: ");
    signo_zodiacal(dia, mes);

    return 0;
}