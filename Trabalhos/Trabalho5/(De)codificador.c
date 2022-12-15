/*  Nas operações de codificação e decodificação a mensagem M deve aceitar mensagem de até 60 caracteres, não
necessitando ser capaz de manipular mensagens maiores. Da mesma forma, a mensagem codificada C deve
aceitar mensagem de até 60 números inteiros, não necessitando ser capaz de manipular mensagens maiores.
Ao iniciar a codificação, o programa deverá solicitar que o usuário digite a mensagem M sem espaços,
para codificá-la. Após receber a mensagem e fazer os cálculos correspondentes, o programa deverá imprimir
na tela o tamanho da mensagem digitada e a mensagem codificada C correspondente.
Ao iniciar a decodificação, o programa deverá solicitar que o usuário primeiramente digite o tamanho
da mensagem que será digitada, em seguida o programa deve solicitar que o usuário digite a mensagem
codificada C, para decodificá-la. Após receber a mensagem e fazer os cálculos correspondentes, o programa
deverá imprimir na tela mensagem M correspondente.
A mensagem M deverá sempre ser tratada, tanto para leitura quanto para impressão, como uma sequência
(vetor) de caracteres. Já a mensagem codificada C deverá sempre ser tratada, tanto para leitura quanto
para impressão, como uma sequência (vetor) de números inteiros.
A chave a ser utilizada em ambos os processos será K = "EARTE2020/1".
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int i , j , cond=0 , tam=0;
    char frase[100] , chave[100] , codificada[100] , decodificada[100];
    printf("Oque deseja fazer?\n[1]Codificar\n[2]Decodificar\n[3]-Encerrar\n");
    scanf("%d",&cond);
    if(cond==1){
        printf("Digite a frase que deseja codificar:");
        scanf("%s",frase);
        printf("Digite a chave:");
        scanf("%s",chave);
        for(i=0;frase[i]!='\0';i++){
            codificada[i]=frase[i]+chave[i];
        }
        codificada[i]='\0';
        printf("Frase codificada: %s \n",codificada);
    }else if(cond==2){
        printf("Digite o tamanho da frase que deseja decodificar:");
        scanf("%d",&tam);
        printf("Digite a frase que deseja decodificar:");
        scanf("%s",frase);
        printf("Digite a chave para descodificar a mensagem:");
        scanf("%s",chave);
        for(j=0;frase[j]!='\0';j++){
            decodificada[j]=frase[j]-chave[j];
        }
        decodificada[j]='\0';
        printf("Frase decodificada: %s \n",decodificada);
    }else if(cond==3){
        printf("Encerrando programa...");
    }
}









/*int main (){
    setlocale(LC_ALL,"Portuguese");
    int i , j , cond=0;
    char frase[100] , chave[100] , codificada[100] , decodificada[100];
    printf("Oque deseja fazer?\n[1]Codificar\n[2]Decodificar\n[3]-Encerrar\n");
    scanf("%d",&cond);
    if(cond==1){
        printf("Digite a frase que deseja codificar:");
        scanf("%s",frase);
        printf("Digite a chave:");
        scanf("%s",chave);
        for(i=0;frase[i]!='\0';i++){
            codificada[i]=frase[i]+chave[i];
        }
        codificada[i]='\0';
        printf("Frase codificada: %s \n",codificada);
    }else if(cond==2){
        printf("Digite a frase que deseja decodificar:");
        scanf("%s",frase);
        printf("Digite a chave para descodificar a mensagem:");
        scanf("%s",chave);
        for(j=0;frase[j]!='\0';j++){
            decodificada[j]=frase[j]-chave[j];
        }
        decodificada[j]='\0';
        printf("Frase decodificada: %s \n",decodificada);
    }else if(cond==3){
        printf("Encerrando programa...");
    }



    return 0;
}

    
    /*printf("Digite a frase que deseja codificar: ");
    gets(frase);
    printf("Digite a chave: ");
    gets(chave);
    for(i=0;frase[i]!='\0';i++){
        codificada[i]=frase[i]+chave[i];
    }
    codificada[i]='\0';
    printf("Frase codificada: %s \n",codificada);
    printf("Deseja decodificar a frase? (1-Sim/2-Não)");
    gets(cond);
    if(cond==1){
        for(j=0;codificada[j]!='\0';j++){
            decodificada[j]=codificada[j]-chave[j];
        }
        decodificada[j]='\0';
        printf("Frase decodificada: %s \n",decodificada);
    }else if(cond==2){
        printf("Deseja codificar a frase? (1-Sim/2-Não)");
        gets(cond);
        if(cond==1){
            for(i=0;frase[i]!='\0';i++){
                codificada[i]=frase[i]+chave[i];
            }
            codificada[i]='\0';
            printf("Frase codificada: %s \n",codificada);
        }
    }
    return 0;
}8*/
