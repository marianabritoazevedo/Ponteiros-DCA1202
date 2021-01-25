#include <stdio.h>
#include <stdlib.h>

int main()
{
    //&: retorna o ENDEREÇO da variável
    //*: recupera o CONTEÚDO DO ENDEREÇO

    float i=3,j=5;
    float *p, *q;
    p = &i; //guardando o endereço de i em p
    q = &j; //guardando o endereço de j em q

    p == &i; // p é igual ao endereço de i
    *p - *q; // conteúdo de p - conteúdo de q = 3 - 5 = -2
    **&p; // 3

    printf("%i",**&p);
    printf ("\n");

    3 - *p/(*q) + 7; // 3 - 3/5 + 7
    printf("%f ", 3 - *p/(*q) + 7);
    return 0;

}


