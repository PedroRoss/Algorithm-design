#include <stdio.h>

void signo_zodiacal(int dia, int mes);

int main()
{
    int dia, mes;

    printf("Ingresa el día de tu nacimiento: ");
    scanf("%d", &dia);

    printf("Ingresa el mes de tu nacimiento (1-12): ");
    scanf("%d", &mes);

    if (dia <= 31 && mes <= 12)
    {
        printf("Tu signo zodiacal es: ");
        signo_zodiacal(dia, mes);
    }
    else
    {
        printf("No se ha ingresado una fecha correcta \n");
    }

    return 0;
}

void signo_zodiacal(int dia, int mes)
{
    if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18))
        printf("Acuario \n");
    else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20))
        printf("Piscis \n");
    else if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19))
        printf("Aries \n");
    else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20))
        printf("Tauro \n");
    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20))
        printf("Géminis \n");
    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22))
        printf("Cáncer \n");
    else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22))
        printf("Leo \n");
    else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22))
        printf("Virgo \n");
    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22))
        printf("Libra \n");
    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21))
        printf("Escorpio \n");
    else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
        printf("Sagitario \n");
    else
        printf("Capricornio \n");
}