//1) Desenvolva um programa em linguagem C que aloque dinamicamente um vetor de 10 elementos
//do tipo inteiro.
//Preencha o vetor com valores aleatórios.
//Em seguida, apresente todos os elementos utilizando aritmética de ponteiros (sem o uso de
//notação de índice).
//Observação: A alocação de memória deve ser realizada utilizando malloc.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int *vet;
	int i;
	
	srand(time(NULL));
    vet = malloc(10 * sizeof(int));
		
	if(vet){
	
		for(i = 0; i < 10; i++){
	
	  *(vet+i) = rand()%100;
	  printf("%d \n", *(vet+i));	
	}
	
	}else{
		printf("LAscou :(");
	}
	
}
