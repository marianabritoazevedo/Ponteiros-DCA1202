#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gc.h"


int main(){

	clock_t t1_inicial, t1_final, t2_inicial, t2_final;
	
	long int n = 10000000;
	int *p;
	
	t1_inicial = clock();
	
	//alocação dinâmica usando malloc/free
	for (long int i = 0; i<=n; i++){
		p = malloc(sizeof(int));
		free(p);
	}
	
	t1_final = clock() - t1_inicial;
	
	t2_inicial = clock();
	
	//alocação usando a função GC_MALLOC usando a biblioteca libgc-dev
	for (long int i = 0; i<=n; i++){
		p = GC_MALLOC(sizeof(int));
	}
	
	t2_final = clock() - t2_inicial;
	
	
	printf("Tempo de execução: %lf", ((double)t1_final)/((CLOCKS_PER_SEC/1000)));
	printf("\n");
	printf("Tempo de execução: %lf", ((double)t2_final)/((CLOCKS_PER_SEC/1000)));
	printf("\n");
	return 0;
}
