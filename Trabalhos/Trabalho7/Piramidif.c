/*
Integrantes do grupo:
Guilherme Martins Andrade-2022200997
Hiago do Carmo Lopes-2022200636
Gustavo Wesley de Souza-2022200551
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *inteiros, *piramide;
    int n[20];
    inteiros = fopen("seqinteiros.dat", "r");
    for(int i = 0; i < 20; i++)
        fscanf(inteiros, "%d", &n[i]);
    fclose(inteiros);
    piramide = fopen("piramidif.dat", "w");
    for (int c1 = 18; c1 >= 0; c1--) {
        for (int c2 = 0; c2 <= c1; c2++) {
            n[c2] = n[c2 + 1] - n[c2];
            fprintf(piramide, "%4d ", n[c2]);
        }
        fprintf(piramide, "\n");
    }
    fclose(piramide);
		printf("Arquivo criado com sucesso!!!!");
    return 0;
}