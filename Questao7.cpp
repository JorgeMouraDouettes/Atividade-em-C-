#include <stdio.h>

int main(){

float n1,n2,media;

    do{

        do{
 // Entrada       	
            printf("Entre com a primeira nota:\n");
            scanf("%f",&n1);

            if(n1 == 50){
                break;
            }

            printf("Entre com a segunda nota:\n");
            scanf("%f",&n2);
//Processamento
            if((n1 < 0) || (n1 > 10) || (n2 < 0) || (n2 >10)){
                printf("Escreva novamente as notas!\n\n");
            }

        }while((n1 < 0) || (n1 > 10) || (n2 < 0) || (n2 >10));

        if(n1 == 50){
            break;
        }

        media = (n1 + n2)/2;
//Saída
        printf("Media : %.2f\n\n",media);

    }while(n1 != 50);

return(0);
}
