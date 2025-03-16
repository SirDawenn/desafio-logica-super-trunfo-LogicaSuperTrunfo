#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    int resultado = 0;
    char atributo, atributo2, opcao;

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

    // calculo da densidade da cidade1
    densidadePop_cidade1 = (float) pop_cidade1 / area_cidade1;

    // calculo do pib per capta da cidade1
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

    // calculo da densidade da cidade2
    densidadePop_cidade2 = (float) pop_cidade2 / area_cidade2;

    // calculo do pib per capta da cidade2
    pibPerCapta_cidade2 = pib_cidade2 / (float) pop_cidade2;

    system("clear"); // limpa a tela de cadastro
    printf("\t~~~Cadastro das cartas concluido~~~\n\n");

    // escolha do atributo que será utilizado 
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
            printf("%s - \t%u - %u\t - %s\n", nome_cidade1, pop_cidade1, pop_cidade2, nome_cidade2); // mostra o valor dos atributos
            
            // compara a população das cartas e exibe o vencedor na tela
            pop_cidade1 == pop_cidade2 ? printf("Empate:\n") : 
            pop_cidade1 > pop_cidade2 ?  printf("A cidade %s Venceu\n", nome_cidade1) : 
            printf("A cidade %s Venceu\n", nome_cidade2);

            // soma ou subtrai 1 da variavel, dependendo do resultado da comparação
            resultado += pop_cidade1 > pop_cidade2 ? 1 : -1;
        break;

        case '2':
            printf("Atributo escolhido: Pib\n");
            printf("%s - \t%f - %f\t - %s\n", nome_cidade1, pib_cidade1, pib_cidade2, nome_cidade2);// mostra o valor dos atributos
            
            // compara o pib das cartas e exibe o vencedor na tela
            pib_cidade1 == pib_cidade2 ? printf("Empate:\n") : 
            pib_cidade1 > pib_cidade2 ?  printf("A cidade %s Venceu\n", nome_cidade1) : 
            printf("A cidade %s Venceu\n", nome_cidade2);

            // soma ou subtrai 1 da variavel, dependendo do resultado da comparação
            resultado += pib_cidade1 > pib_cidade2 ? 1 : -1;
        break;

        case '3':
            printf("Atributo escolhido: Área\n");
            printf("%s - \t%f - %f\t - %s\n", nome_cidade1, area_cidade1, area_cidade2, nome_cidade2);// mostra o valor dos atributos
            
            // compara a area das cartas e exibe o vencedor na tela
            area_cidade1 == area_cidade2 ? printf("Empate:\n") : 
            area_cidade1 > area_cidade2 ?  printf("A cidade %s Venceu\n", nome_cidade1) :
            printf("A cidade %s Venceu\n", nome_cidade2);

            // soma ou subtrai 1 da variavel, dependendo do resultado da comparação
            resultado += area_cidade1 > area_cidade2 ? 1 : -1;
        
        break;

        case '4':
            printf("Atributo escolhido: Densidade Populacional\n");
            printf("%s - \t%f - %f\t - %s\n", nome_cidade1, densidadePop_cidade1, densidadePop_cidade2, nome_cidade2);// mostra o valor dos atributos
            
            // compara a densidade populacional das cartas e exibe o vencedor na tela
            densidadePop_cidade1 == densidadePop_cidade2 ? printf("Empate:\n") : 
            densidadePop_cidade1 < densidadePop_cidade2 ?  printf("A cidade %s Venceu\n", nome_cidade1) :
            printf("A cidade %s Venceu\n", nome_cidade2);

            // soma ou subtrai 1 da variavel, dependendo do resultado da comparação
            resultado += densidadePop_cidade1 < densidadePop_cidade2 ? 1 : -1;
        
        break;

        case '5':
            printf("Atributo escolhido: Pib Per Capta\n");
            printf("%s - \t%f - %f\t - %s\n", nome_cidade1, pibPerCapta_cidade1, pibPerCapta_cidade2, nome_cidade2); // mostra o valor dos atributos
            
            // compara o pib per capta das cartas e exibe o vencedor na tela
            pibPerCapta_cidade1 == pibPerCapta_cidade2 ? printf("Empate\n") :
            pibPerCapta_cidade1 > pibPerCapta_cidade2 ? printf("A cidade %s Venceu\n", nome_cidade1) : 
            printf("A cidade %s Venceu\n", nome_cidade2);

            // soma ou subtrai 1 da variavel, dependendo do resultado da comparação
            resultado += pibPerCapta_cidade1 > pibPerCapta_cidade2 ? 1 : -1;
        break;

        case '6':
            printf("Atributo escolhido: Pontos Turisticos\n");
            printf("%s - \t%u - %u\t - %s\n", nome_cidade1, pontosTuristicos_cidade1, pontosTuristicos_cidade2, nome_cidade2); // mostra o valor dos atributos
            
            // compara o pib per capta das cartas e exibe o vencedor na tela
            pontosTuristicos_cidade1 == pontosTuristicos_cidade2 ? printf("Empate\n") :
            pontosTuristicos_cidade1 > pontosTuristicos_cidade2 ? printf("A cidade %s Venceu\n", nome_cidade1) : 
            printf("A cidade %s Venceu\n", nome_cidade2);

            // soma ou subtrai 1 da variavel, dependendo do resultado da comparação
            resultado += pontosTuristicos_cidade1 > pontosTuristicos_cidade2 ? 1 : -1;
        break;

        default:
            printf("Opção Invalida\n");
            return 1;
    }

    // escolha do segundo atributo
    printf("Deseja escolher mais um atributo para comparação [s/n]:\n");
    scanf(" %c", &opcao);
    if(opcao == 's' || opcao == 'S')
    {
        printf("\t~~~ESCOLHA UM SEGUNDO ATRIBUTO PARA JOGAR~~~\n");
        printf("[1] \t-\t População\n");
        printf("[2] \t-\t Pib\n");
        printf("[3] \t-\t Área\n");
        printf("[4] \t-\t Densidade Populacional\n");
        printf("[5] \t-\t Pib Per Capta\n");
        printf("[6] \t-\t Pontos Turisticos \n");
        scanf(" %c", &atributo2);

        // verifica qual atributo foi escolhido para comparação
        switch(atributo2){

            case '1':
                printf("Atributo escolhido: População\n");
                printf("%s - \t%u - %u\t - %s\n", nome_cidade1, pop_cidade1, pop_cidade2, nome_cidade2); // mostra o valor dos atributos
            
                // compara a população das cartas e exibe o vencedor na tela
                pop_cidade1 == pop_cidade2 ? printf("Empate:\n") : 
                pop_cidade1 > pop_cidade2 ?  printf("A cidade %s Venceu\n", nome_cidade1) : 
                printf("A cidade %s Venceu\n", nome_cidade2);

                // soma ou subtrai 1 da variavel, dependendo do resultado da comparação
                resultado += pop_cidade1 > pop_cidade2 ? 1 : -1;
            break;

            case '2':
                printf("Atributo escolhido: Pib\n");
                printf("%s - \t%f - %f\t - %s\n", nome_cidade1, pib_cidade1, pib_cidade2, nome_cidade2);// mostra o valor dos atributos
            
                // compara o pib das cartas e exibe o vencedor na tela
                pib_cidade1 == pib_cidade2 ? printf("Empate:\n") : 
                pib_cidade1 > pib_cidade2 ?  printf("A cidade %s Venceu\n", nome_cidade1) : 
                printf("A cidade %s Venceu\n", nome_cidade2);

                // soma ou subtrai 1 da variavel, dependendo do resultado da comparação
                resultado += pib_cidade1 > pib_cidade2 ? 1 : -1;
            break;

            case '3':
                printf("Atributo escolhido: Área\n");
                printf("%s - \t%f - %f\t - %s\n", nome_cidade1, area_cidade1, area_cidade2, nome_cidade2);// mostra o valor dos atributos
            
                // compara a area das cartas e exibe o vencedor na tela
                area_cidade1 == area_cidade2 ? printf("Empate:\n") : 
                area_cidade1 > area_cidade2 ?  printf("A cidade %s Venceu\n", nome_cidade1) :
                printf("A cidade %s Venceu\n", nome_cidade2);

                // soma ou subtrai 1 da variavel, dependendo do resultado da comparação
                resultado += area_cidade1 > area_cidade2 ? 1 : -1;
        
            break;

            case '4':
                printf("Atributo escolhido: Densidade Populacional\n");
                printf("%s - \t%f - %f\t - %s\n", nome_cidade1, densidadePop_cidade1, densidadePop_cidade2, nome_cidade2);// mostra o valor dos atributos
            
                // compara a densidade populacional das cartas e exibe o vencedor na tela
                densidadePop_cidade1 == densidadePop_cidade2 ? printf("Empate:\n") : 
                densidadePop_cidade1 < densidadePop_cidade2 ?  printf("A cidade %s Venceu\n", nome_cidade1) :
                printf("A cidade %s Venceu\n", nome_cidade2);

                // soma ou subtrai 1 da variavel, dependendo do resultado da comparação
                resultado += densidadePop_cidade1 < densidadePop_cidade2 ? 1 : -1;
        
            break;

            case '5':
                printf("Atributo escolhido: Pib Per Capta\n");
                printf("%s - \t%f - %f\t - %s\n", nome_cidade1, pibPerCapta_cidade1, pibPerCapta_cidade2, nome_cidade2); // mostra o valor dos atributos
            
                // compara o pib per capta das cartas e exibe o vencedor na tela
                pibPerCapta_cidade1 == pibPerCapta_cidade2 ? printf("Empate\n") :
                pibPerCapta_cidade1 > pibPerCapta_cidade2 ? printf("A cidade %s Venceu\n", nome_cidade1) : 
                printf("A cidade %s Venceu\n", nome_cidade2);

                // soma ou subtrai 1 da variavel, dependendo do resultado da comparação
                resultado += pibPerCapta_cidade1 > pibPerCapta_cidade2 ? 1 : -1;
            break;

            case '6':
                printf("Atributo escolhido: Pontos Turisticos\n");
                printf("%s - \t%u - %u\t - %s\n", nome_cidade1, pontosTuristicos_cidade1, pontosTuristicos_cidade2, nome_cidade2); // mostra o valor dos atributos
            
                // compara o pib per capta das cartas e exibe o vencedor na tela
                pontosTuristicos_cidade1 == pontosTuristicos_cidade2 ? printf("Empate\n") :
                pontosTuristicos_cidade1 > pontosTuristicos_cidade2 ? printf("A cidade %s Venceu\n", nome_cidade1) : 
                printf("A cidade %s Venceu\n", nome_cidade2);

                // soma ou subtrai 1 da variavel, dependendo do resultado da comparação
                resultado += pontosTuristicos_cidade1 > pontosTuristicos_cidade2 ? 1 : -1;
            break;

            default:
                printf("Opção Invalida\n");
                return 1;
        }
    }


    printf("\nResultado Geral: ");
    if(resultado > 0)
    {
        printf("Vitoria de %s\n", nome_cidade1);
    }
    else if(resultado < 0)
    {
        printf("Vitoria de %s\n", nome_cidade2);
    }
    else{
        printf("Empate\n");
    }

    printf("~~~ FIM DO PROGRAMA, OBRIGADO POR JOGAR ;) ~~~~\n");
    return 0;
}
