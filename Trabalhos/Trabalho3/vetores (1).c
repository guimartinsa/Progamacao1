/*Integrantes do grupo:
Guilherme Martins Andrade-2022200997
Hiago do Carmo Lopes-2022200636
Gustavo Wesley de Souza-2022200551*/

#include <stdio.h>

int main() {
  int i = 1 , x[4], y[4] , p = 0;
  
  for(i=1; i<4; i++){
    printf("Digite a %dº cordenada do vetor X:", i);
    scanf("%i",&x[i]);
  }
  
    for(i=1; i<4; i++){
      printf("Digite a %dº cordenada do vetor Y:",i);
      scanf("%i",&y[i]);
  
    for(i=1; i<4; i++)
      p = p + x[i] * y[i];
    printf("O resultado de produto escalar é:%i",p);
    
  return 0;
  }
}