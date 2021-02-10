#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pulo[] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",*(pulo+2)); //valor na posição 2, partindo do 0
    printf("%d\n",*(pulo+4)); //valor na posição 3, partindo do 0
    printf("%d\n",(pulo+4)); //endereço da posição 3, partindo do 0
    printf("%d\n",(pulo+2)); //endereço da posição 2, partindo do 0

    return 0;
}

/* Portanto, as expressões são:
    *(pulo+2)
    pulo+2
*/
