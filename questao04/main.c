#include <stdio.h>
#include <stdlib.h>

int main()
{
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

    /* (a)
    valor = 10;
    p1 = &valor; // p1 recebe o endere�o de valor
    *p1 = 20; // o conte�do de p1/valor � alterado
    printf("%d \n", valor); // 20
    */

    /* (b)
    temp = 26.5;
    p2 = &temp; // p2 recebe o endere�o de temp
    *p2 = 29.0; // o conte�do de p2/temp � alterado
    printf("%.1f \n", temp);
    */

    /* (c)
    p3 = &nome[0]; // p3 recebe o endere�o de nome[0], que � "P"
    aux = *p3; // aux recebe o conte�do de p3
    printf("%c \n", aux);
    */

    /* (d)
    p3 = &nome[4]; // p3 recebe o endere�o de nome[4]
    aux = *p3; // aux recebe o conte�do de p3, que � "e"
    printf("%c \n", aux);
    */

    /* (e)
    p3 = nome; // p3 recebe nome (s� a primeira posi��o do vetor)
    printf("%c \n", *p3);
    */

    /* (f) */
    p3 = p3 + 4; // o valor de p3 n�o foi atribu�do inicialmente
    printf("%c \n", *p3);


}
