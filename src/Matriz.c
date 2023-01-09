#include <stdio.h>
#include <string.h>
#define MAXTALLA 10

void vectorInterger()
{
    int a[10][5];
    float b[3][2][4];
    int i, j, k;
    int c[3][3] = { {1, 0, 0},
                    {0, 1, 0},
                    {0, 0, 1} };
    
    for (i=0; i<10; i++)
        for (j=0; j<5; j++)
            a[i][j] = 0;
     
    for (i=0; i<3; i++)
        for (j=0; j<2; j++)
            for (k=0; k<4; k++)
                b[i][j][k] = 0.0;
}
void matrizInteger()
{
    int edades[3][2] = {{1,2},{9,8},{14,21}};
    int filas = (sizeof(edades)/sizeof(edades[0]));
    int columnas = (sizeof(edades[0])/sizeof(edades[0][0]));

    system("clear");
    printf("filas: %i \n",filas);
    printf("columnas: %i \n",columnas);
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%i \t",edades[i][j]);
        }
        printf("\n");
    }
    system("pause");
}
void matrizString()
{
    char *libros[5][2];
    printf( "Por favor ingrese la siguiente información de los Libros: \n");
    char titulo[10] ,autor[10];
    for(int i = 0; i < 5; i++)
    {
        printf( "\n******* Libro ********:\n");
        printf( "Titulo: ");
        //getline(cin,titulo);
        scanf("%9s",titulo);
        printf( "Autor: ");
        scanf("%9s",autor);
        //getline(cin,autor);
        // libros[i][1] = autor;
        strcpy(libros[i][0] , &titulo);
    }

    system("pause");

}
int main(int argc, char const *argv[])
{
    matrizString();
    return 0;
}