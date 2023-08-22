/*
    • El usuario introduce una cantidad de millas por galón.
    • El programa convierte las millas por galón a kilómetros por metro.
    • Se redondea el resultado a dos puntos decimales.
*/

#import "Header.h"

int main()
{
    float value;
    float galInL = 4.54609188;
    float miInKm = 1.609344;

    interface("DE MILLAS/GALÓN A KILÓMETROS/METRO", "Introduzca la cantidad a convertir (mi/gal)");
    scanf("%f", &value);
    clean(1);
    // Operatoria
    value = value * miInKm / galInL;
    printf("%.2f km/m\n", value);

    clean(3);
    return 0;
}