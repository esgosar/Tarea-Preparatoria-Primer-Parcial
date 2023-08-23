/*
    • El usuario introduce números no negativos separados por coma
    • Se asignan los números a una matriz
    • Definir una función que elimine números duplicados dentro de la matriz sin alterar el orden de la secuencia
    • Devolver la secuencia de números modificada
*/

#import "Header.h"
#include <string.h> 

// Función
int removeDuplicates(int arr[], int size)
{
    if (size <= 1) return size;

    int uniqueIndex = 1; // Indice para los elementos no duplicados.
    for(int i = 1; i < size; i++) // Recorrer toda la matriz
    {
        bool isDuplicate = false; // Inicializar propiedad de duplicado
        for (int j = 0; j < uniqueIndex; j++) // Se comparan todos recorridos de la matriz con el número en juicio
        {
            if (arr[i] == arr[j]) // Se comparan todos los número con el número en juicio.
            {
                isDuplicate = true; // Se determina duplicado
                break;  // No se asigna y se continua con el proceso superior.
            }
        }
        if (!isDuplicate)
        {
            arr[uniqueIndex++] = arr[i]; // En caso de que no sea duplicado se añade a la matriz transformada.
        }
    }
    return uniqueIndex;
}

int main()
{
    char text[140];
    int nums[50]; // Esta es la matriz de números, se inicializa a modo de poder convertir tanto una matriz introducida por el usuario o como constante.
    int index = 0;
    int i = 0;

    interface("LIMPIADOR DE REPETICIONES", "Introduzca una matrix de números");
    scanf("%139[^\n]", text);
    
    while (text[i] != '\0') // Recorrer el input hasta el final
    {   
        if (text[i] >= '0' && text[i] <= '9') // En caso de encontrar caracteres numéricos:
        {
            char numStr[10] = ""; // Se inicializa una cadena auxiliar.
            int j = 0; // Se inicializa el indice asociado con la cadena auxliar.

            while (text[i] >= '0' && text[i] <= '9')
            {   
                // Asignar solamente caracteres numérico a una cadena auxiliar.
                numStr[j] = text[i]; // Se asigna el caracter en la posición i del texto introducido a la caden numStr en la posición j
                i++; // Se corre una posición en el ciclo para repetir la operación anterior.
                j++; // Se corre una poisicón en la cadena numStr.
            }

            int num = atoi(numStr); // Convertimos la cadena de caracteres auxiliar a una matriz de núemros.
            nums[index++] = num; // Asignación continua
        }
        else if (text[i] == '[' || text[i] == ',' || text[i] == ' ' || text[i] == ']') i++; // En caso de caracteres especiales omitir.
        else // Manejo de inputs erroneos.
        {
            printf("Error: Introduzca una matriz como en el siguiente ejemplo:\n[1, 2, 5, 9, 0, 1, 1]");
            break;
        }
    }

    index = removeDuplicates(nums, index); // Ejecutando función deseada

    // Output en forma de matriz de la matriz transformada
    clean(1);
    printf("[");
    for (int j = 0; j < index; j++)
    {
        printf("%d", nums[j]);
        if(j < index - 1) printf(", ");
    }
    printf("]\n");
    clean(3);
    
    return 0;
}