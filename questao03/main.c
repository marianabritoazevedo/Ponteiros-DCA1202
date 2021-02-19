#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=3, j=2, *p, *q;

    p = i; // LEGAL, porém com aviso: p recebe o conteúdo de i, há conversão do tipo de i para funcionar
    q = &j; // LEGAL: q recebe o endereço de j
    p = &*&i; // LEGAL: recupera o endereço do conteúdo do endereço de i, porém, não possui muito sentido sintático
    //i = (*&)j; // ILEGAL, como possui parênteses, será uma operação a ser feita antes das outras, e a expressão *& sem estar associada a uma variável é considerada inválida
    i = *&j; // LEGAL: i recebe o conteúdo do endereço de j 
    i = *&*&j; // LEGAL: i recebe o endereço do conteúdo do endereço do conteúdo de j, ou seja, ele recebe o conteúdo que está no endereço de j, que no caso, poderia ser qualquer valor inteiro armazenado nessa variável
    q = *p; // LEGAL, porém com aviso: mesma situação da expressão p = i
    i = (*p)++ + *q; // LEGAL: faz a operação com o conteúdo de p + conteúdo de q, e ao final, realiza a operação *p = *p + 1
    return 0;
}
