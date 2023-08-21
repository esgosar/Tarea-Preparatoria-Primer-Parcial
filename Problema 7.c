/*
- El usuario ingresa un número
- Se calcula el factorial de ese número
- Se muestra el resultado
*/

#import "Header.h"

int factorialInt(int expression)
{
    int factorial = 1;

    for(int i = 1; i<= expression; i++)
    {
        factorial = factorial * i;
        // 1 x 1 = 1
        // 1 x 2 = 2
        // 2 x 3 = 6
        // 6 x 4 = 24
        // 24 x 5 = 120
    }

    return factorial;
}

int main()
{
    int number;

    clean(0);
    // Interfaz para el ingreso del número
    printf("FACTORIAL DE UN NÚMERO ENTERO\n");
    printf("Introduzca el número: \n");
    printf("\n------------------------------------------------------------\n");
    scanf("%d", &number);
    clean(1);
    printf("\nEl resultado es: %i\n", factorialInt(number));
    clean(3);

    return 0;
}