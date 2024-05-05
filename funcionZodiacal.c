#include <stdio.h>

void signo_zodiacal(int dia, int mes)
{
    if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18))
        printf("Acuario");
    else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20))
        printf("Piscis");
    else if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19))
        printf("Aries");
    else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20))
        printf("Tauro");
    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20))
        printf("Géminis");
    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22))
        printf("Cáncer");
    else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22))
        printf("Leo");
    else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22))
        printf("Virgo");
    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22))
        printf("Libra");
    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21))
        printf("Escorpio");
    else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
        printf("Sagitario");
    else
        printf("Capricornio");
}
