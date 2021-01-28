#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, *p, *q;

    p = i; // p recebe o conteúdo de i
    q = &j; // q recebe o endereço de j
    p = &*&i; // p recebe o endereço de i ??
    i = (*&)j; // ILEGAL
    i = *&j; // i recebe o conteúdo de j ??
    i = *&*&j; // i recebe o conteúdo de j ??
    q = *p; // q recebe o conteúdo de p
    i = (*p)++ + *q; // (conteúdo de p + 1) + conteúdo de q

    return 0;
}
