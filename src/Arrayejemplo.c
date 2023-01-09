#include <stdio.h>
#include <string.h>
//#define TAM =20

int main( )
{
    char Nombre[20] = "pat_mic";

    printf("\n La cadena es: %s ", Nombre);
    printf("\n La cadena es: %20s ", Nombre);
    printf("\n La cadena es: %-20s ", Nombre);
    printf("\n La cadena es: \r %s ", Nombre);

    int len = strlen(Nombre);
    printf("\n La long es: %i ", len);

    printf("Salida for: \n");
    for (int i = 0; i < strlen(Nombre); i++)
        printf("\n %c ", Nombre[i]);

    int i=0;
    printf("Salida while: \n");
    while (i < len)   // Nombre[i] != '\0'
    {
        printf("\n %c ", Nombre[i]);
        i++;
    }
    
    i=0;
    printf("Salida while2: \n");
    while (Nombre[i] != '\0')  
    {
        printf("\n %c ", Nombre[i++]);
    }
    return 0;
}