#include <stdio.h>

    unsigned int populacao1 = 6211, populacao2 = 44220;
    unsigned int ptTuristico1 = 9650, ptTuristico2 = 16820;
    long double densidadePopulacao1, densidadePopulacao2, percaptaPIB1, percaptaPIB2;
    float area1 = 43.696, pib1 = 1.3, area2 = 248.219, pib2 = 3.5;
    char pais1[50] = "Brasil", pais2[50] = "Brasil";
    char estado1[50] = "Rio de Janeiro", estado2[50] = "São Paulo";
    char cidade1[50] = "Duque de Caxias", cidade2[50] = "Adamantina";
    char codigoC1[5] = "C1", codigoC2[5] = "C2"; 
    long double superPoder1, superPoder2;


int main() {

    // CADASTRO DA PRIMEIRA CARTA

    printf("Cadastre sua Primeira carta! \n\n");

    // PAIS, ESTADO, CIDADE e CODIGO DA CARTA 1

    printf("A PRIMEIRA CARTA terá o nome de qual País: ");
    //scanf(" %[^\n]", pais1);
    printf("%s \n\n", pais1);

    printf("Qual o nome do ESTADO: ");
    //scanf(" %[^\n]", estado1);
    printf("%s \n\n", estado1);

    printf("Agora o nome da CIDADE: ");
    //scanf(" %[^\n]", cidade1);
    printf("%s \n\n", cidade1);

    // POPULÇÃO CARTA 1

    printf("Informe a POPULAÇÃO do ESTADO: ");
    //scanf("%ld", &populacao1);
    printf("%u milhões de pessoas.\n\n", populacao1);

    // ÁREA CARTA 1

    printf("Informe de quanto é a ÁREA em kM² do ESTADO: ");
    //scanf("%f", &area1);
    printf("%.2f Km².\n\n", area1);

    // PIB CARTA 1

    printf("Qual o PIB de ESTADO: ");
    //scanf("%f", &pib1);
    printf("%.2f Trilhões.\n\n", pib1);

    // PONTOS TURÍSTICOS CARTA 1

    printf("Por último informe quantos PONTOS TURÍSTICOS possue o ESTADO: ");
    //scanf("%d", &ptTuristico1);
    printf("%d pontos de turismo.\n\n", ptTuristico1);

    // FINALIZAÇÃO CARTA 1

    printf("A carta do País %s, estado %s e cidade %s foi cadastrada e possui o código %s. \n\n", pais1, estado1, cidade1, codigoC1);

    printf("Com isso concluimos nossa primeira carta e Vamos fazer nossa segunda e última carta agora. \n\n");


    // AQUI AGORA JÁ COMEÇA O CADASTRO DA SEGUNDA CARTA

    // PAIS, ESTADO, CIDADE e CODIGO DA CARTA 2

    printf("A PRIMEIRA CARTA terá o nome de qual País: ");
    //scanf(" %[^\n]", pais2);
    printf("%s \n\n", pais2);

    printf("Qual o nome do ESTADO: ");
    //scanf(" %[^\n]", estado2);
    printf("%s \n\n", estado2);

    printf("Agora o nome da CIDADE: ");
    //scanf(" %[^\n]", cidade2);
    printf("%s \n\n", cidade2);

    // POPULÇÃO CARTA 2

    printf("Informe a POPULAÇÃO do ESTADO: ");
    //scanf("%ld", &populacao2);
    printf("%u milhões de pessoas.\n\n", populacao2);

    // ÁREA CARTA 2

    printf("Informe de quanto é a ÁREA em kM² do ESTADO: ");
    //scanf("%f", &area2);
    printf("%.2f Km².\n\n", area2);

    // PIB CARTA 2

    printf("Qual o PIB de ESTADO: ");
    //scanf("%f", &pib2);
    printf("%.2f Trilhões.\n\n", pib2);

    // PONTOS TURÍSTICOS CARTA 2

    printf("Por último informe quantos PONTOS TURÍSTICOS possue o ESTADO: ");
    //scanf("%d", &ptTuristico2);
    printf("%d pontos de turismo.\n\n", ptTuristico2);

    // FINALIZAÇÃO CARTA 2

    printf("A carta do País %s, estado %s e cidade %s foi cadastrada e possui o código %s. \n\n", pais2, estado2, cidade2, codigoC2);

    printf("Com isso concluimos nossa segunda carta e Vamos fazer agora a comparação entre elas. \n\n");

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);*/

    return 0;
}
