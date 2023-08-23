/**
    • El usuario ingresa una cadena de texto
    • El programa cuenta la cantidad de caracteres en la cadena
    • El programa muestra la cantidad de caracteres 
*/

#import "Header.h"

int main ()
{
    char text[140];
    int counter = 0;

    
    // Interfaz para el ingreso de la cadena
    clean(0);
    printf("CONTADOR DE CARACTERES\n");
    printf("Escriba a continuación: \n");
    printf("\n------------------------------------------------------------\n");
    scanf("%139[^\n]", text);

    // Operatoria
    for (int i = 0; text[i] != '\0'; i++) if (text[i] != ' ') counter ++; 
    printf("\nNúmero de caracteres: %i\n", counter);
    
    clean(3);

    return 0;
}
