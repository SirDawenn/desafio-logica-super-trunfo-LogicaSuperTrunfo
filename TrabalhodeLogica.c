#include <stdio.h>
// Variáveis globais
int populacao1, populacao2;
float area1, area2, pib1, pib2, densidade1, densidade2;
int pontosturisticos1, pontosturisticos2;

// Função auxiliar para extrair valor do atributo
float extrair_valor(int opcao, int carta) {
    switch (opcao) {
        case 1: return (carta == 1) ? populacao1 : populacao2;
        case 2: return (carta == 1) ? area1 : area2;
        case 3: return (carta == 1) ? pib1 : pib2;
        case 4: return (carta == 1) ? pontosturisticos1 : pontosturisticos2;
        case 5: return (carta == 1) ? densidade1 : densidade2;
        default: return 0;
    }
}
int main () {

//dados das cartas 1 e 2
char estado1;
char estado2;
char codigo1[10];
char codigo2[10];
char nomedacidade1[20];
char nomedacidade2[20];
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

int opcao1, opcao2;
float valor1_c1 = 0, valor2_c1 = 0;
float valor1_c2 = 0, valor2_c2 = 0;

// Primeiro menu
printf("\n===== Escolha o primeiro atributo =====\n");
printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade\n");
printf("Opção: ");
scanf("%d", &opcao1);

// Segundo menu sem repetir
printf("\n===== Escolha o segundo atributo (diferente do primeiro) =====\n");
for (int i = 1; i <= 5; i++) {
    if (i != opcao1) {
        switch (i) {
            case 1: printf("1. População\n"); break;
            case 2: printf("2. Área\n"); break;
            case 3: printf("3. PIB\n"); break;
            case 4: printf("4. Pontos Turísticos\n"); break;
            case 5: printf("5. Densidade\n"); break;
        }
    }
}
printf("Opção: ");
scanf("%d", &opcao2);



// Atribuindo valores para soma
valor1_c1 = extrair_valor(opcao1, 1);
valor2_c1 = extrair_valor(opcao2, 1);
valor1_c2 = extrair_valor(opcao1, 2);
valor2_c2 = extrair_valor(opcao2, 2);

float soma1 = valor1_c1 + valor2_c1;
float soma2 = valor1_c2 + valor2_c2;

// Nomes dos atributos para exibição
char* nomes_atributos[] = {"", "População", "Área", "PIB", "Pontos Turísticos", "Densidade"};

// Resultado
printf("\n════════════════ RESULTADO ════════════════\n");
printf("Cartas: %s x %s", nomedacidade1, nomedacidade2);
printf("\n\nAtributos usados: %s e %s\n", nomes_atributos[opcao1], nomes_atributos[opcao2]);

printf("%s:\n  %s: %.2f\n  %s: %.2f\n  Soma: %.2f\n",
    nomedacidade1, nomes_atributos[opcao1], valor1_c1,
    nomes_atributos[opcao2], valor2_c1, soma1);

printf("%s:\n  %s: %.2f\n  %s: %.2f\n  Soma: %.2f\n",
    nomedacidade2, nomes_atributos[opcao1], valor1_c2,
    nomes_atributos[opcao2], valor2_c2, soma2);

if (soma1 > soma2)
    printf("\n%s venceu!\n", nomedacidade1);
else if (soma2 > soma1)
    printf("\n%s venceu!\n", nomedacidade2);
else
    printf("\nEmpate!\n");

return 0;
}