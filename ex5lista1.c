/******************************************************************************

Enzo Vega Grozdas AED 2 - Ex 5 ;

*******************************************************************************/
#include <stdio.h>

int main()
{
    float salarioFixo, valorVenda, valorComissao, salarioFinal;
    printf("Digite o salario do funcionario: \n");
    scanf("%f", &salarioFixo);

    printf("Digite o total das vendas do funcionario: \n");
    scanf("%f", &valorVenda);

    if(valorVenda <= 1500)
        valorComissao = 0.03;
    else valorComissao = 0.05;

    salarioFinal = salarioFixo + valorComissao * salarioFixo;

    printf("O salario final e: R$%.2f", salarioFinal);

    return 0;
}