#include <stdio.h>
#include <math.h>
#include <conio.h>
typedef struct //declaração da estrutura
{
char nome[30], sexo;
int idade, filhos;
float renda;
}cadastro; //nome da estrutura
main(void)
{
cadastro pessoa[20];//declaração do vetor de struct
int i, x=0, rmaior=0, ano, pano=0, opc=0;//variaveis do tipo inteiro
float qh=0, qm=0, filho=0;//variaveis do tipo real ou ponto flutuante
printf("Digite quantas pessoas voce gostaria de cadastrar:");//exibe a mensagem
scanf("%d",&x);//recebe a quantia de cadastros
for (i = 0; i < x; i++)//laço de repetição para preencher os 20 cadastros
{
printf("========================================\n");
fflush(stdin); //limpa o buffer do teclado
printf("Cadastro numero %d\n",i);
printf("Digite o nome: "); //imprime o texto na tela
scanf ( "%[^\n]", pessoa[i].nome); //comando usado para receber string aceitando espaços
printf("M para masculino\nF para Feminino\n"); //imprime o texto na tela
printf("Digite o sexo: "); // imprime o texto na tela
scanf(" %c",&pessoa[i].sexo); //recebe o que foi digitado na variavel
printf("Digite a idade: ");// imprime o texto na tela
scanf("%d",&pessoa[i].idade);//recebe o que foi digitado na variavel
printf("Digite a quantidade de filhos: ");
scanf("%d",&pessoa[i].filhos);//recebe o que foi digitado na variavel
printf("Digite a renda: ");// imprime o texto na tela
scanf("%f",&pessoa[i].renda);//recebe o que foi digitado na variavel
ano = 2016 - pessoa[i].idade; // calcula o ano de nascimento
if(ano>=2000) pano++; //verifica se o ano é maior ou igual 2000
if((pessoa[i].sexo == 'M') || (pessoa[i].sexo == 'm')) qh++; // se a variavel sexo for H ou h a variavel h recebe h+1
if((pessoa[i].sexo == 'F') || (pessoa[i].sexo == 'f')) qm++; // se a variavel sexo for M ou m a variavel m recebe m+1
if(pessoa[i].renda >= 500) rmaior++; //se a renda for maior que 500 a variavel rmaior recebe rmaior+1
if(pessoa[i].filhos>=1) filho++; //se tiver mais de 1 filho a variavel filho recebe filho+1
}
qh=(qh/x)*100; // calcula a porcentagem de homens
qm=(qm/x)*100; //calcula a porcentagem de mulheres
filho=(filho/x)*100; //calcula a porcentagem de quem tem pelo menos 1 filho
while(opc != 5)
{
printf("\n========================= MENU =========================");//apenas exibe que esta no menu
printf(" \n 1 Exibe percentual de homens e mulheres \n 2 Exibe o numero de pessoas que ganham mais de 500 \n 3 Exibe o percentual de pessoas com pelo menos 1 filho \n 4 Exibe o numero de pessoas que nasceram a partir de 2000 \n 5 Para sair");
printf ("\n Escolha uma opcao: ");
scanf("%d", &opc);
switch(opc)
{
case 1 : printf("\nA porcentagem de homens e: %.1f%% \nA porcentagem de mulheres e: %.1f%%",qh,qm); //imprime a porcentagens de homens e mulheres
break;
case 2 : printf("\nO numero de pessoas com renda maior que 500 sao: %d",rmaior);//imprime quantas pessoas ganham mais que 500
break;
case 3 : printf("\nA porcentagem de pessoas com pelo menos 1 filho e: %.1f%%",filho);//imprime a porcentagem de quem tem pelo menos 1 filho
break;
case 4 : printf("\nO numero de pessoas que nasceram a partir de 2000 sao: %d",pano);//imprime quantas pessoas nasceram a partir de 2000
break;
case 5 : printf("Saindo...");
break;
default : printf("\n Opcao invalida");//imprime a mensagem opcao invalida caso digite um numero diferente aos das opcoes
break;
}
}
return(0); //retorna o valor para a função main
}
