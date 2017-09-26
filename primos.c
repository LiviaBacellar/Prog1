/****************************************************
* Trab 2 : Numeros Primos
* Nome: Lívia Beraldo de Brito
* Matricula: 0050015282
* Professor: Alex Salgado
*****************************************************/
#include <stdio.h>

int main ()
{
    int i,cont,n,again;
    i;
    cont;

    printf("Ola, meu nome eh Livia Brito e vou calcular numeros primos\n");

    do
    {
    printf("Entre com um numero inteiro positivo:\n");
    scanf("%d", &n);}
    while(n<=0);
    i=2;
    cont=1;

    if(n<=1)
    cont=0;

    while (cont ==1 && i<=n/2)
        {
        if(n%i ==0)
            cont=0;
        i=i++;
    }

    if(cont==1)
        printf("%d e primo\n", n);
    else
        printf("%d nao e primo\n", n);

        printf("\nDeseja continuar?(1-Sim/2-Nao)");
        scanf("%d", &again);

    while(again==1);

    system("pause");
    return 0;
}
