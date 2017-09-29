/*
Escrever um programa que mostre a seguinte figura no alto da tela
xxxxx
x   x
x   x
x   x
xxxxx
*/

#include <stdio.h>

int main()
{
    int linhas, i;

    linhas = 5;

    for(i=1; i<=linhas; i++)
    {
        if ((i == 1) || (i == linhas))
        {
        printf("\nxxxxx");
        }
    else
    {
        printf("\nx    x");
    }
    }
    printf("\n");




    system("pause");
    return 0;
}
