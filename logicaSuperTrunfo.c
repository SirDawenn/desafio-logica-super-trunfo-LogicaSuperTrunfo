#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades

    // variaveis da cidade1
    char nome_cidade1[15], estado_cidade1[15], codigo_cidade1[10];
    unsigned pop_cidade1, pontosTuristicos_cidade1;
    double area_cidade1, pib_cidade1, densidadePop_cidade1, pibPerCapta_cidade1;

    // variaveis da cidade2
    char nome_cidade2[15], estado_cidade2[15], codigo_cidade2[10];
    unsigned pop_cidade2, pontosTuristicos_cidade2;
    double area_cidade2, pib_cidade2, densidadePop_cidade2, pibPerCapta_cidade2;
    // Cadastro das Cartas:
    printf("|---------------------------------------|\n");
    printf("|\tBEM-VINDO AO SUPER-TRUNFO       |\n"     ); 
    printf("|---------------------------------------|\n\n");

    printf("\t~~~Cadastre suas cartas~~~\n");
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

    system("clear"); // limpa a tela de cadastro
    printf("\t~~~Cadastro das cartas concluido~~~\n\n");

    // escolha do atributo que será utilizado 
    char atributo;
    printf("\t~~~ESCOLHA UM ATRIBUTO PARA JOGAR~~~\n");
    printf("[1] \t-\t População\n");
    printf("[2] \t-\t Pib\n");
    printf("[3] \t-\t Área\n");
    printf("[4] \t-\t Densidade Populacional\n");
    printf("[5] \t-\t Pib Per Capta\n");
    printf("[6] \t-\t Pontos Turisticos \n");
    scanf(" %c", &atributo);

    // verifica qual atributo foi escolhido para comparação
    switch(atributo){

        case '1':
            printf("Atributo escolhido: População\n");
            printf("%s - \t%u - %u\t - %s\n", nome_cidade1, pop_cidade1, pop_cidade2, nome_cidade2);
            
            // compara a população das cartas e exibe o vencedor na tela
            if(pop_cidade1 > pop_cidade2)
            {
                printf("A cidade %s Venceu\n", nome_cidade1);
            }
            else if(pop_cidade1 < pop_cidade2)
            {
                printf("A cidade %s Venceu!\n", nome_cidade2);
            }
            else
            {
                printf("Empate!\n");
            }
        break;

        case '2':
            printf("Atributo escolhido: Pib\n");
            printf("%s - \t%f - %f\t - %s\n", nome_cidade1, pib_cidade1, pib_cidade2, nome_cidade2);
            
            // compara o pib das cartas e exibe o vencedor na tela
            if(pib_cidade1 > pib_cidade2)
            {
                printf("A cidade %s Venceu!\n", nome_cidade1);
            }
            else if(pib_cidade1 < pib_cidade2)
            {
                printf("A cidade %s Venceu!\n", nome_cidade2);
            }
            else
            {
                printf("Empate!\n");
            }
        break;

        case '3':
            printf("Atributo escolhido: Área\n");
            printf("%s - \t%f - %f\t - %s\n", nome_cidade1, area_cidade1, area_cidade2, nome_cidade2);
            
            // compara a area das cartas e exibe o vencedor na tela
            if(area_cidade1 > area_cidade2)
            {
                printf("A cidade %s Venceu!\n", nome_cidade1);
            }
            else if(area_cidade1 < area_cidade2)
            {
                printf("A cidade %s Venceu!\n", nome_cidade2);
            }
            else
            {
                printf("Empate!\n");
            }
        break;

        case '4':
            printf("Atributo escolhido: Densidade Populacional\n");
            printf("%s - \t%f - %f\t - %s\n", nome_cidade1, densidadePop_cidade1, densidadePop_cidade2, nome_cidade2);
            
            // compara a densidade populacional das cartas e exibe o vencedor na tela
            if(densidadePop_cidade1 < densidadePop_cidade2)
            {
                printf("A cidade %s Venceu!\n", nome_cidade1);
            }
            else if(densidadePop_cidade1 > densidadePop_cidade2)
            {
                printf("A cidade %s Venceu!\n", nome_cidade2);
            }
            else
            {
                printf("Empate!\n");
            }
        break;

        case '5':
            printf("Atributo escolhido: Pib Per Capta\n");
            printf("%s - \t%f - %f\t - %s\n", nome_cidade1, pibPerCapta_cidade1, pibPerCapta_cidade2, nome_cidade2);
            
            // compara o pib per capta das cartas e exibe o vencedor na tela
            if(pibPerCapta_cidade1 > pibPerCapta_cidade2)
            {
                printf("A cidade %s Venceu!\n", nome_cidade1);
            }
            else if(pibPerCapta_cidade1 < pibPerCapta_cidade2)
            {
                printf("A cidade %s Venceu!\n", nome_cidade2);
            }
            else
            {
                printf("Empate!\n");
            }
        break;

        case '6':
            printf("Atributo escolhido: Pontos Turisticos\n");
            printf("%s - \t%u - %u\t - %s\n", nome_cidade1, pontosTuristicos_cidade1, pontosTuristicos_cidade2, nome_cidade2);
            
            // compara o pib per capta das cartas e exibe o vencedor na tela
            if(pontosTuristicos_cidade1 > pontosTuristicos_cidade2)
            {
                printf("A cidade %s Venceu!\n", nome_cidade1);
            }
            else if(pontosTuristicos_cidade1 < pontosTuristicos_cidade2)
            {
                printf("A cidade %s Venceu!\n", nome_cidade2);
            }
            else
            {
                printf("Empate!\n");
            }
        break;

        default:
            printf("Opção Invalida\n");
            return 1;
    }

    return 0;
}
