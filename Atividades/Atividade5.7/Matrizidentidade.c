/*O aluno deverá criar um programa em linguagem C que pede para o usuário digitar um inteiro positivo
que represente a ordem de uma matriz identidade n. Após receber o valor, o programa deverá alocar
dinamicamente a matriz com o tamanho adequado segundo a ordem n informada e preencher a matriz
com os valores de uma matriz identidade In. Ao final o programa deverá imprimir na tela a matriz identidade
In com os seus valores adequadamente preenchidos.*/

#include <stdio.h>
#include <locale.h>

int main (){
    //setlocale(LC_ALL, "Portuguese");
    int n, i, j;
    int **matriz;
    printf("Digite a ordem da matriz identidade: ");
    scanf("%d", &n);
    matriz = (int**) malloc(n*sizeof(int*));
    for(i=0; i<n; i++){
        matriz[i] = (int*) malloc(n*sizeof(int));
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j){
                matriz[i][j] = 1;
            }else{
                matriz[i][j] = 0;
            }
        }
    }
    printf("O valor resultante da matriz identidade é:\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}