#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	int tam, i;
	int *vetor;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Escolher o tamanho do vetor: ");
	scanf("%d", &tam);
	
	vetor = (int*) malloc(sizeof(int)*tam);
	
	printf("\n\n");
	
	for (i = 0; i < tam; i++){
		printf("%d ",vetor[i]);
		vetor[i] = pow(2, i);
		printf("Posição %d:\t %d\n", i, vetor[i]);
	}
	printf("\n\n[ ");
	for (i=0; i < tam; i++){
		printf("%d ",vetor[i]);
	}
	printf("]\n\n");
	system("Pause");
	return 0;
}
