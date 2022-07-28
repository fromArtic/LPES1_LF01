#include <stdio.h>
#include <stdlib.h>

int main(){
    int preco_combustivel, combustivel_consumido, ValorTotalGastoComCombustivel, odmt_inicio, odmt_final, valor_recebido, lucro;

    printf("Favor digitar apenas valores numericos.\n\n");

    printf("Qual o preco do combustivel, em R$/L? ");
    scanf("%d", &preco_combustivel);

    printf("Quantos litros de combustivel foram consumidos? ");
    scanf("%d", &combustivel_consumido);

    ValorTotalGastoComCombustivel = preco_combustivel*combustivel_consumido;

    printf("\nSeu gasto total relacionado ao combustivel foi de: %d", ValorTotalGastoComCombustivel);
    printf(" reais.\n\n");

    printf("Quanto o odometro marcava ao inicio do dia? ");
    scanf("%d", &odmt_inicio);

    printf("E quanto marcava ao final do dia? ");
    scanf("%d", &odmt_final);

    printf("\nMarcacao do odometro ao inicio do dia: %d", odmt_inicio);
    printf("\nMarcacao do odometro ao final do dia: %d", odmt_final);
    printf("\n\n");

    printf("Qual foi o valor total recebido das corridas? ");
    scanf("%d", &valor_recebido);

    lucro = valor_recebido - ValorTotalGastoComCombustivel;

    printf("\nSeu lucro foi de: %d", lucro);
    printf(" reais.\n");

    system("PAUSE");
    return 0;
}
