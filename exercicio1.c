#include <stdio.h>

main(){
    //inicializar o vetor
        int A[7] = {1, 0, 5, -2, -5, 7, 0};
        int soma;

        soma = A[0] + A[1] + A[5];
      //  printf("%d", soma);

        A[4] = 100;

        printf("----------------");

        for(int indice = 0; indice < 7; indice++){
            printf("%d\n", A[indice]);
        }
}