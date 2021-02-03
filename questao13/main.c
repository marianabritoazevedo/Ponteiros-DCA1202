#include <stdio.h>
#include <stdlib.h>

//função para realizar troca entre conteúdo de duas variáveis
void troca(float *a, float *b){
  float aux;
  aux = *a;
  *a = *b;
  *b = aux;
}

int main(void) {
  int n;
  scanf("%d", &n);
  float *vetor;
  vetor = malloc(n * sizeof(float)); //alocação de memória dinâmica
  for(int i = 0; i < n; i++){
    scanf("%f", &vetor[i]);
  }
  for(int i = 0; i < n-1; i++){
    for(int j = i+1; j<n; j++){
      if(vetor[i] > vetor[j]){ //comparação realizada para fazer processo de ordenação em ordem crescente
        troca(&vetor[i], &vetor[j]); 
      }
    }
  }
  for(int i = 0; i < n; i++){
    printf("%f\n", vetor[i]);
  }
  free(vetor); //liberação da memória
  return 0;
}