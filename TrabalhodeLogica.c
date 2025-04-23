#include <stdio.h>
int main () {

//dados das cartas 1 e 2
char estado1;
char estado2;
char codigo1[10];
char codigo2[10];
int populacao1;
int populacao2;
char nomedacidade1[20];
char nomedacidade2[20];
float area1;
float area2;
float pib1;
float pib2;
int pontosturisticos1;
int pontosturisticos2;
float densidade1;
float densidade2;
float pibpercapita1;
float pibpercapita2;
float superpoder1;
float superpoder2;

//entrada de dados da primeira carta

printf("Escolha uma letra de A a H para ser o Estado. \n");
printf("Estado: ");
scanf(" %c", &estado1);

printf("Escolha 1 número de 01 a 04 para ser o código da carta. \n");
printf("Código: ");
scanf(" %2s", codigo1);

printf("Insira a quantidade de habitantes da cidade\n");
printf("População: ");
scanf(" %d", &populacao1); // %2s para ler uma string de 2 caracteres. Não tem & pois o vetor '[]' já é um ponteiro.


printf("Escreva o nome da cidade. \n");
getchar(); // Limpa o buffer do teclado
printf("Nome da cidade: ");
fgets(nomedacidade1, sizeof(nomedacidade1), stdin);

printf("Insira a área territorial da cidade. \n");
printf("Área em km²: ");
scanf(" %f", &area1);

printf("Insira o PIB da cidade \n");
printf("PIB: ");
scanf("%f", &pib1);

printf("Insira a quantidade de pontos turísticos da cidade. \n"); 
printf("Pontos turísticos: ");
scanf(" %d", &pontosturisticos1);

// dados da segunda carta

printf("Escolha uma letra de A a H para ser o Estado 2. \n");
printf("Estado: ");
scanf(" %c", &estado2);

printf("Escolha 1 número de 01 a 04 para ser o código da carta. \n");
printf("Código: ");
scanf(" %2s", codigo2);

printf("Insira a quantidade de habitantes da cidade\n");
printf("População: ");
scanf(" %d", &populacao2);

printf("Escreva o nome da cidade. \n");
getchar();
printf("Nome da cidade: ");
fgets(nomedacidade2, sizeof(nomedacidade2), stdin);

printf("Insira a área territorial da cidade. \n");
printf("Área em km²: ");
scanf(" %f", &area2);

printf("Insira o PIB da cidade \n");
printf("PIB: ");
scanf("%f", &pib2);

printf("Insira a quantidade de pontos turísticos da cidade. \n"); 
printf("Pontos turísticos: ");
scanf(" %d", &pontosturisticos2);

//Calculos de médias

densidade1 = populacao1 / area1;
densidade2 = populacao2 / area2;
pibpercapita1 = (pib1 * 1000000000) / populacao1;
pibpercapita2 = (pib2 * 1000000000) / populacao2;

//Comparação

// comparação por área
printf("\n═════════════════════════════════════════\n");
printf("Comparação de cartas\n");
printf("═════════════════════════════════════════\n");

if (area1 > area2) {
    printf("Vencedor: Carta 1 (%s) venceu com área de %.2f km²!\n", nomedacidade1, area1);
} else if (area2 > area1) {
    printf("Vencedor: Carta 2 (%s) venceu com área de %.2f km²!\n", nomedacidade2, area2);
} 


return 0;
}