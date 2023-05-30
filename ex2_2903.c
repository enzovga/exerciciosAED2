/******************************************************************************

Enzo Vega Grozdas AED 2 - Ex 2 29.03 ;

*******************************************************************************/
#include <stdio.h>

int verificarIntervalo(int, int, int);

int main(){

	int x, maximo, minimo;
	printf("Insira o valor:");
	scanf("%d", &x);
	printf("Insira o valor maior do intervalo: ");
	scanf("%d", &maximo);
	printf("Insira o valor menor do interalo: ");
	scanf("%d", &minimo);

	if(verificarIntervalo(maximo, minimo, x))
		printf("\nO valor %d esta dentro do intervalo de %d ate %d\n", x, minimo, maximo);
	else
		printf("\nO valor %d esta fora do intervalo de %d ate %d\n", x, minimo, maximo);

	return 0;
}

int verificarIntervalo(int maximo, int minimo, int x){
	if(x>minimo && x<maximo)
		return 1;
	else
		return 0;
}
