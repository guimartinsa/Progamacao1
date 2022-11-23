/*Integrantes do grupo:
Guilherme Martins Andrade-2022200997
Hiago do Carmo Lopes-2022200636
Gustavo Wesley de Souza-2022200551
*/

#include <stdio.h>

int main() {

  char cpf[12];
  int icpf[12];
  int i, somador = 0, dg1, result1, result2, dg2, valor;

  printf("Digite o cpf: ");
  scanf(" %s", cpf);

  for (i = 0; i < 11; i++) {
    icpf[i] = cpf[i] - 48;
  }

  for (i = 0; i < 9; i++) {
    somador += icpf[i] * (10 - i);
  }

  result1 = somador % 11;

  if ((result1 == 0) || (result1 == 1)) {
    dg1 = 0;
  }

  else {
    dg1 = 11 - result1;
  }

  somador = 0;

  for (i = 0; i < 10; i++) {
    somador += icpf[i] * (11 - i);
  }

  valor = (somador / 11) * 11;
  result2 = somador - valor;

  if ((result2 == 0) || (result2 == 1)) {
    dg2 = 0;
  }

  else {
    dg2 = 11 - result2;
  }

  if ((dg1 == icpf[9]) && (dg2 == icpf[10])) {
    printf("\nCPF VALIDADO.\n");
  } else {
    printf("CPF invalido ou com problema nos digitos.\n");
  }
  return 0;
}