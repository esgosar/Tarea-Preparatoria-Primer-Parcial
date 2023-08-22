/*
    • El usuario ingresa el número de filas de n asteriscos.
    • El programa muestra las filas siguiendo un patron n + 1 = n 
*/

#import "Header.h"

int main()
{
    int n;

    interface("PATRÓN DE ASTERISCOS", "Introduzca la cantidad de filas a mostrar");
    scanf("%d", &n);
    clean(1);
    for (int c = 1; c <= n; c++)
    {
        for (int i = 1; i <= c; i++) printf("*");
        printf("\n");
    }
    
    clean(3);
   
    return 0;
}