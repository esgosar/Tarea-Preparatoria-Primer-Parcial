/*
- Recibir un ángulo ingresado por el usuario
- Determinar el seno del ángulo a partir de su serie de Taylor
*/

#import "Header.h"
#include <math.h>

float factorial(float expression)
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

float sinus(float angle)
{
    float resultado;

    for (int n = 0; n <= 10; n++) resultado += pow(-1, n)*pow(angle, 2 * n + 1)/factorial(2 * n + 1);

    return resultado;
}

int main ()
{
    float angle;
    
    clean(1);
    
    // Interfaz para el ingreso de la cadena
    printf("Seno del ángulo a partir su serie de Taylor\n");
    printf("Escriba el ángulo: \n");
    printf("\n------------------------------------------------------------\n");
    scanf("%f", &angle);
    clean(1);
    printf("\nNúmero de caracteres: %f\n", sinus(angle));
    
    clean(3);

    return 0;
}
