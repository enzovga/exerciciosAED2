/******************************************************************************

AED 2; Enzo Vega Grozdas; 2AN

*******************************************************************************/
#include <stdio.h>

void main() {
	int carrosVendidos;
	double salarioFinal, valorTotal, salarioFixo, valorPorCarro;
	
	printf("Digite o numero de carros que você vendeu.\n");
	scanf("%d", &carrosVendidos);
	printf("Digite o valor total de carros vendidos por voce, seu salario fixo, e o valor que voce recebe por carro, em ordem.");
	scanf("%lf %lf %lf", &valorTotal, &salarioFixo, &valorPorCarro);
	
	salarioFinal = (valorTotal * 0.05) + salarioFixo + (carrosVendidos * valorPorCarro);
	printf("%lf\n",salarioFinal);
}

