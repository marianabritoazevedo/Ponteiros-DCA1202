#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, *p, *q;

    p = i; // p recebe o conte�do de i
    q = &j; // q recebe o endere�o de j
    p = &*&i; // p recebe o endere�o de i ??
    i = (*&)j; // ILEGAL
    i = *&j; // i recebe o conte�do de j ??
    i = *&*&j; // i recebe o conte�do de j ??
    q = *p; // q recebe o conte�do de p
    i = (*p)++ + *q; // (conte�do de p + 1) + conte�do de q

    return 0;
}
