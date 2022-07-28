#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtdfamilias, carne, arroz, acucar, pao, batata, tomate;
    float leite, feijao, farinha_trigo, cafe, oleo, manteiga, banana;

    printf("Sao quantas familias? ");
    scanf("%d", &qtdfamilias);

    carne = 6*qtdfamilias;
    leite = 7.5*qtdfamilias;
    arroz = 3*qtdfamilias;
    feijao = 4.5*qtdfamilias;
    farinha_trigo = 1.5*qtdfamilias;
    cafe = 600*qtdfamilias/1000;
    oleo = 900*qtdfamilias/1000;
    manteiga = 750*qtdfamilias/1000;
    acucar = 3*qtdfamilias;
    pao = 6*qtdfamilias;
    batata = 6*qtdfamilias;
    tomate = 9*qtdfamilias;
    banana = 7.5*qtdfamilias;

    printf("\nPara cada item alimentar da cesta basica, devera ser arrecadado:\n");

    printf("\n- Carne: %dkg", carne);
    printf("\n- Leite: %.1fL", leite);
    printf("\n- Arroz: %dkg", arroz);
    printf("\n- Feijao: %.1fkg", feijao);
    printf("\n- Farinha de trigo: %.1fkg", farinha_trigo);
    printf("\n- Cafe: %.1fkg", cafe);
    printf("\n- Oleo: %.1fL", oleo);
    printf("\n- Manteiga: %.1fkg", manteiga);
    printf("\n- Acucar: %dkg", acucar);
    printf("\n- Pao: %dkg", pao);
    printf("\n- Batata: %dkg", batata);
    printf("\n- Tomate: %dkg", tomate);
    printf("\n- Banana: %.1f duzias\n\n", banana);

    printf("Nota: os valores decimais para as quantias de cafe, oleo e manteiga serao aproximados para seus menores valores mais proximos.\n\n");

    system("PAUSE");
    return 0;
}
