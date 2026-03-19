#include <stdio.h>
#include <stddef.h>

//typedef struct{
//	int idade;
//	int qtd_filhos;
//	char nome[16];
//}registro1;

typedef struct{
	float salario;
	int turno;
	char nome[32];
}registro2;

int main(){
	
//	printf("Tamanho da struct: %d \n", sizeof(registro1));
//	printf("Idade inicia em: %d \n", offsetof(registro1,idade));
//	printf("Qtd_filhos inicia em: %d \n", offsetof(registro1,qtd_filhos));
//	printf("Nome inicia em: %d \n", offsetof(registro1,nome)) ;
	
	printf("Tamanho da struct: %d \n", sizeof(registro2));
	printf("salario inicia em: %d \n", offsetof(registro2,salario));
	printf("turno inicia em: %d \n", offsetof(registro2,turno));
	printf("Nome inicia em: %d \n", offsetof(registro2,nome)) ;
	
}
