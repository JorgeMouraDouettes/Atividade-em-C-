#include <stdio.h>
#include <locale.h>

int main(){
	int num;
	setlocale (LC_ALL, "");
	
	printf("Informe um número: ");
	scanf("%d", &num);
	
	if (num %2 == 0 && num < 15){
		printf("Este número é par e menor que 15!\n");
	}
	
	if (num %2 == 0 && num > 15){
		printf("Este número é par e maior que 15!\n");
	}
	
	if (num %2 != 0 && num < 50){
		printf("Este número é ímpar e menor que 50!\n");
	}
	
	if (num %2 != 0 && num > 50){
		printf("Este número é ímpar e maior que 50!\n");
	}
}
