#include <stdio.h>
#include <stdlib.h> // Para usar a fun��o ITOA
#define numdec 10 // Quantidade de numeros 

int main(){
	
	int valor; 
	char trans[numdec]; 
	
	printf("Insira o valor decimal:  "); 
	scanf("%d", &valor);
	
	itoa(valor,trans,2); //Chamando a fun��o itoa para manipula��o da string 
	
	printf("\nO valor em Octal eh: %o", valor);
	printf("\nO valor em hexadecimal eh: %X", valor); 
	
	
}
