#include <stdio.h>

// Função para calcular a densidade populacional
float calcularDensidadePopulacional(int populacao, float area) {
    return populacao / area;
}

// Função para calcular o PIB per capita
float calcularPIBPerCapita(float pib, int populacao) {
    return pib * 1000000000 / populacao;  // PIB em reais
}

// Função para comparar duas cartas e exibir o resultado
void compararCartas(int populacao1, int populacao2, float area1, float area2, float pib1, float pib2, 
                    int pontosTuristicos1, int pontosTuristicos2, float densidade1, float densidade2, 
                    float pibPerCapita1, float pibPerCapita2) {

    // Escolha do atributo para comparação - aqui está escolhido "População"
    printf("\nComparação de cartas (Atributo: População):\n");

    // Exibir dados das cartas
    printf("Carta 1 - %s: %d\n", "São Paulo", populacao1);
    printf("Carta 2 - %s: %d\n", "Rio de Janeiro", populacao2);

    // Comparando População
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    // Exibir as informações adicionais de cada carta
    printf("\nInformações da Carta 1:\n");
    printf("Estado: %s\n", "São Paulo");
    printf("Código: %s\n", "A01");
    printf("Nome da Cidade: %s\n", "São Paulo");
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nInformações da Carta 2:\n");
    printf("Estado: %s\n", "Rio de Janeiro");
    printf("Código: %s\n", "B02");
    printf("Nome da Cidade: %s\n", "Rio de Janeiro");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
}

int main() {
    // Declaração de variáveis para Carta 1
    char estado1[] = "SP", codigo1[] = "A01", nome1[] = "São Paulo";
    int populacao1 = 12325000, pontosTuristicos1 = 50;
    float area1 = 1521.11, pib1 = 699.28;
    float densidade1, pibPerCapita1;

    // Declaração de variáveis para Carta 2
    char estado2[] = "RJ", codigo2[] = "B02", nome2[] = "Rio de Janeiro";
    int populacao2 = 6748000, pontosTuristicos2 = 30;
    float area2 = 1200.25, pib2 = 300.50;
    float densidade2, pibPerCapita2;

    // Cálculo da densidade populacional e PIB per capita para Carta 1
    densidade1 = calcularDensidadePopulacional(populacao1, area1);
    pibPerCapita1 = calcularPIBPerCapita(pib1, populacao1);

    // Cálculo da densidade populacional e PIB per capita para Carta 2
    densidade2 = calcularDensidadePopulacional(populacao2, area2);
    pibPerCapita2 = calcularPIBPerCapita(pib2, populacao2);

    // Comparar as duas cartas com base na População
    compararCartas(populacao1, populacao2, area1, area2, pib1, pib2, 
                   pontosTuristicos1, pontosTuristicos2, densidade1, densidade2, 
                   pibPerCapita1, pibPerCapita2);

    return 0;
}
