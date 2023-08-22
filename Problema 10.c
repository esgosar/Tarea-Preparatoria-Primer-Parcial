/*
    • Mostrar un menú para calcular:
        - El volumen de un cubo
        - El volumen de una esfera
        - El volumen de una pirámide de base triangular
        - El volumen de una pirámide de base cuadrada

    • Solicitar al usuario los datos necesarios para calcular su elección
    • Mostrar el resultado
*/

#import "Header.h"
#include <math.h>

int main()
{
    int option;
    float volume;
    float variable;

    interface("CALCULADOR DE VOLUMEN", "1) Cubo\n2) Esfera\n3) Pirámide triangular\n4) Pirámide cuadrada");
    scanf("%d", &option);
    clean(1);

    switch(option)
    {
        case 1:
            interface("VOLUMEN DE UN CUBO", "Introduzca el valor de un lado del cubo");
            scanf("%f", &variable);

            volume = pow(variable, 3);

            break;
        case 2:
            interface("VOLUMEN DE UNA ESFERA", "Introduzca el valor del radio de la esfera");
            scanf("%f", &variable);

            volume = (4 * 3.141592654 * pow(variable, 3))/3;

            break;
        case 3:
            interface("VOLUMEN DE UNA PIRÁMIDE TRIANGULAR", "Introduzca el valor de un lado de la pirámide");
            scanf("%f", &volume);

            interface("VOLUMEN DE UNA PIRÁMIDE TRIANGULAR", "Introduzca el valor de la altura de la pirámide");
            scanf("%f", &variable);

            volume = (sqrt(3) * pow(volume, 2) * variable)/12;

            break;
        case 4:
            interface("VOLUMEN DE UNA PIRÁMIDE CUADRADA", "Introduzca el valor de un lado de la pirámide");
            scanf("%f", &volume);

            interface("VOLUMEN DE UNA PIRÁMIDE CUADRADA", "Introduzca el valor de la altura de la pirámide");
            scanf("%f", &variable);

            volume = (pow(volume, 2) * variable)/3;

            break;
        default:
            // Here should be the break and come back again.
            break;
    }

    clean(1);
    printf("El volumen es de %f\n", volume);
    clean(3);

    return 0;
}