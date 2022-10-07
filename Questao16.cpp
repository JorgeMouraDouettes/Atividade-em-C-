#include <stdio.h>

int main()
{
   int n, fat;
   
   printf("Digite um numero natural: ");
   scanf("%d", &n);
   
   for(fat=1; n>1; n = n - 1){
       fat = fat * n;
   }
   printf("\nO numero fatorial desse numero eh: %d", fat);
}
