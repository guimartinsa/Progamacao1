/*O grupo deverá escrever um programa em C que peça ao usuário para digitar os 9 valores reais de uma
matriz A3x3 e em seguida os 9 valores reais de uma matriz B3x3. Ao receber as coordenadas, o programa
deve armazenar estes dados em duas matrizes de reais. Após receber todos os valores e armazená-los nas
duas matrizes, o programa deve calcular o produto das duas matrizes, utilizando algum laço de repetição.
Ao final o programa deve imprimir o resultado do cálculo feito.*/
#include <stdio.h>

int main(void){
  float conj1[4][4] , conj2[4][4] , conj3[4][4];
  int i , j , k;
  printf("\n::::NOVE VALORES DA PRIMEIRA MATRIZ::::\n");
  for (i = 1; i < 4 ; i ++){
    for (j = 1 ; j < 4 ; j ++){
      printf("[%i][%i]=",i,j);
      scanf("%f", &conj1[i][j]);
    }
  }
  
  printf("\n::::NOVE VELORES DASEGUNDA MATRIZ::::\n");
  for (i = 1; i < 4 ; i ++){
    for (j = 1 ; j < 4 ; j ++){
      printf("[%i][%i]=",i,j);
      scanf("%f", &conj2[i][j]);
    }
  }
  
  printf("\n::::O RESULTADO DO PRODUTO DAS MATRIZES[3][3] FOI::::\n");
  for (i = 1 ; i < 4 ; i ++){
    for (j = 1 ; j < 4 ; j ++){
      conj3[i][j] = 0;
      for (k = 1; k < 4 ; k ++){
        conj3[i][j] = conj3[i][j] + conj1[i][k] * conj2[k][j];
      }
    printf("[%.f] ", conj3[i][j]);
    }
    printf(" \n");
  }
}
