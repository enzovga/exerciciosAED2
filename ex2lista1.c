/******************************************************************************

AED 2; Enzo Vega Grozdas

*******************************************************************************/

#include <stdio.h>

int main()
{
	int  total, nulo, branco, valido;
	
	printf("Digite o total de votos:");
	scanf("%d", &total);
	printf("Digite os votos nulos:");
	scanf("%d", &nulo);
	printf("Digite os votos brancos:");
	scanf("%d", &branco);
	
	valido = total - nulo - branco;
	
	printf("Percentual de nulos = %.2f \n", (nulo * 1.0) / total * 100);
	printf("Percentual de branco = %.2f \n", (branco * 1.0) / total * 100);
	printf("Percentual de valido = %.2f \n", (valido * 1.0) / total * 100);
	return 0;
}

