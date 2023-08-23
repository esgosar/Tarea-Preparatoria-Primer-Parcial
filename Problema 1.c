/**
    • El usuario elije la operación de forma explícita
    • El programa recibe n cantidad de números enteros por entrada estándar
    • El programa da el resultado de la operación
*/

#import "Header.h"

int main()
{
    int n = 0; // n cantidad de números enteros opr entrada estándar
    int *operands = (int *)malloc(n * sizeof(int));
    int operation = 0;

    clean(1);

    // Interfaz para elección de la operación a realizar
    while (operation != 1 || operation != 2)
    {
        printf("¿Qué operación desea realizar?\n");
        printf("1) Suma\n");
        printf("2) Resta\n");
        printf("\n------------------------------------------------------------\n");
        scanf("%i", &operation);

        if (operation == 1 || operation == 2)
        {
            clean(1);
            break;
        }
        else 
        {
            printf("\nError: Escriba 1 para sumar o 2 para restar.\n");
            clean(1);
        }
    }

    // Interfaz para elección de la n cantidad de números enteros a recibir
    while (n < 2)
    {
        printf("¿Cuántos números enteros quiere operar?\n");
        printf("\n------------------------------------------------------------\n");
        scanf("%i", &n);

        if (n >= 2)
        {
            clean(1);
            break;
        }
        else
        {
            printf("\nError: Se requieren 2 operandos o más.\n");
            clean(1);
        }
    }
    
    while (n)
    {
        printf("Introduzca %i operandos", n);
        printf("\n------------------------------------------------------------\n");

        for (int i = 1; i <= n; i++)
        {
            printf("%d: ", i);
            scanf("%i", &operands[i]);
        }

        clean(1);
        break;
    }

    // Operatoria
    int result = operands[0]; 

    if (operation == 1) for (int i = 1; i <= n; i++) result += operands[i];
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == 1) result = operands[i];
            else result -= operands[i];
        }
    }

    printf("El resultado es: %i \n", result);
    clean(1);

    return 0;
}