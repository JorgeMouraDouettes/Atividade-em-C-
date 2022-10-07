#include <stdio.h>

int main() {
	int notas[10];
	for(int i = 0;i < 10;i++) {
		int nota;
		printf("Insira a nota do aluno %d: ", i + 1);
		while(fscanf(stdin, "%d", &nota)==1) {break;}
		notas[i] = nota;
	}

	// a soma dos n�meros
	int soma = 0;
	for(int i = 0;i < 10;i++) {
		soma += notas[i];
	}
	printf("Soma dos n�meros � : %d\n", soma);

	// a m�dia dos n�meros;
	float media = (float) soma / 10;
	printf("M�dia dos n�meros � : %.2f\n", media);

	//o maior n�mero;
	int maior = -2147483647;
	for(int i = 0;i < 10;i++) {
		if(notas[i] > maior) {
			maior = notas[i];
		}
	}
	printf("O maior n�mero � : %d\n", maior);

	// o menor n�mero;
	int menor = 2147483647;
	for(int i = 0;i < 10;i++) {
		if(notas[i] < menor) {
			menor = notas[i];
		}
	}
	printf("O menor n�mero � : %d\n", menor);
	return 0;
}
