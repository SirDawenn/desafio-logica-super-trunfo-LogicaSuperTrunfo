#include <stdio.h>

int main() {
  // Dados das cartas (Rio de Janeiro e São Paulo)
  char estado1 = 'B';
  char codigo1[] = "B01";
  char nome_cidade1[] = "Rio de Janeiro";
  int populacao1 = 6748000;
  float area1 = 1200.25;
  float pib1 = 300.50;
  int pontos_turisticos1 = 30;

  char estado2 = 'A';
  char codigo2[] = "A01";
  char nome_cidade2[] = "São Paulo";
  int populacao2 = 12325000;
  float area2 = 1521.11;
  float pib2 = 699.28;
  int pontos_turisticos2 = 50;

  // Cálculo da Densidade Populacional e PIB per capita
  float densidade_populacional1 = (float)populacao1 / area1;
  float pib_per_capita1 = pib1 / populacao1;
  float densidade_populacional2 = (float)populacao2 / area2;
  float pib_per_capita2 = pib2 / populacao2;

  // Atributo escolhido para comparação (ex: População)
  char atributo_comparacao[] = "População";

  // Comparação das cartas (usando comparação matemática)
  printf("Comparação de cartas (Atributo: %s):\n", atributo_comparacao);
  printf("Carta 1 - %s (%c): %d\n", nome_cidade1, estado1, populacao1);
  printf("Carta 2 - %s (%c): %d\n", nome_cidade2, estado2, populacao2);

  int resultado_comparacao = (populacao1 > populacao2) - (populacao2 > populacao1);

  // Exibição do resultado
  if (resultado_comparacao > 0) {
    printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
  } else if (resultado_comparacao < 0) {
    printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
  } else {
    printf("Resultado: As cartas empataram!\n");
  }

  return 0;
}
