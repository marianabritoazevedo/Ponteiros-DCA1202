#include <stdio.h>

int main(void) {
  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;

  /* (a) */
  valor = 10;
  p1 = &valor; // p1 recebe o endere�o de valor
  *p1 = 20; // o conte�do do endere�o � alterado, ou seja, valor recebe 20
  printf("%d \n", valor); // 20
  

  /* (b) */
  temp = 26.5;
  p2 = &temp; // p2 recebe o endere�o de temp
  *p2 = 29.0; // o conte�do do endere�o de p2 � alterado, ou seja, temp recebe 29.0
  printf("%.1f \n", temp);
  

  /* (c) */
  p3 = &nome[0]; // p3 recebe o endere�o de nome[0]
  aux = *p3; // aux recebe o conte�do de p3, que equivale ao primeiro caractere do vetor nome, ou seja, "P"
  printf("%c \n", aux);
  

  /* (d) */
  p3 = &nome[4]; // p3 recebe o endere�o de nome[4]
  aux = *p3; // aux recebe o conte�do de p3, que � "e"
  printf("%c \n", aux);
  

  /* (e) */
  p3 = nome; // p3 recebe nome, sendo o equivalente ao endere�o da primeira posi��o de nome, ou seja, "P"
  printf("%c \n", *p3);
    

  /* (f) */
  p3 = p3 + 4; // incrementa-se o endere�o de p3 em 4, ou seja, passa a apontar para p3[4], equivalente ao caractere "e"
  printf("%c \n", *p3);

  /* (g) */
  p3--; //decrementa-se o endere�o de p3 em 1, ou seja, passa a apontar para p3[3], equivalente ao caractere "t"
  printf("%c \n", *p3);

  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor; //p4 recebe o endere�o do primeiro elemento do vetor, ou seja, vetor[0]
  idade = *p4; //idade recebe o conte�do do endere�o de p4, ou seja, vetor[0] = 31
  printf("%d \n", idade);

  /* (i) */
  p5 = p4 + 1; //p5 recebe o endere�o de p4 com incremento +1, ou seja, o endere�o de vetor[1]
  idade = *p5; //idade recebe o conte�do do endere�o de p5, ou seja, vetor[1] = 45
  printf("%d \n", idade);

  /* (j) */
  p4 = p5 +1; //p4 recebe o endere�o de p5 com incremento +1, ou seja, o endere�o de vetor[2]
  idade = *p4; //idade recebe o conte�do do endere�o de p5, ou seja, vetor[2] = 27
  printf("%d \n", idade);

  /* (l) */
  p4 = p4 -2; //p4 decrementa em 2 seu endere�o, armazenando o endere�o de vetor[0]
  idade = *p4; //idade recebe o conte�do do endere�o de p4, ou seja, vetor[0] = 31
  printf("%d \n", idade);

  /* (m) */
  p5 = &vetor[2] - 1; //p5 recebe o endere�o de vetor[2] com decremento -1, armazenando o endere�o de vetor[1]
  printf("%d \n", *p5); //imprime o conte�do do endere�o de p5, ou seja, vetor[1] = 45

  /* (n) */
  p5++; //incremento do endere�o de p5 em 1, armazenando assim, o endere�o de vetor[2]
  printf("%d \n", *p5);//imprime o conte�do do endere�o de p5, ou seja, vetor[2] = 27
  return(0);
    
}
