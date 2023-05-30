/******************************************************************************

Enzo Vega Grozdas AED 2 - Ex 5 ;

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main() {

    int i, array[6];

    for(i = 0; i < 6; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &array[i]);
    }

            for(i = 5; i >= 0; i--){
                printf("%d", array[i]);
            }

    return 0;

}