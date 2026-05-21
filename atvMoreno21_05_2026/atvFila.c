# include<stdio.h>
# include<stdlib.h>

void enqueue(int item);
void dequeue();
//------------------------------
void enqueue2(int item);
void dequeue2();
//------------------------------
void enqueue3(int item);
void dequeue3();
//------------------------------


void imprimir();
int entrada_dados();
//-----------------------------

typedef struct apelido_no{
	int dado;
	struct apelido_no *proximo;
} no;


//-------------------
no *frente = NULL;
no *fim = NULL;
//-------------------
no *frente2 = NULL;
no *fim2 = NULL;
//------------------
no *frente3 = NULL;
no *fim3;
//--------------------



int main(){
	int n, opcao;
	do{
		system("cls");
		printf("\n\nMenu\n1. Enfileirar \n");
		printf("2. Desenfileirar \n3. Imprimir \n4. Redistribuir \n5. Sair \n");
		printf("\nEscolha uma opacao (0-4): ");
		scanf("%d",&opcao);
		
		switch(opcao){
			case 1: 	
				n = entrada_dados();
				enqueue(n);
				break;
			case 2:
				dequeue();
				break;
			case 3: 
				imprimir();
				break;
			case 4:
				distribute();
				break;
		} 
		
	}while(opcao != 5);
		system("pause");
		
	
}

//-------------------------------------
void enqueue(int item){
	printf("\nEnfileirando...\n");
	no *novo = malloc(sizeof(no));
	//verfificar alocação
	novo->dado = item;
	novo->proximo = NULL;
	
	if(fim == NULL){
		frente = novo;
		fim = novo;
	} else{
		fim->proximo = novo;
		fim = novo;

	}
	printf("\nValor %d enfileirado\n", novo->dado);
	system("pause");
}
//----------------------------------------------------
void dequeue(){
	printf("\nDesenfileirando...\n");
	if(frente == NULL){
		printf("A fila esta vazia\n");
	} else{
		no *temp = frente;
		frente = frente->proximo;
		if(frente == NULL){
			fim = NULL;
		}
		printf("\n %d desenfileirado\n", temp->dado);
		free(temp);
	}
	system("pause");
}
//------------------------------------------------------
void imprimir(){
	no * temp = frente;
	printf("\nIMPRIMINDO FILA...\n");
	while(temp != NULL){
		printf("%d \n", temp->dado );
		temp  = temp->proximo;
	}
	system("pause");
}
//--------------------------------------------------------
int entrada_dados(){
	int valor;
	printf("\nEntre com o valor a enfileirar: ");
	scanf("%d", &valor);
	return valor;
}
//--------------------------------------------------------

//void redstribuir(){
//	
//	int i;
//	for(i = 0; i > )
//		
//}

//-------------------------------------------------------
void enqueue2(int item){
	printf("\nEnfileirando...\n");
	no *novo = malloc(sizeof(no));
	//verfificar alocação
	novo->dado = item;
	novo->proximo = NULL;
	
	if(fim == NULL){
		frente2 = novo;
		fim2 = novo;
	} else{
		fim2->proximo = novo;
		fim2 = novo;

	}
	printf("\nValor %d enfileirado\n", novo->dado);
	system("pause");
}
//----------------------------------------------------------
void enqueue3(int item){
	printf("\nEnfileirando...\n");
	no *novo = malloc(sizeof(no));
	//verfificar alocação
	novo->dado = item;
	novo->proximo = NULL;
	
	if(fim3 == NULL){
		frente3 = novo;
		fim3 = novo;
	} else{
		fim3->proximo = novo;
		fim3 = novo;

	}
	printf("\nValor %d enfileirado\n", novo->dado);
	system("pause");
}
//----------------------------------------------------------
void dequeue2(){
	printf("\nDesenfileirando...\n");
	if(frente2 == NULL){
		printf("A fila esta vazia\n");
	} else{
		no *temp = frente2;
		frente2 = frente2->proximo;
		if(frente2 == NULL){
			fim3 = NULL;
		}
		printf("\n %d desenfileirado\n", temp->dado);
		free(temp);
	}
	system("pause");
}
//----------------------------------------------------------------
void dequeue3(){
	printf("\nDesenfileirando...\n");
	if(frente3 == NULL){
		printf("A fila esta vazia\n");
	} else{
		no *temp = frente3;
		frente = frente->proximo;
		if(frente3 == NULL){
			fim3 = NULL;
		}
		printf("\n %d desenfileirado\n", temp->dado);
		free(temp);
	}
	system("pause");
}

//------------------------------------------
void distribute(){
	
	while(frente != NULL){
		int valor = frente->dado;
		no *temp = frente;
		frente = frente->proximo;
		if(frente == NULL)
			fim = NULL;
		free(temp); // rm da fila 1
		
	}
}

