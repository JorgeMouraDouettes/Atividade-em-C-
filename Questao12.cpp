#include <stdio.h>

int main()
{
    int pedro, joana, ismael;
    
    printf("Digite a idade de Pedro: ");
    scanf("%d", &pedro);
    printf("Digite a idade de Joana: ");
    scanf("%d", &joana);
    printf("Digite a idade de Ismael: ");
    scanf("%d", &ismael);
    
    if(pedro > joana && pedro > ismael){
        printf("O Pedro eh o mais velho!!");
    } else if(joana > pedro && joana > ismael){
        printf("A Joana eh a mais velha!!");
    } else if(ismael > joana && ismael > pedro){
        printf("O Ismael eh o mais velho!!");
    } else{
        printf("[ERRO] Você digitou idades iguais, tente novamente com idades diferentes");
        return 0;
    }
}
