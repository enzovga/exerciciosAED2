/******************************************************************************

Enzo Vega Grozdas AED 2 - Ex 1 ;

*******************************************************************************/
#include <stdio.h>
#define TAM 10

void main()
{
    float v[TAM], quadrado[TAM];

    for (int i=0; i<TAM; i++) {
        printf("Digite um numero para v[%d]: ", i);
        scanf("%f", &v[i]);
    }

    for (int i=0; i<TAM;i++){
        quadrado[i] = (v[i] * v[i]);
        printf("o valor do vetor v[%d]: %.1f e o seu quadrado e: %.1f\n", i, v[i], quadrado[i]);
    }
}