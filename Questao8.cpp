#include <stdio.h>

int main(){
    int num, i, l; 
    
    printf("Digite o numero maximo que vc quer que o programa mostre: ");
    scanf("%d", &num);
    
    if (num % 2==0){
       printf("Numero inválido, digite um número IMPAR!!!!\n");
    } else{
        for( i = 0; i<= (num / 2) + 1; i++){
            for (l=i+1; l<=num-i; l++ ){
                printf("%d ", l);
            }
            printf("\n");
            for (l=0; l<(i+1)*2; l++){
              printf(" ");
            }
         }
    }
}
