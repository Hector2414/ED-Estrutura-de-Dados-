//Desenvolva um programa em linguagem C que aloque dinamicamente um vetor de números inteiros, inicialmente com capacidade para armazenar 5 elementos.
//O programa deverá solicitar ao usuário a inserção de valores inteiros, armazenando-os no vetor. Sempre que a capacidade máxima for atingida, o vetor deverá ser redimensionado dinamicamente, dobrando seu tamanho por meio da função realloc.
//A inserção de dados deverá continuar até que o usuário informe um valor negativo, que indicará o encerramento da entrada de dados.
//Ao final, o programa deverá:
//•	Apresentar todos os elementos armazenados 
//•	Informar a quantidade total de elementos inseridos 
//•	Informar o tamanho final do vetor alocado 
//•	Informar se houve mudança de endereçamento na realocação.



#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *a,i;
	
	a = malloc(5 * sizeof(int));
	
	if(a){
		
	  printf("Memória alocada!!\n");
		
		
	  printf("Insira 5 numeros inteiros: ");
	
	for(i = 0; i < 5; i++){
		scanf("%d \n", a[i]);
	}	
		
		
	}
	
}
