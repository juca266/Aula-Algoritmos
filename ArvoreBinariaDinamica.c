#include <stdio.h>

typedef struct no str_no;
struct no {
	char dado;
	str_no *esquerda;
	str_no *direita;
	str_no *pai;
};

void MostraNo(str_no *no)
{
	printf("No: %c\n", no->dado);

	if (no->esquerda != NULL)
		MostraNo(no->esquerda);

	if (no->direita != NULL)
		MostraNo(no->direita);
}

int main(void)
{
	str_no a, b, c, d, e, f;

	a.dado = 'A';
	a.esquerda = &b;
	a.direita = &c;
	a.pai = NULL;

	b.dado = 'B';
	b.esquerda = &d;
	b.direita = &e;
	b.pai = &a;

	c.dado = 'C';
	c.esquerda = NULL;
	c.direita = NULL;
	c.pai = &a;

	d.dado = 'D';
	d.esquerda = NULL;
	d.direita = NULL;
	d.pai = &b;

	e.dado = 'E';
	e.esquerda = NULL;
	e.direita = &f;
	e.pai = &b;

	f.dado = 'F';
	f.esquerda = NULL;
	f.direita = NULL;
	f.pai = &e;

	MostraNo(&a);
}
