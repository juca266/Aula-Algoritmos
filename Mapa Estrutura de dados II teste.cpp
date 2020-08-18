#include <stdio.h>
#include <string.h>

#define TAM 15
  
  typedef struct s_no{
  	char pai[15];
  	char lesq[15];
  	char ldir[15];
  }s_no;
  
    s_no noA[15];
  	int i=0, a=1, e=2, op=0;
  	
  	void AdicionarNo(s_no *noA[]);
  	void MostraArvore(s_no *noA[]);
  

  int main(void){

  	printf("\n===============MENU===============");
  	printf("\nEscolha uma opcao:\n1- Para adicionar os nomes: \n2- Para ver sua arvore:\nDigite sua opcao: ");
  	scanf("%d", op);
  	switch(op)
  	{
  		case 1:{
			AdicionarNo(&noA);}
  			break;
  		case 2:{
  			MostraArvore(&noA);	}
  			break;
	  }
	    void AdicionarNo(s_no *noa[]) 
  {
  	int i=0, a=1, e=2, op=0;
  	printf("\nDigite seu nome:");
  		scanf("%s", noa[0]->pai);
  		
  		do{	
		fflush(stdin);	 
		printf("\npai de %s:",noa[i]->pai);
		scanf("%s",&noa[i]->lesq);
		printf("\nmae de %s:",noa[i]->pai);
		scanf("%s",&noa[i]->ldir);
		strcpy (noa[e]->pai, noa[i]->lesq);
		strcpy (noa[a]->pai, noa[i]->ldir);
		a=a+2;
		e=e+2;
		i++;
	}while(i<7);
  }
  
void MostraArvore(s_no *noA[]){
int i=0, a=1, e=2, op=0;
		  	printf("\n==========Arvore Genealogica==========");
		  for(i=0; i<7; i++){
		  	printf("\nFilho:%s Pai:%s Mae:%s",noA[i]->pai, noA[i]->lesq, noA[i]->ldir);
		  }
		  	printf("\n======================================");
	}
  
  		
	 return(0);
}
  		
  	
  
