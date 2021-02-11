//Percebe-se que o algoritmo com a implementação da função qsort() possui um tempo de execução menor. Isso ocorre porque ele utiliza o método divisão e conquista, sendo assim um algoritmo recursivo e rodando o programa em uma menor quantidade de tempo

//-------Q13 com função para medição de tempo de execução-------------//

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h> //inclusão de clock() 

//função para realizar troca entre conteúdo de duas variáveis
void troca(float *a, float *b){
  float aux;
  aux = *a;
  *a = *b;
  *b = aux;
}

int main(void) {
  int n;
  clock_t t_inicial, t_final, tempo;
  scanf("%d", &n);
  float *vetor;
  vetor = malloc(n * sizeof(float)); //alocação de memória dinâmica
  
  for(int i = 0; i < n; i++){
    scanf("%f", &vetor[i]);
  }

  t_inicial = clock();

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

  t_final = clock();
  tempo = t_final - t_inicial;
  

  tempo = difftime(t_final, t_inicial);
  printf("Tempo de execucao: %lf", ((double)tempo)/((CLOCKS_PER_SEC/1000)));
  free(vetor); //liberação da memória
  return 0;
}*/

//-------Q14 com função para medição de tempo de execução-------------//

/*
#include <stdio.h>
#include <time.h> //inclusão de clock()      
#include <stdlib.h> //inclusão de qsort()


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
  clock_t t_inicial, t_final, tempo;
  scanf("%d", &n);
  float *vetor;
  vetor = malloc(n*sizeof(float)); //alocação de memória dinâmica para o ponteiro vetor
  for(int i = 0; i < n; i++){
    scanf("%f", &vetor[i]); //leitura dos valores do vetor
  }
  t_inicial = clock();
  qsort (vetor, n, sizeof(float), compare); //uso da função qsort para ordenação
  for(int i = 0; i<n; i++){
    printf ("%f ",vetor[i]);
  }
  t_final = clock();
  tempo = t_final - t_inicial;
  printf("Tempo de execucao: %lf", ((double)tempo)/((CLOCKS_PER_SEC/1000)));
  free(vetor);
  return 0;
}
*/
