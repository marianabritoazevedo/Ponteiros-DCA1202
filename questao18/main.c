#include <stdio.h>
#include <stdlib.h>

void multiplicacao(int **A, int **B, int **C, int la, int ca, int cb);

int main()
{
    int **A, **B, **C, la, ca, cb; 
    //OBS.: ca (colunas de A) possui o mesmo valor que lb (linhas de B), portanto, a variável lb não precisa ser declarada

    scanf("%d", &la);
    scanf("%d", &ca);
    scanf("%d", &cb);

    //alocando blocos auxiliares de A, B e C
    A = malloc (la * sizeof(int*));
    B = malloc (ca * sizeof(int*));
    C = malloc (la * sizeof(int*));

    //alocando linhas de A, B e C
    A[0] = malloc(ca*la*sizeof(int));
    B[0] = malloc(cb*ca*sizeof(int));
    C[0] = malloc(cb*la*sizeof(int));

    //fixa os ponteiros das matrizes A, B e C
    for(int i = 1; i < la; i++){
      A[i] = A[i-1] + ca;
    }
    for(int i = 1; i < ca; i++){
      B[i] = B[i-1] + cb;
    }
    for(int i = 1; i < la; i++){
      C[i] = C[i-1] + cb;
    }

    //Leitura dos valores das matrizes A e B
    for (int i = 0; i<la; i++){
        for (int j = 0; j<ca; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i<ca; i++){
         for (int j = 0; j<cb; j++){
             scanf("%d", &B[i][j]);
        }
    }
    multiplicacao(A, B, C, la, ca, cb);
    //liberação das matrizes A, B e C
    free(A[0]); 
    free(B[0]);
    free(C[0]);
    //liberação dos blocos auxiliares A, B e C
    free(A); 
    free(B);
    free(C);
    return 0;
}

void multiplicacao(int **A, int **B, int **C, int la, int ca, int cb){
  //Operação para calcular multiplicação de matrizes
  for(int i = 0; i < la; i++){
    for(int j = 0; j < cb; j++){
      int soma = 0;
      for(int k = 0; k < ca; k++){
        soma = soma + A[i][k] * B[k][j];
      }
      C[i][j] = soma;
    }
  }

  //imprimindo a matriz C
  for(int i = 0; i < la; i++){
    for(int j = 0; j < cb; j++){
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }
}