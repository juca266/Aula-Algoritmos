// Mapa Valmir.cpp 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct No No; //defini um novo tipo para não ter que ficar digitando struct
struct No {
 char Id[30];
 struct No *Pai;  //No filho de.
 struct No *Esquerda; //No mãe de.
 struct No *Direita;  //No pai de.
};

void AdicionarNoFilho(); // Prototipo de função

No AdicionarNo(No Raiz) {

 if (Raiz == NULL) { 

  char nome[30];
  printf("Digite um nome: ");
  scanf("%s", nome);

  Raiz = (No*)malloc(sizeof(No));

  strcpy(Raiz->Id, nome);
  Raiz->Esquerda = NULL;
  Raiz->Direita = NULL;
  return Raiz;
 }


 return Raiz;
}

void PreOrdem(No *NoAtual) {
 if (NoAtual == NULL)
  return;

 printf(" %s ", NoAtual->Id);
 PreOrdem(NoAtual->Esquerda);
 PreOrdem(NoAtual->Direita);
}

No *Arvore;

int main() {

 No *Raiz = NULL;

 int opcao;
 while (1) {

  printf("1- Construir Arvore Genealogica\n");
  printf("2- Salvar\n");
  printf("3- Abrir\n");
  printf("4- Mostrar\n");
  printf("5- Pesquisar\n");
  printf("Digite Uma Opcao: ");

  scanf("%i", &opcao);

  switch (opcao) {
  case 1:
   if (Raiz == NULL) {
    system("cls");
    char Id[30];
    Raiz = AdicionarNo(Raiz);
    break;
   }
   else
   {
    system("cls");
    AdicionarNoFilho();
   }

  case 2:
   system("cls");
   printf("Salvar\n");
   break;

  case 3:
   system("cls");
   printf("Abrir\n");
   break;

  case 4:
   system("cls");
   printf("Mostrar\n");
   PreOrdem(Raiz);
   printf("\n");
   break;

  case 5:
   system("cls");
   printf("Pesquisar\n");
   break;

  default:
   system("cls");
   printf("Digite uma opção valida\n");
   break;
  }

  system("pause");
  system("cls");
 }
}

//Inserir nó
void AdicionarNoFilho() {

 char nome[30];
 char lado;

 printf("Informe o nome: ");
 scanf(" %s", nome);
 printf("Informe o lado: ");
 scanf(" %c", lado);

 switch (lado)
 {
 case 'E':
  if (Arvore->Esquerda != NULL)
  {
   Arvore->Esquerda = (No*)malloc(sizeof(No));
   strcpy(Arvore->Esquerda->Id, nome);
   Arvore->Esquerda->Pai = Arvore;
   break;
  }

 case 'D':
  if (Arvore->Direita != NULL)
  {
   Arvore->Direita = (No*)malloc(sizeof(No));
   strcpy(Arvore->Direita->Id, nome);
   Arvore->Direita->Pai = Arvore;
   break;
  }
  
 case 'R':
  if (Arvore->Pai != NULL)
  {
   Arvore->Pai = (No*)malloc(sizeof(No));
   strcpy(Arvore->Pai->Id, nome);
   Arvore->Pai->Pai = Arvore;
   break;
  }
  
    }
 
}
