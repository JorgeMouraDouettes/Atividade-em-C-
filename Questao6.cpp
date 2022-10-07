#include <stdio.h>

int main(){
  int i, preco, infla;
  
  printf("Digite o preço do produto: ");
  scanf("%d", &preco);
  
  for(i=0; i<1 && preco < 100; i++){
      infla = preco + (preco * 0.1);
      printf("\nO preco inflacionou em 10 por cento e o preco do produto agora eh: R$%d", infla);
  }
  
  for(i=0; i<1 && preco >= 100; i++){
      infla = preco + (preco * 0.2);
      printf("\nO preco inflacionou em 20 por cento e o preco do produto agora eh: R$%d", infla);
  }
}
