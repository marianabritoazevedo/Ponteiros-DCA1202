#include <stdio.h>

int main(void) {
  
  /*-----INICIO PROGRAMA 1------*/
  
  //neste programa, irá ser impresso o conteúdo armazenado no vetor + posição i. Dessa forma, teremos que será impresso, respectivamente, os valores 4 (conteúdo da posição 0), 9 (conteúdo da posição 1) e 13 (conteúdo da posição 2)

  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }

  /*-----FIM PROGRAMA 1-----*/

  /*-----INÍCIO PROGRAMA 2-----*/
  
  //neste programa, irá ser impresso o endereço em hexadecimal de cada posição do vetor + posição i, de forma a ir caminhando na memória. Assim, teremos que serão impressos endereços em hexadecimal com um incremento de +4 ao final, visto que, para andar o incremento +1 na memória, caminha-se o tamanho armazenado para uma variável do tipo int, que possui tamanho de 4 bytes.
  
  int vet2[] = {4,9,13};
  int i2;
  for(i2=0;i2<3;i2++){
  printf("%X ",vet2+i2);
  }

  /*------FIM PROGRAMA 2------*/
}