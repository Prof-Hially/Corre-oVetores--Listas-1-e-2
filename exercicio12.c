/*
ler cinco valores e mostrar todos os valores lidos, o maior valor o menor e a media dos valores
*/
#include<stdio.h>
#define TAM 5

main(){
   int valores[TAM];
   int maior, menor; 
   float media, soma = 0;

   for(int i = 0; i < TAM; i++){
        printf("Digite os numeros");
        scanf("%d", &valores[i]);
        soma += valores[i];
   }
    media = soma/TAM;
    printf("%.2f", media);

    maior = valores[0];
    menor = valores[0];

    for(int i = 0; i < TAM; i++){
        if(valores[i] > maior){
            maior = valores[i];
        }
        if(valores[i] < menor){
            menor = valores[i];
        }
    }
    printf("Valores do Vetor");
    for(int i = 0; i < TAM; i++){
        printf("%d\n", valores[i]);
   }
   printf("Maior valor: %d, menor valor: %d, media: %f", maior, menor, media);


}