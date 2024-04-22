#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10

main() {
  int vet[TAM], x, div[TAM], cont = 0;
  for(x = 0; x < TAM; x++){
    printf("Digite o %iº número: ", x + 1);
    scanf("%i", &vet[x]);
    if(vet[x] % 3 == 0 && vet[x] % 5 == 0){
      div[cont] = vet[x];
      cont = cont + 1;
    }
  }
  printf("\nVetor: ");
  for(x = 0; x < TAM; x++){
    if(x == TAM - 1){
      printf("%i\n", vet[x]);
    }
    else{
      printf("%i - ", vet[x]);
    }
  }
  printf("Números divisíveis por 3 e por 5: ");
  for(x = 0; x < cont; x++){
    if(x == cont - 1){
      printf("%i\n", div[x]);
    }
    else{
      printf("%i - ", div[x]);
    }
  }
  if(cont == 0){
      printf("Nenhum número encontrado");
  }
}