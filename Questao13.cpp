#include <stdio.h>

int main()
{
    int i, num;
    
    printf("Digite um número positivo: ");
    scanf("%d", &num);
    
    for(i=1; i<=num; i++){
        if(i%2 != 0){
            printf("%d   ", i);
        }
    }
}
