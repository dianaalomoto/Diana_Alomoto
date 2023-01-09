#include <stdio.h>

void generarSerieSigno(int nroTerminos)
{
    for (int i = 0; i < nroTerminos; i++)
        printf("+ ");
}

void generarSerieSignoAlternos(int nroTerminos)
{
    for (int i = 0; i < nroTerminos; i++)
    {
        if(i%2==0)
            printf("+ ");
        else
            printf("- ");
    }
}

void showCuadrado(int tamano){
    for (int f = 0; f < tamano; f++)
    {
        for (int c = 0; c < tamano; c++)
            if((f==0) || (c==0) || (f==tamano-1) || (c==tamano-1))
                printf("+ ");
            else
                printf("  ") ;
        printf("\n");
    }
}
void showCuadradoSignoAlterno(int tamano){
    char car = '+';
    //int con=0;
    for (int f = 0; f < tamano; f++)
    {
        for (int c = 0; c < tamano; c++)
        {
            car = ((c+f)%2==0)?'+':'-';
            //car = ((con++)%2==0)?'+':'-';
            if((f==0) || (c==0) || (f==tamano-1) || (c==tamano-1))
                    printf("%c ",car);
            else
                printf("  ") ;
        }
        printf("\n");
    }
}

int main(void)
{
    int nroSigno=0;

    printf("Ingrese cantidad de signos: ");
    scanf("%i", &nroSigno);

    // generarSerieSigno(nroSigno);
    // printf("\n\n");
    // generarSerieSignoAlternos(nroSigno);    
    // printf("\n\n ");
    // showCuadrado(nroSigno);
    showCuadradoSignoAlterno(nroSigno);
    return 0;
}