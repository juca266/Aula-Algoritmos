#include<stdio.h>
#include<stdlib.h>

#define tam 5

struct Fila{
	int dados[tam];
	int primeiro;
	int ultimo;
};

struct Fila fila;

void inserir(int v){
	if(fila.primeiro == fila.ultimo){
		printf("\nOverflow");
		exit(1);
	}else{
		fila.dados[fila.ultimo] = v;
		fila.ultimo++;
	}
}

int excluir(){
	if(fila.primeiro == fila.ultimo){
		printf("\n Underflow");
		exit(1);
	}else{
		int i;
		for(i = 0; i < tam; i++){
			fila.dados[i] = fila.dados[i+1];
		}
		fila.dados[fila.ultimo] = 0;
		fila.ultimo--;
	}
}
