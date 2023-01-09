#include <stdio.h>

// PROCEDIMIENTOS : void

/*  Comentario de varias lineas
este es un codigo permite el calcula de la tabla de conversion de temperatura
*/
// PROCEDIMIENTOS 
void tableTemperaturaWhile( )
{
    // Declaci�n de variables
    int fahr, celsius, lower, upper, step;
    
    // Inicializaci�n de variables
    lower = 0 ;     /* l�mite inferior de la tabla de temperaturas */
    upper = 300;    /* l�mite superior */
    step  = 20 ;    // tama�o del incremento
    fahr  = lower;
    
    printf("fahr \t celsius \n");

    //Buble repetitivos
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d \t %d \n", fahr, celsius);
        fahr = fahr + step;
    }

    // fahr   celsius 
    // 0   xx
    // 20
    // 40
    // 60
    // ..
    // 300
    // 320  .... no se ejecuto
}

//PROCEDIMIENTOS con parametros
void tableTemperaturaWhileParam( int _step, int _upper)
{
    // Declaci�n de variables + Inicializaci�n
    int lower   = 0 ;         /* l�mite inferior de la tabla de temperaturas */
    int upper   = _upper;     /* l�mite superior */
    int step    = _step ;     // tama�o del incremento
    int fahr    = lower;
    int celsius = 0;

    printf("fahr \t celsius \n");
    //Buble repetitivos
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d \t %d \n", fahr, celsius);
        fahr = fahr + step;
    }
}

void main( )
{
    tableTemperaturaWhile( );
    printf(" ----------------- \n");
    tableTemperaturaWhileParam( 60, 300);
}