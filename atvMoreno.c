#include <stdio.h>
#include <stdlib.h>

#define QTD 5

typedef struct pessoa{
	
	int cdg;
	char nome[15];
	char tel[20];
	char end[40];
	 
} pes;
int main(){
	
	pes pessoas[5];
	int i;
	
	for(i = 0; i < 5; i++){
		
		printf("NOME: ");
		gets(pessoas[i].nome);
		printf("\nENDERECO: ");
		gets(pessoas[i].end);
		printf("\nTELEFONE: ");
		gets(pessoas[i].tel);
		printf("\nCODIGO: ");
		scanf("%d",pessoas[i].cdg);
		
	}
	
	
}
