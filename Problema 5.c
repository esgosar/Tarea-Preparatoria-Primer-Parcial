/*
CONVERTIDOR DE GRADOS CELCIUS-FAHRENHEIT
- Seleccionar la opción de conversión
- Convertir los grados 
*/

#import "Header.h"


float conversion(int election)
{
    float degrees;

    while (election)
    {
        printf("Introduzca los grados a convertir\n");
        printf("\n------------------------------------------------------------\n");
        scanf("%f", &degrees);

        if (election == 1)
        {
            if (degrees >= -273.15)
            {
                degrees = degrees * 9/5 + 32;
                break;
            }
            else
            {
                printf("\nError: No existe temperatura menor a -273.15 grados Celsius.\n");
                clean(2);
            }
        }
        else if (election == 2)
        {
            if (degrees >= -459.67)
            {
                degrees = (degrees - 32) * 5/9;
                break;
            }
            else
            {
                printf("\nError: No existe temperatura menor a -459.67 grados Fahrenheit.\n");
                clean(2);
            }
        }    
    }

    return degrees;
}

int main ()
{
    int election;
    float result;

    // Interfaz para el 
    clean(1);
    while (election != 1 || election != 2)
    {
        printf("CONVERTIDOR DE TEMPERATURA\n\n");
        printf("¿Qué desea convertir? \n");
        printf("1) De grados Celsius a Fahrenheit\n");
        printf("2) De grados Fahrenheit a Celsius\n");
        printf("\n------------------------------------------------------------\n");
        scanf("%i", &election);

        if (election == 1 || election == 2)
        {
            clean(1);
            break;
        }
        else 
        {
            printf("\nError: Escriba 1 o 2 para elejir una opción.\n");
            clean(2);
        }
    }

    result = conversion(election);
    clean(1);

    printf("Resultado: %f\n", result);
    clean(3);
    
    return 0;
}