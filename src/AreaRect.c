#include <stdio.h>

/**
 * @author  : pat_mic
 * @date    : 6.dic.2022
 * @details : Determinar el área de un rectángulo 
 */
int main()
{   //declarar e inicializar las variables
    int logitud =0, ancho=0, areaRect =0;
    
    printf("\n << Calula el area de un rectangulo >> \n ");
    printf("Ingrese la Logitud: ");
    scanf("%i", &logitud);

    printf("Ingrese la ancho: ");
    scanf("%i", &ancho);

    areaRect = logitud * ancho;

    printf("EL el area del rectangulo es: %i \n",areaRect);
    printf("EL el area del rectangulo de ancho %i y longitud %i es %i \n",ancho, logitud, areaRect);

    return 0;
}