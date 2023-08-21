/*
- Solicite al usuario un rango de números específicos
- Contar la cantidad de números pares en el rango dado
- Mostrar la cantidad de números pares encontrados
*/

#import "Header.h"

bool isEven(int number)
{
    bool response;
    number % 2 == 0 ? response = true : (response = false);
    return response;
}

int main()
{
    int min;
    int max;

    int counter = 0;

    clean(0);
    printf("CONTADOR DE NÚMEROS PARES\n");
    printf("Introduzca un rango de números específicos\n");
    printf("\n------------------------------------------------------------\n");
    printf("Desde: ");
    scanf("%i", &min);
    printf("Hasta: ");
    scanf("%i", &max);

    while(min && max)
    {
        if (min == 0)
        {
            if (min <= max) min++;
            if (min >= max) min--;
        }

        if (isEven(min) == true) counter ++;
        
        
        if (min == max) break;
        else if (min < max) min++;
        else if (min > max) min--;
    }

    clean(1);
    printf("Hay %i números pares.\n", counter);
    clean(3);


    return 0;
}