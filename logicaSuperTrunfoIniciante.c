#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    float area, area2, pib, pib2;
    char pais[20], estado[20], estado2[20], cidade[20], cidade2 [20], codcarta[20], codcarta2[20];
    int populacao, populacao2, pt, pt2; 

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("Para começar o jogo, digite um nome para o Pais do jogo:\n"); 
    scanf("%s", &pais);

    printf("Agora, digite um nome para o Estado da primeira carta:\n");
    scanf("%s", &estado);
    printf("Estado cadastrado como: %s\n", estado);
printf("Digite o codigo da sua primeira carta a ser criada. Sem espaços, por exemplo: A01, A02..\n");
    scanf("%s", &codcarta);
    printf("Código cadastrado como: %s\n", codcarta);
printf("Agora, escolha apenas um nome para a cidade: (Não usar nomes duplos) \n");
    scanf("%s", &cidade);
    printf("Cidade cadastrada como: %s\n", cidade);
printf("Agora, informe a Populacao da  cidade: %s\n", cidade);
    scanf("%d", &populacao);
    printf("População cadastrada: %d habitantes \n", populacao);
printf("Dessa vez, informe a area total (o tamanho) da cidade: %s (Deve ser decimal) \n", cidade);
    scanf("%f", &area);
    printf("Área cadastrada como: %f km² \n", area);
printf("Informe qual sera o PIB da cidade: %s (Deve ser decimal)\n", cidade);
    scanf("%f", &pib);
    printf("PIB cadastrado como: %f bilhões de reais\n", pib);
printf("Informe o numero de pontos turisticos da cidade %s\n", cidade);
    scanf("%d", &pt);
    printf("Número de Pontos Turisticos cadastrado como: %d\n", pt);

    printf("Agora vamos criar a sua Segunda Carta! \n");

    printf("Digite um nome para o Estado da segunda carta:\n");
    scanf("%s", &estado2);
    printf("Estado cadastrado como: %s\n", estado2);
printf("Digite o codigo da sua segunda carta. Sem espaços, por exemplo: A01, A02..\n");
    scanf("%s", &codcarta2);
    printf("Código cadastrado como: %s\n", codcarta2);
printf("Agora, escolha apenas um nome para a cidade: (Não usar nomes duplos) \n");
    scanf("%s", &cidade2);
    printf("Cidade cadastrada como: %s\n", cidade2);
printf("Agora, informe a Populacao da  cidade: %s\n", cidade2);
    scanf("%d", &populacao2);
    printf("População cadastrada: %d habitantes \n", populacao2);
printf("Dessa vez, informe a area total (o tamanho) da cidade: %s (Deve ser decimal) \n", cidade2);
    scanf("%f", &area2);
    printf("Área cadastrada como: %f km² \n", area2);
printf("Informe qual sera o PIB da cidade: %s (Deve ser decimal)\n", cidade2);
    scanf("%f", &pib2);
    printf("PIB cadastrado como: %f bilhões de reais\n", pib2);
printf("Informe o numero de pontos turisticos da cidade %s\n", cidade2);
    scanf("%d", &pt2);
    printf("Número de Pontos Turisticos cadastrado como: %d\n", pt2);

    float denspop = (float) populacao / area;
    float pibpcap = (float) pib / populacao;
    float denspop2 = (float) populacao2 / area2;
    float pibpcap2 = (float) pib2 / area2;

     printf("Confira os valores da sua primeira carta: \n");
    printf("Carta: %s\n Nome do Pais: %s\n Estado: %s\n Cidade: %s\n População: %d habitantes \n Area: %f km² \n PIB: %f  bilhões de reais\n Pontos turistico: %d\n Densidade Populacional: %f\n PIB per Capita: %f\n", codcarta, pais, estado, cidade, populacao, area, pib, pt, denspop, pibpcap);
    
    printf("Agora Confira os valores da sua segunda carta: \n");
    printf("Carta: %s\n Nome do Pais: %s\n Estado: %s\n Cidade: %s\n População: %d habitantes \n Area: %f km² \n PIB: %f bilhões de reais \n Pontos turistico: %d\n Densidade Populacional: %f\n PIB per Capita: %f\n", codcarta2, pais, estado2, cidade2, populacao2, area2, pib2, pt2, denspop2, pibpcap2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    if (denspop < denspop2) {
            printf("A cidade %s possui uma Densidade Populacional de %f\nJá a Densidade Populacional da cidade %s é de %f\nA cidade vencedora então foi: %s\n", cidade, denspop, cidade2, denspop2, cidade);
    } else if (denspop2 < denspop){
            printf("A cidade %s possui uma Densidade Populacional de %f\nJá a Densidade Populacional da cidade %s é de %f\nA cidade vencedora então foi: %s\n", cidade2, denspop2, cidade, denspop, cidade2);
        } else { 
            printf("EMPATE. Os dois valores são iguais. \n");
        }
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
        printf (" FIM DE JOGO.");
    return 0;
}