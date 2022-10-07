#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media_exercicios, media_geral;
    
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite sua media das notas de exercicios: ");
    scanf("%f", &media_exercicios);
    
    media_geral = (nota1 + nota2*2 + nota3*3 + media_exercicios) / 7.0;
    
    if(media_geral >= 9 && media_geral <= 10){
        printf("Sua média eh %.2f e o seu conceito eh A", media_geral);
    }
    else if(media_geral >= 7.5 && media_geral < 9){
        printf("Sua média eh %.2f e o seu conceito eh B", media_geral);
    }
    else if(media_geral >= 6 && media_geral < 7.5){
        printf("Sua media eh %.2f e o seu conceito eh C", media_geral);
    }
    else if(media_geral >= 4 && media_geral < 6){
        printf("Sua media eh %.2f e o seu conceito eh D", media_geral);
    }
    else if(media_geral > 10){
        printf("ERRO!! Sua media esta maior do que o limite, tente novamente!");
        return 0;
    }
    else{
        printf("Sua media eh %.2f e o seu conceito eh E", media_geral);
    }
}
