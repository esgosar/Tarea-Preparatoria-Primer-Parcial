/*
- Solicitar el ingreso de un número al usuario
- Mostrar la tabla de multiplicar de el número
*/

#import "Header.h"

int main()
{
    int number;

    clean(1);
    // Interfaz para el ingreso del número
    printf("Ingrese el número de la tabla de multiplicar que desea\n");
    printf("\n------------------------------------------------------------\n");
    scanf("%i", &number);

    // Operatoria
    switch (number)
    {
        case 1:
            clean(1);
            for (int i = 1; i <= 9; i++) printf("1 X %i = %i \n", i, 1*i);
            printf("...\n");
            clean(5);
            break;
        case 2:
            clean(1);
            for (int i = 1; i <= 9; i++) printf("2 X %i = %i \n", i, 2*i);
            printf("...\n");
            clean(5);
            break;
        case 3:
            clean(1);
            for (int i = 1; i <= 9; i++) printf("3 X %i = %i \n", i, 3*i);
            printf("...\n");
            clean(5);
            break;
        case 4:
            clean(1);
            for (int i = 1; i <= 9; i++) printf("4 X %i = %i \n", i, 4*i);
            printf("...\n");
            clean(5);
            break;
        case 5:
            clean(1);
            for (int i = 1; i <= 9; i++) printf("5 X %i = %i \n", i, 5*i);
            printf("...\n");
            clean(5);
            break;
        case 6:
            clean(1);
            for (int i = 1; i <= 9; i++) printf("6 X %i = %i \n", i, 6*i);
            printf("...\n");
            clean(5);
            break;
        case 7:
            clean(1);
            for (int i = 1; i <= 9; i++) printf("7 X %i = %i \n", i, 7*i);
            printf("...\n");
            clean(5);
            break;
        case 8:
            clean(1);
            for (int i = 1; i <= 9; i++) printf("8 X %i = %i \n", i, 8*i);
            printf("...\n");
            clean(5);
            break;
        case 9:
            clean(1);
            for (int i = 1; i <= 9; i++) printf("9 X %i = %i \n", i, 9*i);
            printf("...\n");
            clean(5);
            break;
        default:
            printf("Introduzca un número del 1 al 9.\n");
    }
    return 0;
}
