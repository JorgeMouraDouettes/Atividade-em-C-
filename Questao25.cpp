#include <stdio.h>

int main()
{
   int num[10], soma=0, media;
   
   for(int i=0; i<10; i++){
       printf("Digite um valor: ");
       scanf("%d", &num[i]);
       soma += num[i];
   }
   media = soma/10;
   
    for(int i=0; i<10; i++){
        if(media == num[i]){
            printf("O numero na posicao %d eh igual a media\n", i);
        }
    }
}
