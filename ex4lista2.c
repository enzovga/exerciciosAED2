/******************************************************************************

Enzo Vega Grozdas AED 2 - Ex 4 ;

*******************************************************************************/
#include <stdio.h>
#define TAM 10
int main()
{
    int v[TAM], max, index;
    for (int i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    for (int i=0; i<TAM; i++) {     

        if (v[i]>max){
            max = v[i];
            index = i;
        }

    }
    printf("\nO maior elemento é %d e está na posição %d", max, index);

    return 0;
}