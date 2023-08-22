/*
    • Obtener un número ingresado por el usuario
    • Determinar si el número es par o impar
    • Mostrar el resultado
*/

#import "Header.h"

int main()
{
    int number;

    interface("DETERMINADOR PAR-IMPAR", "Introduzca un número entero");
    scanf("%d", &number);
    clean(1);
    number % 2 == 0 ? printf("Es par\n") : printf("Es impar\n");
    clean(3);

    return 0;
}