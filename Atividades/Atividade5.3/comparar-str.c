/*Crie um programa em linguagem C que receba duas palavras de cinco letras.
O programa deve calcular quantas letras idênticas na mesma posição existem entre as duas palavras.
EX: P = "Corda" e Q = "carne", neste caso o programa deve retornar que existem 2 coincidências, sendo elas a letra ’c’ na primeira posição e a letra ’r’ na terceira posição.
Ao final, o programa deve imprimir quantas coincidências foram encontradas entre as duas palavras recebidas.
Considere letras maiúsculas e minúsculas como iguais entre si, por exemplo ’a’ e ’A’ devem ser consideradas idênticas, assim como ’b’ e ’B’, etc.*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <ctype.h>
#include <string.h>
// procedimento que converte uma string para minúsculo
void minusculo(char s1[], char s2[]){
    int i = 0;
    while(s1[i] != '\0'){
        s2[i] = tolower(s1[i]);
        i++;
    }
    s2[i] = '\0'; // caracteer que indica o fim da string
}

int main(){
  setlocale(LC_ALL, "Portuguese");
  char str1[6], str2[6]; 
  char strm1[6] , strm2[6];
  int cont = 0, i = 0; 
  
  printf("Digite a primeira palavra com até cinco letras: \n");
  scanf("%s", str1);
  minusculo(str1 , strm1);
  //printf("%s\n", strm1);
  
  printf("Digite a segunda palavra com até cinco letras: \n");
  scanf("%s", str2);
  minusculo(str2 , strm2);
  //printf("%s\n", strm2);
  
for(i = 0; i<5; i++){
  if (strm1[i] == strm2[i]) cont++;
}
  
  printf("O total de caracteres iguais foi: %d\n",cont);

  return 0;
}