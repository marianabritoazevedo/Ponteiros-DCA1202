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

//� um ponteiro que guarda a informa��o de toda uma �rea de c�digo.
//Segundo a PUC-RS, ele serve para definir a fun��o que dever� ser executada sem que haja a necessidade de escrever explicitamente seu nome.

