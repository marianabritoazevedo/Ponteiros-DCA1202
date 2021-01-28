#include <stdio.h>
#include <stdlib.h>

int main()
{
    //&: retorna o ENDEREÇO da variável
    //*: recupera o CONTEÚDO DO ENDEREÇO

    int i=3,j=5;
    int *p, *q;
    p = &i; //guardando o endereço de i em p
    q = &j; //guardando o endereço de j em q
    p == &i; // comparando se p é igual ao endereço de i, e isto retorna o valor True
    *p - *q; // conteúdo de p - conteúdo de q = 3 - 5 = -2
    **&p; // Irá retornar o valor 3, que é o conteúdo armazenado no ponteiro p. Entende-se que um * irá se "cancelar" com um &
    printf("%d",**&p);
    printf ("\n");
    3 - *p/(*q) + 7; // 3 - 3/5 + 7 = 3 - 0 + 7 = 10
    printf("%d ", 3 - *p/(*q) + 7);
    return 0;

}


