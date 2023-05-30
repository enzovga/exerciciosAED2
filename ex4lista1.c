/******************************************************************************

Enzo Vega Grozdas AED 2 - Ex 4 ;

*******************************************************************************/
#include <stdio.h>

int main()
{
    int qtdMacas;
    float valorMacas, valorTotal;

    printf("Digite o total de macas compradas: \n");
    scanf("%d", &qtdMacas);

    if(qtdMacas < 12)
        valorMacas = 1.30;
    else valorMacas = 1.00;

    valorTotal = valorMacas * qtdMacas;
    printf("O valor das macas e: %.2f", valorTotal);

    return 0;
}