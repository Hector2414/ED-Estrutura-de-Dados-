#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int x = 10,y = 20,z = 100,N = 24;
	char tc = 'c';
	
	int  *ptr1,*ptr2,*ptr3,*ptrN;
	char *ptr4;
	
	ptr1 = &x;
	ptr2 = &y;
	ptr3 = &z;
	ptr4 = &tc;
	ptrN = &N;
	
	printf("==============================1=========================\n");
	
    printf("\n valor x = %d\n", x);
    printf("\n valor y = %d\n", y);
    printf("\n valor z = %d\n", z);
    printf("\n valor tc = %c\n", tc);
    printf("\n valor N = %d\n", N);
    
    printf("\n=============================2========================\n");
    
    printf("\nEnd. mem. n x = %p\n",&x);
    printf("\nEnd. mem. y =   %p\n",&y);
    printf("\nEnd. mem. z =   %p\n",&z);
    printf("\nEnd. mem. tc =  %p\n",&tc);
    printf("\nEnd. mem. N =   %p\n",&N);
    
    printf("\n==============================3=======================\n");
    
    printf("\nEnd. mem. ptr1 = %p\n",&ptr1);
    printf("\nEnd. mem. ptr2 = %p\n",&ptr2);
    printf("\nEnd. mem. ptr3 = %p\n",&ptr3);
    printf("\nEnd. mem. ptr4 = %p\n",&ptr4);
    printf("\nEnd. mem. ptrN = %p\n",&ptrN);
    
    printf("\n===============================4======================\n");
    
    printf("\nValor ptr1 = %p\n",&*ptr1);
    printf("\nValor ptr2 = %p\n",&*ptr2);
    printf("\nValor ptr3 = %p\n",&*ptr3);
    printf("\nValor ptr4 = %p\n",&*ptr4);
    printf("\nEnd mem ptrN = %p\n",&*ptrN);
    
    printf("\n==============================5========================\n");
    
    printf("\nVlr onde ptr1 aponta = %d\n",*ptr1);
    printf("\nVlr onde ptr2 aponta= %d\n",*ptr2);
    printf("\nVlr onde ptr3 aponta = %d\n",*ptr3);
    printf("\nVlr onde ptr4 aponta = %c\n",*ptr4);
    printf("\nVlr onde ptrN aponta = %d\n",*ptrN);
    
    printf("\n==============================6=========================\n");
    
    printf("\nEnd. mem onde ptr1 aponta = %p\n",&*ptr1);
    printf("\nEnd. mem. onde ptr2 aponta = %p\n",&*ptr2);
    printf("\nEnd. mem. onde ptr3 aponta = %p\n",&*ptr3);
    printf("\nEnd. mem. onde ptr4 aponta = %p\n",&*ptr4);
    printf("\nEnd. mem. onde ptrN aponta = %p\n",&*ptrN);
    
    char nome[40]
    int i;
    
    printf("Digite um nome de 40 caracteres: ");
    gets(nome);
    
    for(i = 0; i <40; i++){
	}
    
    
		
}
