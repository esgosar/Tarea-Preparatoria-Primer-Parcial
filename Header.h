#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Prototypes
float factorial(float expression);
int factorialInt(int expression);
float sinus(float angle);

void clean(int seconds)
{
    sleep(seconds);
    system("clear");
}

void interface(char *title, char *instruction)
{
    clean(0);
    printf("\n%s\n", title);
    printf("%s\n", instruction);
    printf("\n------------------------------------------------------------\n");
}