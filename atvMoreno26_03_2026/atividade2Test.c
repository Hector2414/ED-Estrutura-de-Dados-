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
	
	int *vet, *vet2;
	int i, tam,j=0, tamp;
	
	printf("Tamanho do 1o vetor: ");
	scanf("%d", &tam);
	
	srand(time(NULL));
    vet = malloc(tam * sizeof(int));
    
   
		
	if(vet){
	
		for(i = 0; i < tam; i++){
	
	  *(vet+i) = rand()%100;
	  if (vet[i] % 2== 0){
	  	tamp++;
	  }
//	  printf("%d \n", *(vet+i));
    
	}
	
	vet2 = malloc(tamp * sizeof(int));
	
	for(i = 0; i < tam; i++){
		if (vet[i] % 2== 0){
	  	vet2[j] = vet[i];
	  	j++;
	  	
	  	 printf("%d \n", *(vet+i));
	  	 printf("%d \n", *(vet2+j));
	  } 
	}
	}else{
		printf("LAscou :(");
	}
	
	
	
	
	
	
	
}
