#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Declaração de variáveis
    char estado1, estado2; 
    char codCarta1[10], codCarta2[10], nomeCidade1[50], nomeCidade2[50];
    int  pTuristico1, pTuristico2, primeiroAtributo, segundoAtributo, resultado1, resultado2; 
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, superPoder1, superPoder2;
    float densidadePopulacional1, pibPerCapita1, densidadePopulacional2, pibPerCapita2;

    printf("\n");
    printf("--------------->>> DESAFIO SUPERTRUNFO <<<--------------\n");
    printf("---------------->>> DADOS DA 1ª CARTA <<<---------------\n");
    printf("\n");

    // Entrada de Dados da Carta 1
    printf("Digite o estado (de A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (Ex: A01): ");
    scanf("%s", codCarta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o Produto Interno Bruto (PIB): ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turistico: ");
    scanf("%d", &pTuristico1);

    printf("\n");
    printf("--------------->>> DESAFIO SUPERTRUNFO <<<--------------\n");
    printf("---------------->>> DADOS DA 2ª CARTA <<<---------------\n");
    printf("\n");

    // Entrada de Dados da Carta 2
    printf("Digite o estado (de A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (Ex: A01): ");
    scanf("%s", codCarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o Produto Interno Bruto (PIB): ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turistico: ");
    scanf("%d", &pTuristico2);
    printf("\n");

    // Cálculo da Densidade Populacional, PIB per Capita e Super Poder Carta 1.
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pTuristico1 + pibPerCapita1 + (1 / densidadePopulacional1);
    // Cálculo da Densidade Populacional, PIB per Capita e Super Poder Carta 2.
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pTuristico2 + pibPerCapita2 + (1 / densidadePopulacional2);
    // Verificação de comparação entre as cartas 1 e 2

    printf("\n");
    printf("--------------->>> DESAFIO SUPERTRUNFO <<<--------------\n");
    printf("-------------------->>> CARTA 1 <<<---------------------\n");
    printf("\n");

    // Saída de Dados da Carta 1
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", pTuristico1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n");
    printf("--------------->>> DESAFIO SUPERTRUNFO <<<--------------\n");
    printf("-------------------->>> CARTA 2 <<<---------------------\n");
    printf("\n");

    // Saída de Dados da Carta 2
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n",  pib2);
    printf("Números de Pontos Turísticos: %d\n", pTuristico2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("\n");

    printf("--------------->>> DESAFIO SUPERTRUNFO <<<--------------\n");
    printf("-------------->>> COMPARAÇÃO DAS CARTAS <<<-------------\n");
    printf("\n");

    printf("BEM-VINDO AO JOGO SUPERTRUNFO\n");
    printf("Escolha o primeiro atributo\n");
    printf("[1]. População\n");
    printf("[2]. Área/km²\n");
    printf("[3]. Produto Interno Bruto (PIB)\n");
    printf("[4]. Números de Pontos Turísticos\n");
    printf("[5]. Densidade Populacional\n");
    printf("Digite uma das opções: ");
    scanf("%d", &primeiroAtributo);
    printf("\n");

    // Criando as condições de comparação do primeiro atributo
    switch (primeiroAtributo){
        case 1:
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            printf("O primeiro atributo escolhido foi [POPULAÇÃO]");
            printf("\n");
            break;
        case 2:
            resultado1 = area1 > area2 ? 1 : 0;
            printf("O primeiro atributo escolhido foi [ÁREA]");
            printf("\n");
            break;
        case 3:
            resultado1 = pib1 > pib2 ? 1 : 0;
            printf("O primeiro atributo escolhido foi [PIB]");
            printf("\n");
            break;
        case 4:
            resultado1 = pTuristico1 > pTuristico2 ? 1 : 0;
            printf("O primeiro atributo escolhido foi [NÚMEROS DE PONTOS TURÍSTICOS]");
            printf("\n");
            break;
        case 5:
            resultado1 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
            printf("O primeiro atributo escolhido foi [DENSIDADE POPULACIONAL]");
            printf("\n");
            break;
        default:
            printf("Opção inválida! Tente Novamente.\n");
            break;
    }

    printf("Escolha o segundo atributo\n");
    printf("[1]. População\n");
    printf("[2]. Área/km²\n");
    printf("[3]. Produto Interno Bruto (PIB)\n");
    printf("[4]. Números de Pontos Turísticos\n");
    printf("[5]. Densidade Populacional\n");
    printf("Digite uma das opções: ");
    scanf("%d", &segundoAtributo);
    printf("\n");

    // Criando as condições de comparação do segundo atributo com uma condição para o jogador não escolher dois atributos iguais.
    if (primeiroAtributo != segundoAtributo){
        switch (segundoAtributo){
            case 1:
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                printf("O segundo atributo escolhido foi [POPULAÇÃO]");
                printf("\n");
                break;
            case 2:
                resultado2 = area1 > area2 ? 1 : 0;
                printf("O segundo atributo escolhido foi [ÁREA]");
                printf("\n");
                break;
            case 3:
                resultado2 = pib1 > pib2 ? 1 : 0;
                printf("O segundo atributo escolhido foi [PIB]");
                printf("\n");
                break;
            case 4:
                resultado2 = pTuristico1 > pTuristico2 ? 1 : 0;
                printf("O segundo atributo escolhido foi [NÚMEROS DE PONTOS TURÍSTICOS]");
                printf("\n");
                break;
            case 5:
                resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
                printf("O segundo atributo escolhido foi [DENSIDADE POPULACIONAL]");
                printf("\n");
                break;
            default:
                printf("Opção inválida! Tente Novamente.\n");
                break;
        }
    } else {
        printf("Você digitou o mesmo atributo!\n");
    }

    printf("--------------------->>> DECISÃO <<<--------------------\n");
    printf("\n");

    // Saída de Dados. Exibindo os atributos comparados e o resultado do vencedor.
    switch (primeiroAtributo){
        case 1:
            printf("NOME DA CIDADE => CARTA 1: %s - CARTA 2: %s\n", nomeCidade1, nomeCidade2);
            printf("POPULAÇÃO => CARTA 1: %lu - CARTA 2: %lu\n", populacao1, populacao2);
            break;
        case 2:
            printf("NOME DA CIDADE => CARTA 1: %s - CARTA 2: %s\n", nomeCidade1, nomeCidade2);
            printf("ÁREA/ KM² => CARTA 1: %.2f² - CARTA 2: %.2f\n", area1, area2);
            break;
        case 3:
            printf("NOME DA CIDADE => CARTA 1: %s - CARTA 2: %s\n", nomeCidade1, nomeCidade2);
            printf("PIB => CARTA 1: %.2f - CARTA 2: %.2f\n", pib1, pib2);
            break;
        case 4:
            printf("NOME DA CIDADE => CARTA 1: %s - CARTA 2: %s\n", nomeCidade1, nomeCidade2);
            printf("NÚMERO DE PONTOS TURÍSTICOS => CARTA 1: %d - CARTA 2: %d\n", pTuristico1, pTuristico2);
            break;
        case 5:
            printf("NOME DA CIDADE => CARTA 1: %s - CARTA 2: %s\n", nomeCidade1, nomeCidade2);
            printf("DENSIDADE POPULACIONAL => CARTA 1: %.2f - CARTA 2: %.2f\n", densidadePopulacional1, densidadePopulacional2); 
            break;
        default:
            printf("Opção inválida! Tente Novamente.\n");
            break;
    }

    switch (segundoAtributo){
        case 1:
            printf("POPULAÇÃO => CARTA 1: %lu - CARTA 2: %lu\n", populacao1, populacao2);
        break;
        case 2:
            printf("ÁREA/ KM² => CARTA 1: %.2f - CARTA 2: %.2f\n", area1, area2);
            break;
        case 3:
            printf("PIB => CARTA 1: %.2f - CARTA 2: %.2f\n", pib1, pib2);
            break;
        case 4:
            printf("NÚMERO DE PONTOS TURÍSTICOS => CARTA 1: %d - CARTA 2: %d\n", pTuristico1, pTuristico2);
            break;
        case 5:
            printf("DENSIDADE POPULACIONAL => CARTA 1: %.2f - CARTA 2: %.2f\n", densidadePopulacional1, densidadePopulacional2); 
            break;
        default:
            printf("Opção inválida! Tente Novamente.\n");
            break;
    }
    printf("\n");

    if (resultado1 && resultado2){
        printf("Parabéns! A carta 1 venceu!\n");
    } else if (resultado1 != resultado2){
        printf("Empatou!\n");
    } else {
        printf("Parabéns! A carta 2 venceu!\n");
    }

    printf("\n");
    printf("------------------->>> FIM DO JOGO <<<------------------\n");
    printf("--------------->>> DESAFIO SUPERTRUNFO <<<--------------\n");

    return 0;
}