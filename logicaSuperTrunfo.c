#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // variaveis da cidade1
    char nome_cidade1[15], estado_cidade1[15], codigo_cidade1[10];
    unsigned pop_cidade1, pontosTuristicos_cidade1;
    double area_cidade1, pib_cidade1, densidadePop_cidade1, pibPerCapta_cidade1;
    int vitorias_cidade1 = 0;

    // variaveis da cidade2
    char nome_cidade2[15], estado_cidade2[15], codigo_cidade2[10];
    unsigned pop_cidade2, pontosTuristicos_cidade2;
    double area_cidade2, pib_cidade2, densidadePop_cidade2, pibPerCapta_cidade2;
    int vitorias_cidade2 = 0;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
     // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("|---------------------------------------|\n");
    printf("|\tBEM-VINDO AO SUPER-TRUNFO       |\n"     );
    printf("|---------------------------------------|\n");

    printf("\n\tCadastre suas cartas\n");
    
    // cadastro da cidade 1
    printf("Cadastro da cidade 1\n");
    printf("Nome da cidade:\n");
    scanf(" %s", &nome_cidade1);

    printf("Estado da cidade:\n");
    scanf(" %s", &estado_cidade1);

    printf("Codigo da cidade:\n");
    scanf(" %s", &codigo_cidade1);

    printf("População:\n");
    scanf(" %u", &pop_cidade1);

    printf("Area(km²):\n");
    scanf(" %lf", &area_cidade1);

    printf("Pib:\n");
    scanf(" %lf", &pib_cidade1);

    printf("Pontos turisticos:\n");
    scanf(" %u", &pontosTuristicos_cidade1);

    // calculo da densidade
    densidadePop_cidade1 = (float) pop_cidade1 / area_cidade1;

    // calculo do pib per capta
    pibPerCapta_cidade1 = pib_cidade1 / (float) pop_cidade1;

    // cadastro da cidade2
    printf("\nCadastro da cidade 2\n");
    printf("Nome da cidade:\n");
    scanf(" %s", &nome_cidade2);

    printf("Estado da cidade:\n");
    scanf(" %s", &estado_cidade2);

    printf("Codigo da cidade:\n");
    scanf(" %s", &codigo_cidade2);

    printf("População:\n");
    scanf(" %u", &pop_cidade2);

    printf("Area(km²):\n");
    scanf(" %lf", &area_cidade2);

    printf("Pib:\n");
    scanf(" %lf", &pib_cidade2);

    printf("Pontos turisticos:\n");
    scanf(" %u", &pontosTuristicos_cidade2);

    // calculo da densidade
    densidadePop_cidade2 = (float) pop_cidade2 / area_cidade2;

    // calculo do pib per capta
    pibPerCapta_cidade2 = pib_cidade2 / (float) pop_cidade2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // compara qual das cartas venceu no atributo selecionado
    if(pop_cidade1 > pop_cidade2)
    {
        printf("A cidade %s, tem mais população.\n", nome_cidade1);
        vitorias_cidade1++;
    }
    else
    {
        printf("A cidade %s, tem mais população.\n", nome_cidade2);
        vitorias_cidade2++;
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    // exibe o vencedor na tela
    if(vitorias_cidade1 > vitorias_cidade2){
        printf("\nA cidade %s venceu\n", nome_cidade1);
    }
    else{
        printf("\nA cidade %s venceu\n", nome_cidade2);
    }


    return 0;
}
