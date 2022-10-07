#include <stdio.h>

int main(){

    int i, n, cal, resultado=0;
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("%d^2 = ", n);

    for(i=0, cal=n*n; cal>resultado; i++){
        if(i%2 != 0){
            printf(" %d ",i);
            resultado += i;
        }else if(resultado != cal){
            printf("+");
        }
    }
    printf(" = %d", resultado);
}
