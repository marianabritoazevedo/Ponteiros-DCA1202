#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pulo[] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",*(pulo+2)); //valor na posi��o 2, partindo do 0
    printf("%d\n",*(pulo+4)); //valor na posi��o 3, partindo do 0
    printf("%d\n",(pulo+4)); //endere�o da posi��o 3, partindo do 0
    printf("%d\n",(pulo+2)); //endere�o da posi��o 2, partindo do 0

    return 0;
}

/* Portanto, as express�es s�o:
    *(pulo+2)
    pulo+2
*/
