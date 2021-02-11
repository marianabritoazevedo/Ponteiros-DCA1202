#include <stdio.h>

int main(void) {
  float aloha[10], coisas[10][5], *pf, value = 2.2;
  int i=3;
  aloha[2] = value; //comando válido, irá adicionar o valor 2.2 na terceira posição do vetor aloha

  scanf("%f", &aloha); //gera uma observação, entretanto, é um comando válido. Ele irá realizar a leitura de um valor do tipo float que será armazenado no endereço do primeiro elemento de aloha, ou seja, em aloha[0]

  //aloha = value; nesse caso, não é possível guardar o valor de uma variável em um vetor sem informar a posição do vetor

  printf("%f", aloha); //irá imprimir o valor 0.000, visto que não foi indicada a posição do vetor na hora da impressão

  coisas[4][4] = aloha[3]; //comando válido, uma posição da matriz coisas irá receber um elemento da matriz aloha

  //coisas[5] = aloha; comando inválido, não é possível armazenar um vetor em uma linha de matriz

  //pf = value; comando inválido, como é um valor do tipo float, é preciso colocar um & na frente para receber o endereço dessa variável, ou um * para receber seu conteúdo

  pf = aloha; //comando válido, como é um vetor, não é preciso colocar o & na frente. pf irá receber o endereço do primeiro elemento do vetor aloha

}