/*
preencher um vetor com 10 numeros reais, calcular e mostrar quantos numeros negativos e a soma dos numeros positivos
*/
#include<stdio.h>
#define TAM 5

main(){
   int numeros[TAM];
   int qtdNegativos=0, somaPositivos=0;

   for(int i = 0; i < TAM; i++){
        printf("Digite os valores");
        scanf("%d", &numeros[i]);
        if(numeros[i] < 0){
            qtdNegativos += 1;
        }else{
            somaPositivos += numeros[i];
        }
   }
   printf("Numeros negativos: %d, Soma positivos %d", qtdNegativos, somaPositivos);
}