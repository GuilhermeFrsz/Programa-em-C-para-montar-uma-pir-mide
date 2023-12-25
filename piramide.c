#include <cs50.h>
#include <stdio.h>
// o user pode decidir width e height entre 1 e 8


int main(void)
{
    int h;
    do {
        h = get_int(" Valor positivo: ");
        // h++;
    } while ( h < 1 || h > 8); 

    for ( int i = 0 ; i < h; i++)
    {
        for (int j = 0; j < h - i - 1; j++)
        {
            printf(" ");
        }
        for ( int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
