/*
    Crea un programa en C que realice una encriptación César simple en un mensaje.
    • Solicitar al usuario que ingrese un mensaje de texto en mayúsculas (sin espacios ni caracteres especiales).
    • Solicitar un número fijo de desplazamientos.
    • Modificar el mensaje de texto ingresado.
    • Mostar el texto modificado.
*/

#import "Header.h"

int main()
{
    char text[140] = " ";
    char newT[140];
    int n;

    int i = 0;
    int j = 0;

    interface("ENCRIPTACIÓN CÉSAR SIMPLE", "Introduzca un mensaje de texto");
    scanf("%s", text);

    while (text[i] != '\0')
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            i++;
        }
        else if (text[i] <= 'A' || text[i] >= 'Z')
        {
            printf("\nError: Ingrese un mensaje de texto en mayúsculas (sin espacios ni caracteres especiales).\n");
            clean(3);
            exit(0);
        }
    }

    interface("ENCRIPTACIÓN CÉSAR SIMPLE", "Introduzca un número de desplazamientos");
    scanf("%i",  &n);

    i = 0;
    while (text[i] != '\0')
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            while (text[i] >= 'A' && text[i] <= 'Z')
            {
                newT[j] = text[i] + n;
                i++;
                j++;
            }
        }
    }

    clean(1);
    printf("%s\n", newT);
    clean(3);
    return 0;
}