#include <stdio.h>
#include <string.h>

int main() {

        // Dados do Brasil

    char Pais[30] = "Brasil";
    char Carta[30] = "A01";
    char Estado[30] = "Pernambuco";
    float Populacao = 211.1;
    float Area = 8.510000;
    float Pib = 2.1740;
    int PontosTuristicos = 335;

        // Dados da Argentina

    char Pais1[30] = "Argentina";
    char Carta1[30] = "A02";
    char Estado1[30] = "Buenos Aires";
    float Populacao1 = 46.7;
    float Area1 = 2.780000;
    float Pib1 = 646.1;
    int PontosTuristicos1 = 220;

    char escolha[30];

    printf("Digite o país? (Brasil ou Argentina): \n");
    scanf("%s", escolha);

    if (strcmp(escolha, "Brasil") == 0) {
        printf("Carta: %s\n", Carta);
    } else if (strcmp(escolha, "Argentina") == 0) {
        printf("Carta: %s\n", Carta1);
    } else {
        printf("País inválido.\n");
    }

        // Comparações
        
    if (Populacao >= Populacao1) {
        printf("A população do Brasil é de 211,1 milhões de habitantes.\n");
    } else {
        printf("A população da Argentina é de 46,7 milhões de habitantes.\n");
    }

    if (Area != Area1) {
        printf("A extensão do Brasil é de 8.510.000 km²\n");
    } else {
        printf("A extensão da Argentina é de 2.780.000 km²\n");
    }

    if (Pib > Pib1) {
        printf("O PIB do Brasil é de 2,174 trilhões USD\n");
    } else {
        printf("O PIB da Argentina é de 646,1 bilhões USD\n");
    }

    if (Area > Area1) {
        printf("O Brasil é o vencedor por sua extensão e seu PIB!\n");
    } else {
        printf("A Argentina é a vencedora por sua extensão e seu PIB!\n");
    }

    return 0;
}
