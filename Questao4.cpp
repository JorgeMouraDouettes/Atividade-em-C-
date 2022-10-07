#include <stdio.h>

int main(){
 int num1;
 int num2;
 int i;
 
 printf("Insira o valor do primeiro numero:  ");
 scanf("%d", &num1);
 
 printf("Insira o valor do segundo numero:  ");
 scanf("%d", &num2);
 
 if(num1 < num2){
 	for( i = num1; i <= num2; i++){
 		printf("%d - ", i);
	 }
	
 }else if(num1 > num2){
 	for( i = num1; i >= num2; i--){
 		printf("%d - ", i);
	 }
 }
}
