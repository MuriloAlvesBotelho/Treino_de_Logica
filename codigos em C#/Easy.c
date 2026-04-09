#include <stdio.h>

int main(){

    int inicio,fim,par=0,impar=0,imparquant=0,parquant=0,somainter=0;

    printf("Insira o numero de inicio\n");
    scanf("%d",&inicio);
    printf("Insira o numero final\n");
    scanf("%d",&fim);

    while(inicio>=fim){
            printf("Numeros Invalidos(o numero de inicio deve ser menor que fim)\n");
            printf("Insira o numero de inicio\n");
            scanf("%d",&inicio);
            printf("Insira o numero final\n");
            scanf("%d",&fim);
        }
        printf("====================================================\n");
        int cont=0;
        int maiorprimo=inicio;

        while (inicio<=fim){
            printf("[Numero %d]-->",inicio);
            for(int i=inicio;i>0;i--){
                if(inicio%i==0){
                cont=cont+1;
                }
        }

        if(cont==2){
            printf("primo | ");
            if(inicio>maiorprimo){
                maiorprimo=inicio;
            }
        }else{
            printf("não primo | ");
        }
        if (inicio%2==0){
            par=par+inicio;
            parquant++;
            printf("par\n");
        }else{
            impar=impar+inicio;
            imparquant++;
            printf("é impar\n");
        }
        inicio++;
        somainter=somainter+inicio;
        cont=0;
    }
    printf("Houve %d numeros pares e %d numeros impares\nSoma dos intervalos = %d;\nO maior primo foi %d\n",parquant,imparquant,somainter,maiorprimo);
    printf("A soma dos pares até agora é %d\nA soma dos impares até agora é %d\n",par,impar);
}