#include <stdio.h>
int main(void)
{
    int a, b;
    printf("Introduce dos enteros separados por un espacio: \n");
    scanf("%i %i", &a, &b);

    if (a > b)
        printf("El mayor es %i", a);
    
    if (b > a)
            printf("El mayor es %i", b);
    if (b == a)
            printf("son iguales");

    // if (a>b)
    //     printf("El mayor es %i", a);
    // else
    //     if (b > a)
    //         printf("El mayor es %i", b);
    //     else
    //         printf("son iguales");
    printf("\n");
}