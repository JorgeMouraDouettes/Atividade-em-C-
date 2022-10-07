#include <stdio.h>

int main(){
    int num[6], soma=0, subtracao=0;

    for(int i=0; i<6; i++){
        printf("Digite um número: ");
        scanf("%d", &num[i]);
        }

    printf("Ordem inversa: [");
    for(int i=5; i>0; i--){
        printf("%d,", num[i]);
    }
    printf("%d]", num[0]);

}
