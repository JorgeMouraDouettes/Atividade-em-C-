#include <stdio.h>

#define TAM 5

int main(){
	
	int vet[TAM], i, maior;
	
	//Recebe os valores
	for(i=0; i<TAM; i++){
		printf("Digite um valor: ");
		scanf("%i", &vet[i]);
	}
	
	//Encontra o maior valor
	maior = vet[0];
	
	for(i=1; i<TAM; i++){
		if (vet[i] > maior){
			maior = vet[i];
		}
	}
	
	//Mostra o vetor
	printf("Vetores: ");
	for(i=0; i<TAM; i++){
		printf("%i ",vet[i]);
	}
	
	printf("\nO maior valor entre os vetores e: %i", maior);
	
}
