#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=5, *p; // i ocupa o endereço 4094 na memória
    p = &i; // p guarda o ENDEREÇO de i
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
    // p = 4094, que é o endereço em hexadecimal da variável i 
    // *p (conteúdo do endereço armazenado em p) + 2 = 5 + 2 = 7 
    // **&p (conteúdo do conteúdo do endereço armazenado em p) = 5 
    //3**p = 3 * 5 = 15, sendo 5 o conteúdo do endereço armazenado em p
    // **&p (conteúdo do conteúdo do endereço armazenado em p) + 4 = 5 + 4 = 9
    // o que será impresso: 4094 7 5 15 9
    return 0;
}
