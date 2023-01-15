#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, ("Portuguese"));
    int num,num2,operacao,voltar;
    printf(" \n \n \n BEM VINDO À CALCULADORA \n \n \n");
    do{
    printf("Digite os 2 números \n");
    scanf("%i%i",&num,&num2);
    printf("Qual é a operação que quer usar?? \n 1-Soma \n 2-Subtração \n 3-Multiplicação \n 4-Divisão\n");
    scanf("%i",&operacao);
    switch(operacao)
    {
        case 1: printf(" OPERADOR: SOMA\n");
                printf(" O Seu resultado é de %i \n",num+num2);break;
        case 2: printf(" OPERADOR: SUBTRAÇÃO\n");
                printf(" O Seu resultado é de %i \n",num-num2);break;
        case 3: printf(" OPERADOR: MULTIPLICAÇÃO \n");
                printf(" O Seu resultado é de %i \n",num*num2);break;
        case 4: printf(" OPERADOR: DIVISÃO\n");
                printf(" O Seu resultado é de %i \n",num/num2);break;
                default: printf("Erro, repita por favor! Algo deu errado");break;
    }
    printf("Deseja de voltar ao ínicio? \n 1-Sim \n 2-Não\n");
    scanf("%i",&voltar);
    }while(voltar==1);
    return 0;
}
