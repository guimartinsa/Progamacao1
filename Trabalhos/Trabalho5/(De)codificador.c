/*Nas operações de codificação e decodificação a mensagem M deve aceitar mensagem de até 60 caracteres, não 
necessitando ser capaz de manipular mensagens maiores. Da mesma forma, a mensagem codificada C deve 
aceitar mensagem de até 60 números inteiros, não necessitando ser capaz de manipular mensagens maiores. 
Ao iniciar a codificação, o programa deverá solicitar que o usuário digite a mensagem M sem espaços, 
para codificá-la. Após receber a mensagem e fazer os cálculos correspondentes, o programa deverá imprimir 
na tela o tamanho da mensagem digitada e a mensagem codificada C correspondente. 
Ao iniciar a decodificação, o programa deverá solicitar que o usuário primeiramente digite o tamanho 
da mensagem que será digitada, em seguida o programa deve solicitar que o usuário digite a mensagem 
codificada C, para decodificá-la. Após receber a mensagem e fazer os cálculos correspondentes, o programa 
deverá imprimir na tela mensagem M correspondente. 
A mensagem M deverá sempre ser tratada, tanto para leitura quanto para impressão, como uma sequência 
(vetor) de caracteres. Já a mensagem codificada C deverá sempre ser tratada, tanto para leitura quanto 
para impressão, como uma sequência (vetor) de números inteiros. 
A chave a ser utilizada em ambos os processos será K = "EARTE2020/1".*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int i , j , cond=0 , tam=0 , codificada[60] ;
    char frase[60] , chave[60] , decodificada[60];
    do{
        printf("=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Oque deseja fazer?\n[1]Codificar\n[2]Decodificar\n[3]Encerrar\n");
        printf("=-=-=-=-=-=-=-=-=-=-=-=\n");
        scanf("%d",&cond);
        if(cond==1){
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("Digite a frase que deseja codificar de ate 60 caracteres:\n");
            scanf("%s",frase);
            printf("Digite a chave de ate 60 caracteres:");
            scanf("%s",chave);
            printf("Frase codificada foi:");
            for(i=0 ; frase[i]!='\0' ; i++){
                codificada[i] = frase[i] ^ chave[i];
                printf("%i ",codificada[i]);
            }
            printf("\n");
            codificada[i]='\0';
            printf("Tamanho da frase foi: %d \n", i);
        }
        if(cond==2){
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("Digite o tamanho da frase que deseja decodificar:");
            scanf("%d",&tam);
            printf("Digite a chave de ate 60 caracteres:");
            scanf("%s",chave);
            printf("Frase decodificada foi:");
            for(i=0 ; i<tam ; i++){
                decodificada[i] = codificada[i] ^ chave[i];
                printf("%c",decodificada[i]);
            }
            printf("\n");
            decodificada[i]='\0';
        }
    }while(cond!=3);
    return 0;
}
