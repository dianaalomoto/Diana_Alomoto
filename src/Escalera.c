#include <stdio.h>

int main(void)
{
    int nivel=5;
    
    for (int i = 0; i < nivel*2; i++)
    {
        if (i%2==0)
        {
            printf("__\n");
        }
        else
        {
            for (int f = 0; f <= i; f++)
                printf(" ");
            printf("|");        
        }
    }
     printf("\n\n");
    return 0;
}
