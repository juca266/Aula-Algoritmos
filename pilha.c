/*
implementação de pilha 
como uma lista dinâmica
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

//estrutura da pilha
struct Pilha{
	int dado;	
	struct Pilha *proximo;	
};

//definição de variáveis globais
typedef struct Pilha *pt_pilha;
pt_pilha pilha;
int op;

//prototipação
void menu_mostrar();
void menu_selecionar(int op);
void inserir(pt_pilha pilha, int dado);
int remover(pt_pilha pilha);
void mostrar(pt_pilha pilha);

//função principal
int main(){
	op = 1;
	
	setlocale(LC_ALL, "Portuguese");
	
	pilha = (pt_pilha) malloc(sizeof(struct Pilha));	
	pilha->dado = 0;
	pilha->proximo = NULL;	
	
	while(op != 0){
		system("cls");
		menu_mostrar();
		scanf("%d", &op);
		menu_selecionar(op);
	}
	system("Pause");
	return(0);
}

//função para exibir o menu de opções
void menu_mostrar(){	
	printf("\n\nEscolha uma das opções: \n\n");
	printf("1) Inserir na pilha\n");
	printf("2) Remover da pilha\n");
	printf("3) Mostrar pilha\n");
	printf("0) Sair\n\n");
}

//função para executar a opção escolhida no menu
void menu_selecionar(int op){
	int valor;
	switch (op){
		case 1:
			printf("\nInforme o valor ");
			scanf("%d", &valor);
			inserir(pilha, valor);
			break;
		case 2:
			printf("\n%d foi removido da pilha.\n", remover(pilha));
			system("Pause");
			break;
		case 3:
			mostrar(pilha);
			break;
	}
}

//função para inserir um elemento no final da pilha
void inserir(pt_pilha pilha, int valor){
	while(pilha->proximo != NULL){
		pilha = pilha->proximo;
	}
	pilha->proximo = (pt_pilha) malloc(sizeof(struct Pilha));
	pilha = pilha->proximo;
	pilha->dado = valor;
	pilha->proximo = NULL;
}

int remover(pt_pilha pilha){
	pt_pilha atual;
	int valor;
	atual = (pt_pilha) malloc(sizeof(struct Pilha));
	while(pilha->proximo != NULL){
		atual = pilha;
		pilha = pilha->proximo;
	}	
	valor = pilha->dado;
	atual->proximo = NULL;
	return valor;
}

void mostrar(pt_pilha pilha){
	system("cls");	
	while(pilha->proximo != NULL){
		printf("%d, ", pilha->dado);
		pilha = pilha->proximo;
	}
	printf("%d, ", pilha->dado);
	system("Pause");
}

