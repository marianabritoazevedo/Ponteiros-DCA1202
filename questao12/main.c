#include <stdio.h>
#include <stdlib.h>

int funcao (int a){
    return a + 1;
}

int funcao1 (int (*f)(int)){
    printf("valor = %d", f(5));
}

int main()
{
    funcao1 (funcao);
    return 0;
}

//É um ponteiro que guarda a informação de toda uma área de código.
//Segundo a PUC-RS, ele serve para definir a função que deverá ser executada sem que haja a necessidade de escrever explicitamente seu nome.

