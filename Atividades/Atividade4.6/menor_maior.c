/*1.12 Crie um programa em linguagem C, utilizando o comando for, que imprima uma mensagem pedindo
para o usuário digitar dois números inteiros. O programa deve imprimir todos os números inteiros do
menor até o maior dos dois. O programa deve terminar após imprimir todos os números.*/

int main (void){
    int num , num2 , menor , maior , i ;
    printf("Digite um numero inteiro:");
    scanf("%d" ,&num);
    printf("Digite outro numero inteiro:");
    scanf("%d" ,&num2);

    if (num < num2){
        menor = num;
        maior = num2;
    }else{
        menor = num2;
        maior = num;
    }

    for(i= menor ; i <= maior ; i++){
        printf("%i\n" , i);
    }
    return 0;

}