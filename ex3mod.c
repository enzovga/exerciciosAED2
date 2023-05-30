/******************************************************************************

Enzo Vega Grozdas AED 2 - Ex 3 Mod ;

*******************************************************************************/
#include <stdio.h>

int primo (int x) {
  int return = 1;
  for (int i=2; i<= x/2; i++)
    if (x%i==0) return = 0; 

  return return;
}
int somaPrimo (int n) {
    int soma=0, k=2;
    while (n>0) {
        if (primo (k)) {
            soma=soma+k;n--; 
            printf ("\nPrimo=%d", k);
        }
        k++;
    }
    return soma;
}

int main(){
    int n, soma;
    printf("Quantos primos quer somar ? ");
    scanf ("%d", &n);
    soma = somaPrimo (n);
    printf ("\nSoma=%d", soma);
    return 0;
}
