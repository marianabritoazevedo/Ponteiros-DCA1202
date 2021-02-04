#include <stdio.h>      
#include <stdlib.h> //inclusão de qsort()

/*
qsort: função utlizada para ordenação
parâmetros:
  -> base: no nosso caso, variável vetor. Irá apontar para o primeiro elemento do array e é convertido em um ponteiro para void
  -> num: no nosso caso, variável num. Indica a quantidade de elementos do array apontado pela base ("vetor")
  -> size: no nosso caso, sizeof(float), calcula o número de bytes de cada elemento do array
  -> compare: função chamada repetidamente por qsort para comparar 2 elementos do ponteiro. Seja int compare (const void * a, const void * b), teremos que ela pode retornar 3 possibilidades de inteiro:
     -> 0: elemento "a" é equivalente ao elemento "b"
     -> 1: elemento "a" irá para depois do elemento "b" 
     -> -1: elemento "a" irá para antes do elemento "b"

  OBS.: originalmente, retorna valores ==0, >0 ou <0, entretanto, realizou-se essa adaptação uma vez que os elementos do array são do tipo float
*/

int compare (const void * a, const void * b)
{
  if(*(float*)a < *(float*)b){
    return -1;
  }else if(*(float*)a > *(float*)b){
    return 1;
  }else{
    return 0;
  }
}

int main ()
{
  int n;
  scanf("%d", &n);
  float *vetor;
  vetor = malloc(n*sizeof(float)); //alocação de memória dinâmica para o ponteiro vetor
  for(int i = 0; i < n; i++){
    scanf("%f", &vetor[i]); //leitura dos valores do vetor
  }
  qsort (vetor, n, sizeof(float), compare); //uso da função qsort para ordenação
  for(int i = 0; i<n; i++){
    printf ("%f ",vetor[i]);
  }
  free(vetor);
  return 0;
}