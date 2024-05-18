#include <stdio.h>

int main()
{
    int paquete;

    // se muestran las opciones del menú
    printf("Opciones disponibles\n");

    printf("1. Menú mexicano\n");
    printf("2. Menú chino\n");
    printf("3. Menú inglés\n");
    printf("4. Menú español\n");

    // Se solicita al usuario una elección
    printf("Elija el menú de su elección presionando el número que le corresponde\n");
    scanf("%d", &paquete);

    // Se muestra el menú seleccionado
    switch (paquete)
    {
    case 1:
        printf("Ha elegido el menú mexicano\n");
        break;
    case 2:
        printf("Ha elegido el menú chino\n");
        break;
    case 3:
        printf("Ha elegido el menú inglés\n");
        break;
    case 4:
        printf("Ha elegido el menú español\n");
        break;
    default:
        printf("El numero ingresado es incorrecto. Elija una de las opciones disponibles.\n");
    }

    return 0;
}
