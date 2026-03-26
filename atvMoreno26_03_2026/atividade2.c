//2) Desenvolva um programa em linguagem C que aloque dinamicamente um vetor (v1) contendo N
//elementos do tipo inteiro, sendo N informado pelo usuário.
//Após o preenchimento do vetor v1, crie dinamicamente um segundo vetor (v2) que contenha
//apenas os valores pares presentes em v1.
//Ao final, o programa deverá:
//• Apresentar os elementos dos dois vetores
//• Exibir o endereço de memória de cada elemento
//Observações:
//• Ambos os vetores devem utilizar alocação dinâmica
//• O vetor v2 deve possuir tamanho compatível com a quantidade de números pares encontrado

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int tam, i, j;
	int *v1, *v2;
	
	printf("Tamanho vetor 1: ");
	scanf("%d ", &tam);
	
	srand(time(NULL));
	v1 = malloc(tam * sizeof(int));
	
	
	if(v1){
	
		for(i = 0; i<tam; i++){
	
	  *(v1+i) = rand()%100;
	  printf("%d \n", *(v1+i));	
	}
	
	}else{
		printf("LAscou :(");
	}
	
	
	
}
