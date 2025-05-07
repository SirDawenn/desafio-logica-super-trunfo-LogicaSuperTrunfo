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

int opcao;
printf("\n========= Escolha o primeiro atributo =========\n");
printf("1. Populacao\n");
printf("2. Area\n");
printf("3. PIB\n");
printf("4. Pontos Turisticos\n");
printf("5. Densidade Demografica\n");
printf("Escolha uma opcao: ");
scanf("%d", &opcao);

printf("\nComparando %s e %s\n", nomedacidade1, nomedacidade2);

switch (opcao) {
    case 1:
        printf("Populacao: %d x %d\n", populacao1, populacao2);
        if (populacao1 > populacao2)
            printf("%s venceu!\n", nomedacidade1);
        else if (populacao2 > populacao1)
            printf("%s venceu!\n", nomedacidade2);
        else
            printf("Empate!\n");
        break;

    case 2:
        printf("Area: %.2f km2 x %.2f km2\n", area1, area2);
        if (area1 > area2)
            printf("%s venceu!\n", nomedacidade1);
        else if (area2 > area1)
            printf("%s venceu!\n", nomedacidade2);
        else
            printf("Empate!\n");
        break;

    case 3:
        printf("PIB: %.2f bi x %.2f bi\n", pib1, pib2);
        if (pib1 > pib2)
            printf("%s venceu!\n", nomedacidade1);
        else if (pib2 > pib1)
            printf("%s venceu!\n", nomedacidade2);
        else
            printf("Empate!\n");
        break;

    case 4:
        printf("Pontos Turisticos: %d x %d\n", pontosturisticos1, pontosturisticos2);
        if (pontosturisticos1 > pontosturisticos2)
            printf("%s venceu!\n", nomedacidade1);
        else if (pontosturisticos2 > pontosturisticos1)
            printf("%s venceu!\n", nomedacidade2);
        else
            printf("Empate!\n");
        break;

    case 5:
        printf("Densidade Demografica: %.2f hab/km2 x %.2f hab/km2\n", densidade1, densidade2);
        if (densidade1 < densidade2)
            printf("%s venceu!\n", nomedacidade1);
        else if (densidade2 < densidade1)
            printf("%s venceu!\n", nomedacidade2);
        else
            printf("Empate!\n");
        break;

    default:
        printf("Opcao invalida.\n");
}

return 0;
}
