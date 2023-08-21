/*
    • El usuario ingresa una cadena de texto
    • El programa duplica cada caracter de la cadena
    • El progrma muestra la cadena de texto modificada
*/

#import "Header.h"

int main ()
{
    char text[140];

    // Interfaz para el ingreso de la cadena
    interface("MODIFICADOR DE TEXTO", "Escriba a continuación:");
    scanf("%139[^\n]", text);
    clean(1);

    // Operatoria
    for (int i = 0; text[i] != '\0'; i++) (text[i] != ' ' ? printf("%c%c", text[i], text[i]) : printf(" "));
    printf("\n");
    clean(3);
    
    return 0;
}
