#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x[4]; //tipo int ocupa 4 bytes

    printf("%d\n", x); //endere�o inicial

    printf("%d\n", x+1);
    printf("%d\n", x+2);
    printf("%d\n", x+3);

    char x[4]; //tipo char ocupa 1 byte

    printf("%d\n", x); //endere�o inicial

    printf("%d\n", x+1);
    printf("%d\n", x+2);
    printf("%d\n", x+3);

    float x[4]; //tipo float ocupa 4 bytes

    printf("%d\n", x); //endere�o inicial

    printf("%d\n", x+1);
    printf("%d\n", x+2);
    printf("%d\n", x+3);

    double x[4]; //tipo int ocupa 8 bytes

    printf("%d\n", x); //endere�o inicial

    printf("%d\n", x+1);
    printf("%d\n", x+2);
    printf("%d\n", x+3);

    return 0;

    //O programa segue a mesma l�gica da quest�o anterior.
    //Entretanto, o tamanho do tipo int difere do apresentado na suposi��o(2 bytes).
}
