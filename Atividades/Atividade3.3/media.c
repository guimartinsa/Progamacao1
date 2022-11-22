#include <stdio.h>
#include <stdlib.h>
int main(void){
    float nt1 , nt2 , nt3 , media;

    printf("Digite a primeira nota nota do aluno:");
    scanf("%f", &nt1);
    printf("Digite a segunda nota nota do aluno:");
    scanf("%f", &nt2);
    printf("Digite a terceira nota nota do aluno:");
    scanf("%f", &nt3);
    media = (nt1 + nt2 + nt3)/3;

    printf("A media do aluno foi %.2f\n" , media);
    if (media >= 7){
        printf("O aluno foi APROVADO!");
    }else
        printf("O aluno foi REPROVADO!");
    return 0;
}