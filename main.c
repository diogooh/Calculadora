#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, ("Portuguese"));
    int num,num2,operacao,voltar;
    printf(" \n \n \n BEM VINDO � CALCULADORA \n \n \n");
    do{
    printf("Digite os 2 n�meros \n");
    scanf("%i%i",&num,&num2);
    printf("Qual � a opera��o que quer usar?? \n 1-Soma \n 2-Subtra��o \n 3-Multiplica��o \n 4-Divis�o\n");
    scanf("%i",&operacao);
    switch(operacao)
    {
        case 1: printf(" OPERADOR: SOMA\n");
                printf(" O Seu resultado � de %i \n",num+num2);break;
        case 2: printf(" OPERADOR: SUBTRA��O\n");
                printf(" O Seu resultado � de %i \n",num-num2);break;
        case 3: printf(" OPERADOR: MULTIPLICA��O \n");
                printf(" O Seu resultado � de %i \n",num*num2);break;
        case 4: printf(" OPERADOR: DIVIS�O\n");
                printf(" O Seu resultado � de %i \n",num/num2);break;
                default: printf("Erro, repita por favor! Algo deu errado");
    }
    printf("Deseja de voltar ao �nicio? \n 1-Sim \n 2-N�o\n");
    scanf("%i",&voltar);
    }while(voltar==1);
    return 0;
}
