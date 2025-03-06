#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
     //carta_1
  char estado, codigoCarta[30], nomeCidade[30];
  int populacao, numPontosTuristicos;
  float areaCidade, pib;

  printf("Carta 1: \n");
  printf("\n");
  scanf("Insira uma letra de 'A' a 'H':  %c", &estado);
  
  printf("Código da carta: ");
  scanf(" %s", codigoCarta);
  
  printf("Nome da cidade: ");
  scanf(" %s", nomeCidade);

  printf("População: ");
  scanf(" %d", &populacao);

  printf("Área (em km²): ");
  scanf(" %f", &areaCidade);

  printf("PIB: ");
  scanf(" %f", &pib);
  
  printf("Número de pontos turísticos: ");
  scanf(" %d", &numPontosTuristicos);
  
  printf("Estado: %c\n", estado);
  printf("Código da Carta: %s\n", codigoCarta);
  printf("Nome da Cidade: %s\n", nomeCidade);
  printf("População: %d\n", populacao);
  printf("Área: %f\n", areaCidade);
  printf("PIB: %f\n", pib);
  printf("Número de pontos turísticos: %d\n", numPontosTuristicos );

  //Carta_2
  printf("Carta 2: \n");
  printf("Insira uma letra de 'A' a 'H': \n");
  scanf(" %c", &estado);
  
  printf("Código da carta: ");
  scanf(" %s", codigoCarta);
  
  printf("Nome da cidade: ");
  scanf(" %s", nomeCidade);

  printf("População: ");
  scanf(" %d", &populacao);

  printf("Área (em km²): ");
  scanf(" %f", &areaCidade);

  printf("PIB: ");
  scanf(" %f", &pib);
  
  printf("Número de pontos turísticos: ");
  scanf(" %d", &numPontosTuristicos);
  
  printf("Estado: %c\n", estado);
  printf("Código da Carta: %s\n", codigoCarta);
  printf("Nome da Cidade: %s\n", nomeCidade);
  printf("População: %d\n", populacao);
  printf("Área: %f\n", areaCidade);
  printf("PIB: %f\n", pib);
  printf("Número de pontos turísticos: %d", numPontosTuristicos);
    
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
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    return 0;
}
