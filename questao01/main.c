#include <stdio.h>
#include <stdlib.h>

int main()
{
    //&: retorna o ENDERE�O da vari�vel
    //*: recupera o CONTE�DO DO ENDERE�O

    float i=3,j=5;
    float *p, *q;
    p = &i; //guardando o endere�o de i em p
    q = &j; //guardando o endere�o de j em q

    p == &i; // p � igual ao endere�o de i
    *p - *q; // conte�do de p - conte�do de q = 3 - 5 = -2
    **&p; // 3

    printf("%i",**&p);
    printf ("\n");

    3 - *p/(*q) + 7; // 3 - 3/5 + 7
    printf("%f ", 3 - *p/(*q) + 7);
    return 0;

}


