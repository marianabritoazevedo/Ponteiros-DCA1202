#include <stdio.h>
#include <stdlib.h>

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet; //f recebe o endereço do primeiro elemento de vet [PERGUNTAR]
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
    printf("\ni = %d ",i); //imprime valor do contador i
    printf("vet[%d] = %.1f ",i, vet[i]); //imprime o elemento encontrado na posição i do vetor
    printf("*(f + %d) = %.1f ",i, *(f+i));  //irá imprimir o conteúdo armazenado no endereço da posição i do ponteiro f
    printf("&vet[%d] = %X ",i, &vet[i]); //irá imprimir o endereço da posição i do vetor, para isso, é preciso colocar o & 
    printf("(f + %d) = %X ",i, f+i); //irá imprimir o endereço da posição i do ponteiro, e por ser um ponteiro para float, não é preciso colocar o & para imprimir seu endereço
  }
}