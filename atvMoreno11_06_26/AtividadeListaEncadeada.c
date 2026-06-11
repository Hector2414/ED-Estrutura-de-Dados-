//Construir um programa em linguagem C que implemente uma lista DUPLAMENTE encadeada.
//O programa deverá possuir as seguintes opções no menu:
//- inserir no inicio
//- inserir no fim
//- inserir no meio
//- apresentar a quantidade de elementos da lista (criar funcao)
//- inserir 10 elementos sorteados //sorteio inclusive se é inicio, meio ou fim)
//- apresentar lista
//- remover elemento
//- sair

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct apelido_struct{
  int valor;
  struct apelido_struct *proximo;
}no;

void inserir_inicio(no **lista, int num);
void inserir_meio(no **lista, int num, int ant);
void inserir_fim(no **lista, int num);
void inserir_aleatorio(no **lista);
void imprimir(no *no);
void remover_no(no **lista, int valor);
int qtdElementos(*lista);

//-------------------------------------
int main() {
  srand(time(NULL));
  no *lista=NULL;
  int opcao,valor,anterior;
  do{
    system("cls");  
    printf("1 inserir no inicio\n");
    printf("2 inserir no final\n");
    printf("3 inserir no meio\n");
    printf("4 inserir 10 aleatorios\n");
    printf("5 remover\n");
    printf("6 listar\n");
    printf("7 fim\n\n");
    printf("  OPCAO: ");
    fflush(stdin);
    scanf("%d",&opcao);
    switch (opcao) {
      case 1:
         printf("\nvalor a inserir: ");
         fflush(stdin);
         scanf("%d",&valor);
         inserir_inicio(&lista,valor);
         break;
      case 2:
         printf("\nvalor a inserir: ");
         fflush(stdin);
         scanf("%d",&valor);
         inserir_fim(&lista,valor);
         break;
      case 3:
         printf("\nvalor a inserir: ");
         fflush(stdin);
         scanf("%d",&valor);
         printf("valor de referencia (inserir apos valor: )");
         fflush(stdin);
         scanf("%d",&anterior);
         
         inserir_meio(&lista,valor,anterior);
         break; 
      case 4:
         //aleatorio
         inserir_aleatorio(&lista);
         break;      
      case 5:
         printf("\nvalor a remover: ");
         fflush(stdin);
         scanf("%d",&valor);
         remover_no(&lista, valor);
         break;   
      case 6:
         imprimir(lista);     
         break;
    	

     } 
  }
  while (opcao!=7); 
  system("pause");
  return 0;
}
//-------------------------------------
void inserir_inicio(no **lista, int num){
  no *novo=malloc(sizeof(no));
 
  if (novo){
    novo->valor=num;
    novo->proximo=*lista;
    *lista=novo;
  }  
  else
    printf("erro ao alocar memoria \n");   
}
//-------------------------------------
void inserir_meio(no **lista, int num, int ant){
  no *aux, *novo=malloc(sizeof(no));
   if (novo){
    novo->valor=num;
    if (*lista==NULL){
      novo->proximo=NULL;
      *lista=novo;
    }else{
      aux=*lista;
      while(aux->valor != ant && aux->proximo)
        aux=aux->proximo;
      novo->proximo=aux->proximo;
      aux->proximo=novo;  
    }
  }  
  else
    printf("erro ao alocar memoria \n");   
}
//-------------------------------------
void inserir_fim(no **lista, int num){
  no *aux, *novo=malloc(sizeof(no));
   if (novo){
    novo->valor=num;
    novo->proximo=NULL;
    if (*lista==NULL)
      *lista=novo;
    else{
      aux=*lista;
      while(aux->proximo)
        aux=aux->proximo;
      aux->proximo=novo;  
    }
  }  
  else
    printf("erro ao alocar memoria \n");   
}
//-------------------------------------
void inserir_aleatorio(no **lista){
int x,val,tip;
  for (x=0; x<10; x++){
    tip=rand()%3;
    val=rand()%50;
    switch (tip){
      case 0:
           printf("inserindo %d no inicio \n",val);
           inserir_inicio(&*lista,val);
           break;
      case 1:
          //está usando fixo 10 mas o ideal é pegar um valor aleatório que esteja na lista
           printf("inserindo %d no meio apos 10 \n",val);           
           inserir_meio(&*lista,val,10);
           break;
      case 2:
           printf("inserindo %d no fim \n",val);           
           inserir_fim(&*lista,val);
           break;                   
    }
  }  
  system("pause");
}
//-------------------------------------
void imprimir(no *no){
  printf("\nLista: ");
  while (no){
    printf("%d ",no->valor);
    no=no->proximo;
  }
  printf("\n\n");
  system("pause");
}
//-------------------------------------
void remover_no(no **lista, int valor){
  if (*lista == NULL) {
    printf("Lista vazia. Nada a remover.\n");
    return;}
  no *atual = *lista;
  no *anterior = NULL;
  //Procurando o nó com o valor a ser removido
  while (atual != NULL && atual->valor != valor) {
    anterior = atual;
    atual = atual->proximo;}
  if (atual == NULL) {  //Se o nó não existir
    printf("Valor não encontrado na lista. Nada a remover.\n");
    return;}
  if (anterior == NULL) {//Se o nó a remover for o 1o.
    *lista = atual->proximo;
    free(atual); 
  }else {
    anterior->proximo = atual->proximo;
    free(atual);}
  printf("Valor %d removido da lista.\n", valor);
}
//-------------------------------------

int qtdElementos(no *lista){
	int cont = 0;
	if(lista == NULL){
	
		return 0;
	}
	else{
		while(lista != NULL){
			cont++;
			lista = lista->proximo;		
		}
	}
	return cont;
}
