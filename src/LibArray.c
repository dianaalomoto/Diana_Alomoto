#include <stdio.h>
#include "../lib/utilitario.h"

int main(void)
{   printf("\n\n");

    char izq[]= "         "; 
    char der[]= "          "; 
    int  len  = sizeof(&der);
    for (int i = 0; i < len; i++)
    {
        izq[len-i] = der[i]= '+';
        printf("%s%s\n", izq,der); 
    }
    printf("_______|  |_______ :) pat_mic \n\n"); 
    
    
    
    // char nombre1[]="pato";

    // char nombre2[]="pato";

    // if(cmpString("pato1", "pato1")==0)
    //     printf("Son iguales");
    // else
    //     printf("NO son iguales");
   
   // cmpString();

//    // sumar 3 numeros
//     int a= getNumber("Ingresa nro1: ");
//     int b= getNumber("Ingresa nro2: ");
//     int c= getNumber("Ingresa nro3: ");
//     printf("La suma es : %i", a+b+c);
//     printf("\n\n\n");

}