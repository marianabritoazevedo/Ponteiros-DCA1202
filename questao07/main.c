#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[4], *p, x;

    p = mat + 1; //V�lida, pois p vai receber o endere�o do valor presente na posi��o 1 (partindo do 0)
    p = mat++; //Inv�lida

    p = ++mat; //Inv�lida
    x = (*mat)++; //V�lida

    return 0;
}

//As express�es s�o inv�lidas, pois n�o � poss�vel incrementar endere�o