#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[4], *p, x;

    p = mat + 1; //Válida, pois p vai receber o endereço do valor presente na posição 1 (partindo do 0)
    p = mat++; //Inválida

    p = ++mat; //Inválida
    x = (*mat)++; //Válida

    return 0;
}
