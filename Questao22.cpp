#include <stdio.h>

int main(){
    int num[10], soma=0, subtracao=0;

    for(int i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%d", &num[i]);


        if(i%2 == 0){
            soma += num[i];
        }else{
            subtracao -= num[i];

        }
    }
    printf("A soma dos valores em posi��es pares eh %d e a subtra��o dos valores em posi��es �mpares eh %d", soma, subtracao);
}
