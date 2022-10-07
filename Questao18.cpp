#include <stdio.h>

int main() {
	int notas[10];
	for(int i = 0;i < 10;i++) {
		int nota;
		printf("Insira a nota do aluno %d: ", i + 1);
		while(fscanf(stdin, "%d", &nota)==1) {break;}
		notas[i] = nota;
	}

	// a soma dos números
	int soma = 0;
	for(int i = 0;i < 10;i++) {
		soma += notas[i];
	}
	printf("Soma dos números é : %d\n", soma);

	// a média dos números;
	float media = (float) soma / 10;
	printf("Média dos números é : %.2f\n", media);

	//o maior número;
	int maior = -2147483647;
	for(int i = 0;i < 10;i++) {
		if(notas[i] > maior) {
			maior = notas[i];
		}
	}
	printf("O maior número é : %d\n", maior);

	// o menor número;
	int menor = 2147483647;
	for(int i = 0;i < 10;i++) {
		if(notas[i] < menor) {
			menor = notas[i];
		}
	}
	printf("O menor número é : %d\n", menor);
	return 0;
}
