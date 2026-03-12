#include <stdio.h>


int main(){
	
	char nome[] = "Morenos";
	char *p,**pp;
	
	int idade = 45;
	int *i,**ii;
	
	p = nome;
	pp = &p;
	
//	i  = &idade;
//	ii = &i;
	
	printf("Variavel nome: %s",nome);
	printf("\nUsando ponteiro: %s",*&p);
	printf("\nUsando ponteiro de ponteiro: %s",**&p);
	
	printf("\nVariavel idade             : %d",idade);
//	printf("\nUsando ponteiro            : %d",*i);
//	printf("\nUsando ponteiro de ponteiro: %d",**ii);
		
}
