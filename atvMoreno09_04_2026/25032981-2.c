//Desenvolva
//um único programa completo em linguagem C que realize as etapas descritas abaixo.
//Utilize obrigatoriamente alocação dinâmica de memória para as estruturas
//solicitadas.
//
//
//Você deverá preencher uma matriz contendo números
//inteiros (não repetidos entre 10 e 100).
//

//
//A dimensão da matriz deverá ser informada pelo
//usuário. A linha deverá ser validada entre 3 e 6, e a coluna entre 4 e 8).
//
// 
//
//Posteriormente, apresente a matriz ao usuário.
//
//
//
//O próximo passo é alimentar um vetor dinâmico com
//os dados da matriz, classificá-lo e apresentar ao usuário.
//
//
//
//Apresente o menor e o maior valor da matriz e
//
//Libere toda a memória alocada.



#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int **mat,i,j,nLin,nCol;
	
	int tmp;
	
	
	printf("Tamanho da linha da matriz: (entre 3 e 6) ");
	scanf("%d", &nLin);
	
	printf("Tamanho da coluna da matriz: (entre 4 e 8) ");
	scanf("%d", &nCol);
	
	mat = malloc(nLin * sizeof(int *))
	
	for(i=0; i<nLin; i++){
		mat[i] = malloc( nLin * sizeof(int ));
	}
	
	
	
	for(i=0; i<nLin; i++){
		for(j = 0; j<=n; j++){
			mat[i][j] = rand()%100;
		}
	}
	
//	for(i=0; i <nCol; i++){
//		for(j=0; j < nLin; j++){
//			
//			mat[i][j];
//			
//			if(mat[i][j] > )
//			
//		}
//	}
	
	
	
	
	for(i = 0; i<nLin; i++){
		for(j = 0; j<nCol; j++){
			free(mat[i][j]);
		}
		free(mat[i]);
	}
	
	free(mat);
	

	
	
	
	
	
}
