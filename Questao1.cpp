#include <stdio.h>
#include <math.h>

int main(){
	int num; 
	int num2;
	int soma, mult, quad; 
	
	printf("Insira o primeiro numero: ");
	scanf("%d", &num);
	
	printf("Insira o segundo numero: ");
	scanf("%d", &num2);
	printf("\n------------------------------------------ RESULTADOS --------------------------------------------\n");
	
	//Soma do numero
	soma = num + num2;
	//Produto do primeiro numero pelo quadrado do segundo
	int pot = 2; 
	int num2quad = pow(num2, pot);
	mult = num * num2quad; 
	//Quadrado do primeiro numero 
	quad = pow( num, pot); 
	//Raiz quadrada dos somas dos quadrados
	int somaquad; 
	somaquad = num2quad + quad; 
	int raiz; 
	raiz = sqrt(somaquad);
	//Seno da diferença do primeiro número pelo segundo 
	int dif; 
	int result; 
	dif = num - num2; 
	result = sin(dif);
	//Modulo do numero 
	int modulo ;
	modulo = abs(num);
	
	printf("\nA soma do numero eh: %d", soma);
	printf("\nO produto do primeiro numero pelo quadrado do segundo eh: %d", mult);
	printf("\nO quadrado do primeiro numero eh:%d", quad);
	printf("\nA raiz quadrada das somas dos quadrados:%d", raiz);
	printf("\nSeno da diferenca do primeiro numero pelo segundo eh: %d", result);
	printf("\nO modulo do primeiro numero eh: %d", modulo);
	
}
