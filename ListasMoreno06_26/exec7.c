#include<stdio.h>
#include<stdlib.h>
/*
Atividade 3 lista1

*/

typedef struct apelido{
	 int valor;
	 struct apelido *prx;
}no;

no * topo = NULL;

void push(int item);
int entradaDados();

void main(){
	
	int opcao,valor;
	
	
	
	printf("Olá pressione um numero (1-4)\n\n");
	scanf("%d", &opcao);
	
	do{
		switch(opcao){
			case 1: 
				valor = entradaDados();
				push(valor);
				break;
			case 2:
				//pop();
				break;
			case 3: 
				//imprimir()
			case 4:
				system("pause");
				
		}
	} while(opcao != 4);
	
}

void push(int item){
	no *novo = malloc(sizeof(no));
	novo->valor = item;
	novo->prx = topo;
	topo = novo;
	printf("Valor %d empilhado!");
}

int entradaDados(int valor){
	printf("Digite um valor para realizar as operacoes:\n");
	scanf("%d",&valor);
	
	return valor;
}
