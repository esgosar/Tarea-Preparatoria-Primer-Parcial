/*
    • Solicitar "n", la cantidad de términos a mostrar de la serie Fibonacci
    • Computar la serie de fibonacci hasta en enésimo término
    • Devolver los n términos.
*/

#import "Header.h"

int main()
{
    int n;
    int a = 0;
    int i = 1;
    int o;
    //Interfaz para solicitar n
    interface("CALCULADORA DE LA SERIE DE FIBONACCI", "¿Cuántos términos desea obtener?");
    scanf("%i", &n);
    clean(1);

    // Operatoria
    for(int c = 1; c <= n; c++)
    {
        c == n ? printf("%i\n", o) : printf("%i, ", o);
        o = a + i;  // computo del siguiente número
        a = i;  // reasignación de variables para el siguiente computo
        i = o;
    }
    clean(3);
    
    return 0;
}