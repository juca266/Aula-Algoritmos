#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 15
  
  typedef struct s_no{ 		//Define a struct
  	char pai[TAM];			//String Pai
  	char lesq[TAM];			//String lado esquerdo
  	char ldir[TAM];			//String lado direito
  }s_no;
  
  void AddArvore(struct s_no *abc, int *i, int *a, int *e) //Função para adicionar nome a arvore
  {
	system("cls");									//Limpa a tela
	*i=0;
	*a=1;
	*e=2;
  	printf("\nDigite seu nome:");
  		scanf("%s", (*(abc+*i)).pai);
  		
  		do{	
		fflush(stdin);	 								//Limpa o buffer do teclado
		system("cls");									//Limpa a tela
		printf("\nNome do Pai de %s:",(*(abc+*i)).pai);	
		scanf("%s",(*(abc+*i)).lesq);					//Adiciona o nome do Pai
		printf("\nNome da Mãe de %s:",(*(abc+*i)).pai);	
		scanf("%s",(*(abc+*i)).ldir);					//Adiciona o nome da Mae
		strcpy ((*(abc+*a)).pai, (*(abc+*i)).lesq);		//Coloca o nome do Pai como proximo filho
		strcpy ((*(abc+*e)).pai, (*(abc+*i)).ldir);		//Coloca o nome da mae logo apos o do pai como filho
		*a=*a+2;
		*e=*e+2;											//Muda a contagem
		*i=*i+1;
		}while(*i<7);
  }
  
  void MostraArvore(struct s_no *noa, int *i)			//Funcao para exibir a arvore
  {

  	printf("\n=============Árvore Genealógica=============");
  	*i=0;
	do{
	printf("\nFilho:%s Pai:%s Mãe:%s",(*(noa+*i)).pai, (*(noa+*i)).lesq, (*(noa+*i)).ldir);	//Exibe os nomes
	*i=*i+1;
	}while(*i<7);
	printf("\n============================================\n");
  }

  int main(void){
  	setlocale(LC_ALL,"portuguese");						//Libera o uso de acentos do idioma portugues
    s_no noa[TAM];										//Define o vetor do tipo s_no
  	int op=0, i=0, a=1, e=2;							//Variaveis de contagens
  	
  	do{
  	printf("\n====================Menu====================\n");
  	printf("1 Para preencher árvore\n2 Para mostrar árvore\n0 Para sair\nEscolha uma opção:");
  	scanf("%d",&op);
  	printf("\n============================================\n");

  	switch(op){											//Inicia o Menu
	
  	case 1 :
  	AddArvore(noa, &i, &a, &e);							//Chama a funcao de adicionar nome na arvore
  	break;
  	
  	case 2 :
  		MostraArvore(noa, &i);							//Chama a funcao de mostrar a arvore
  	break;
  	
  	case 0 :
  		exit(0);
  		
  	default :
  	printf("Opção invalida");
  	}

  }while(op!=0);
  	
}

