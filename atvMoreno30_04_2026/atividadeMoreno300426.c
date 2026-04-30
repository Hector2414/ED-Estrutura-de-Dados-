#include <stdio.h>
#include <stdlib.h>

typedef struct apelido_no{
	
	int dado;
	struct apelido_no *proximo;
	
} no;

no *top = NULL;
//-------------------------------------------------------------------

void push(int item){
	
	printf("\n Empilhando\n");
	no *novo = malloc(sizeof(no));
	
	novo->dado = item;
	novo->proximo = top;
	top = novo;
	
	printf("\nValor %d empilhado: ", novo->dado);
	system("pause");
}

//--------------------------------------------------------------------
void pop(){
	
	printf("\nDesimpilhando\n");
	
	if(top == NULL){
		printf("A pilha está vazia!");
	} else{
		no *temp;
		temp = top;
		top = top->proximo;
		
		printf("\n d% Desempilhado com sucesso!", temp->dado);
		free(temp);
	}
}

//--------------------------------------------------------------------------

void imprimir(){
	
	no *temp;
	temp = top;
	
	printf("\n Imprimindo Pilha\n");
	
	while(temp != NULL){
		printf("%d \n", temp->dado);
		temp = temp->proximo;
	}
	system("pause");
}

//---------------------------------------------------------------------------

int entrada__dados(){
	
	int valor;
	printf("\nEntre com valor a empilhar: ");
	scanf("%d ", &valor);
	
	return valor;
}

//--------------------------------------------------------------------------

int main(){
	
	int n,opcao;
	 
	do{
	
	system("cls");
	
	printf("\n\nMenu\n1. Empilhar\n2. Desempilhar\n3. imprimir\n4. sair");
	printf("\nEscolha uma opcao entre 1 e 4: ");
	scanf("%d ",&opcao);
	
	switch(opcao){
	
		case 1: 
		  n = entrada__dados();
		  push(n);
		  break;
		  
		case 2: 
		  pop(n);
		  break;
		  
		case 3: 
		  imprimir();
		  break;
   }
	
	}while (opcao != 4);
	system("pause");
	
}
