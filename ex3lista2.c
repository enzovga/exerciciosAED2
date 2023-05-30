/******************************************************************************

Enzo Vega Grozdas - 2AN - AED

*******************************************************************************/
#include <stdio.h>

void main()
{
    int array[6], i;
    
    printf("digite 6 valores inteiros:\n");
    for (i=0;i<6;i++) {
        scanf("%d",&array[i]);
    }
    
    for (i=5;i>=0;i--) {
        printf("%d\n",array[i]);
    }

}

