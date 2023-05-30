/******************************************************************************

Enzo Vega Grozdas AED 2 - Ex 2 ;

*******************************************************************************/
#include <stdio.h>
#define TAM 8

void main()
{
    int v[TAM], x, y, soma;
    for (int i=0; i<TAM; i++) {
        printf("Digite um um numero v[%d]: \n", i);
        scanf("%d", &v[i]);
    }

    printf("Digite a primeira posicao: \n");
    scanf("%d", &x);
    while(x < 0 || x >= TAM) {
        printf("Valor invalido. \n");
        scanf ("%d", &x);
    }
    printf("Digite a segunda posicao: \n");
    scanf("%d", &y);
    while(y < 0 || y >= TAM) {
        printf("Valor invalido. \n");
        scanf ("%d", &y);
    }

    soma = v[x] + v[y];
    printf("A soma das duas posicoes e: %d", soma);
}
