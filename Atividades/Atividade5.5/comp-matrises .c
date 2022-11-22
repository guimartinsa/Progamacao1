/*Leia do teclado duas matrizes 3 x 3 de números inteiros e escreva
na tela uma terceira matriz com os maiores dos valores de cada
posição das matrizes lidas.*/

#include <stdio.h>

int main(){
  int conj1[3][3] , conj2[3][3] , conj3[3][3];
  int i , j;
  printf("\n::::ENTRADA DA PRIMEIRA MATRIZ::::\n");
  for (i = 0; i < 3 ; i ++){
    for (j = 0 ; j < 3 ; j ++){
      printf("[%i][%i]=",i,j);
      scanf("%i", &conj1[i][j]);
    }
  }
  
  printf("\n::::ENTRADA DA SEGUNDA MATRIZ::::\n");
  for (i = 0; i < 3 ; i ++){
    for (j = 0 ; j < 3 ; j ++){
      printf("[%i][%i]=",i,j);
      scanf("%i", &conj2[i][j]);
    }
  }
  printf("\n::::O RESULTADO DA MATRIZ É::::\n");
  for (i = 0 ; i < 3 ; i ++){
    for (j = 0 ; j < 3 ; j ++){
      if(conj1[i][j]>conj2[i][j]){
        conj3[i][j]=conj1[i][j];
      }else conj3[i][j] = conj2[i][j];
      printf(" [%1.3i] ",conj3[i][j]); 
    }
      printf(" \n");
  }
}