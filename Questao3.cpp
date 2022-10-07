#include <stdio.h>
#include <stdlib.h> // Para usar a função ITOA
#define numdec 10 // Quantidade de numeros 

int main(){
	
	int valor; 
	char trans[numdec]; 
	
	printf("Insira o valor decimal:  "); 
	scanf("%d", &valor);
	
	itoa(valor,trans,2); //Chamando a função itoa para manipulação da string 
	
	printf("\nO valor em Octal eh: %o", valor);
	printf("\nO valor em hexadecimal eh: %X", valor); 
	
	
}
