#include <stdio.h>

    
int main() {

    unsigned int populacao1, populacao2;
    unsigned int ptTuristico1, ptTuristico2;
    float densidadePopulacao1, densidadePopulacao2;
    float percaptaPIB1, percaptaPIB2;
    float area1, pib1;
    float area2, pib2;
    char pais1[50], pais2[50];
    char estado1[50], estado2[50];
    char cidade1[50], cidade2[50];
    char codigoC1[5] = "C1", codigoC2[5] = "C2"; 
    unsigned int superPoder1, superPoder2;
    int escolha1, escolha2, escolha3;
    int resultado1, resultado2, resultado3;
    int menu;

    // MENU INICIAL

    printf("--------------------- BEM VINDO --------------------------\n");
    printf("Esse é o meu primeiro game feito totalmente na linguagem C.\n\n");


    printf("---------------------------------- AS REGRAS SÃO --------------------------------------------\n\n"
        "Escolha um atributo da sua carta e compare com o mesmo da outra carta.\n"
        "VENCE A CARTA COM O MAIOR VALOR DO ATRIBUTO (exceto para o atributo DENSIDADE POPULACIONAL).\n"
        "Para vencer escolhendo DENSIDADE POPULACIONAL, você deve ter o MENOR VALOR entre ambos atributos.\n"
        "É uma melhor de 3.\n\n"
        "VAMOS LÁ!\n\n");


    // CADASTRO DA PRIMEIRA CARTA

    printf("Cadastre sua Primeira carta! \n\n");

    // PAIS, ESTADO, CIDADE e CODIGO DA CARTA 1

    printf("A PRIMEIRA CARTA terá o nome de qual País: ");
    scanf(" %[^\n]", pais1);
    printf("%s \n\n", pais1);

    printf("Qual o nome do ESTADO: ");
    scanf(" %[^\n]", estado1);
    printf("%s \n\n", estado1);

    printf("Agora o nome da CIDADE: ");
    scanf(" %[^\n]", cidade1);
    printf("%s \n\n", cidade1);

    // POPULÇÃO CARTA 1

    printf("Informe a POPULAÇÃO do ESTADO: ");
    scanf("%u", &populacao1);
    printf("%u milhões de pessoas.\n\n", populacao1);

    // ÁREA CARTA 1

    printf("Informe de quanto é a ÁREA em kM² do ESTADO: ");
    scanf("%f", &area1);
    printf("%.2f Km².\n\n", area1);

    // PIB CARTA 1

    printf("Qual o PIB de ESTADO: ");
    scanf("%f", &pib1);
    printf("R$%.2f Trilhões.\n\n", pib1);

    // PONTOS TURÍSTICOS CARTA 1

    printf("Por último informe quantos PONTOS TURÍSTICOS possue o ESTADO: ");
    scanf("%d", &ptTuristico1);
    printf("%d pontos de turismo.\n\n", ptTuristico1);

    // Calculo da DENSIDADE POPULACIONAL, PIB PER CAPTA e SUPER PODER da CARTA 1

    densidadePopulacao1 = (float) populacao1 / area1;
    percaptaPIB1 = pib1 / populacao1;

    printf("Com isso a DENSIDADE POPULACIONAL é de %.0f Mil pessoas por Km².\n", densidadePopulacao1);
    printf("E um PIB per capta de R$%.3f Milhões. \n\n", percaptaPIB1);

    // SUPER PODER da CARTA 1

    densidadePopulacao1 = 1 / densidadePopulacao1;
    superPoder1 = (float) area1 + populacao1 + ptTuristico1 + pib1 + densidadePopulacao1 + percaptaPIB1;
    printf("O Super Poder dessa carta é de %.2f.\n\n", superPoder1);

    // FINALIZAÇÃO CARTA 1

    printf("A carta do País %s, estado %s e cidade %s foi cadastrada e possui o código %s. \n\n", pais1, estado1, cidade1, codigoC1);

    printf("Com isso concluimos nossa primeira carta e Vamos fazer nossa segunda e última carta agora. \n\n");


    // AQUI AGORA JÁ COMEÇA O CADASTRO DA SEGUNDA CARTA

    // PAIS, ESTADO, CIDADE e CODIGO DA CARTA 2

    printf("A PRIMEIRA CARTA terá o nome de qual País: ");
    scanf(" %[^\n]", pais2);
    printf("%s \n\n", pais2);

    printf("Qual o nome do ESTADO: ");
    scanf(" %[^\n]", estado2);
    printf("%s \n\n", estado2);

    printf("Agora o nome da CIDADE: ");
    scanf(" %[^\n]", cidade2);
    printf("%s \n\n", cidade2);

    // POPULÇÃO CARTA 2

    printf("Informe a POPULAÇÃO do ESTADO: ");
    scanf("%u", &populacao2);
    printf("%u milhões de pessoas.\n\n", populacao2);

    // ÁREA CARTA 2

    printf("Informe de quanto é a ÁREA em kM² do ESTADO: ");
    scanf("%f", &area2);
    printf("%.2f Km².\n\n", area2);

    // PIB CARTA 2

    printf("Qual o PIB de ESTADO: ");
    scanf("%f", &pib2);
    printf("R$%.2f Trilhões.\n\n", pib2);

    // PONTOS TURÍSTICOS CARTA 2

    printf("Por último informe quantos PONTOS TURÍSTICOS possue o ESTADO: ");
    scanf("%u", &ptTuristico2);
    printf("%u pontos de turismo.\n\n", ptTuristico2);

    // Calculo da DENSIDADE POPULACIONAL, PIB PER CAPTA e SUPER PODER da CARTA 1

    densidadePopulacao2 = (float) populacao2 / area2;
    percaptaPIB2 = pib2 / populacao2;

    printf("Com isso a DENSIDADE POPULACIONAL é de %.0f Mil pessoas por Km².\n", densidadePopulacao2);
    printf("E um PIB per capta de R$%.3f Milhões. \n\n", percaptaPIB2);

    // SUPER PODER da CARTA 1

    densidadePopulacao2 = 1 / densidadePopulacao2;
    superPoder2 = (float) area2 + populacao2 + ptTuristico2 + pib2 + densidadePopulacao2 + percaptaPIB2;
    printf("O Super Poder dessa carta é de %.0f.\n\n", superPoder2);

    // FINALIZAÇÃO CARTA 2

    printf("A carta do País %s, estado %s e cidade %s foi cadastrada e possui o código %s. \n\n", pais2, estado2, cidade2, codigoC2);

    printf("Com isso concluimos nossa segunda carta e Vamos fazer agora a comparação entre elas. \n\n");

   
    // COMPARAÇÃO ENTRE CARTAS ROUND 1
    
    printf("AGORA COMEÇA O 1° ROUND!\n\n");

    printf("Digite o número corresponte ao atributo que deseja comparar: \n\n");

    printf("*** 1 - PIB. ***\n");
    printf("*** 2 - POPULAÇÃO. ***\n");
    printf("*** 3 - ÁREA TERRITORIAl. ***\n");
    printf("*** 4 - PONTOS TURÍSTICOS. ***\n");
    printf("*** 5 - PIB PER CAPTA. ***\n");
    printf("*** 6 - DENSIDADE POPULACIONAL. ***\n");
    printf("*** 7 - SUPER PODER. ***\n\n");


    while (1) {
        printf("Sua escolha: ");
        if (scanf("%d", &escolha1) == 1) {
            // Verifica se a escolha está dentro do intervalo válido (1 a 7)
            if (escolha1 >= 1 && escolha1 <= 7) {
                break; // Sai do loop se a entrada for válida
            } else {
                printf("Opção inválida. Por favor, digite um número entre 1 e 7.\n\n");
            }
        } else {
            // Se scanf não conseguiu ler um inteiro
            printf("Entrada inválida. Por favor, digite um número inteiro.\n\n");
            // Limpar o buffer de entrada para evitar loop infinito
            while (getchar() != '\n');
        }
    }

    // RESULTADO DA COMPARAÇÃO


    switch (escolha1){

        case 1:
            printf("\nVocê escolheu PIB.\n");
            
            printf("E quem vence a disputa de MAIOR PIB é: ");

            if (pib1 > pib2){
                printf("%s (Carta 1) com PIB de R$ %.2f - *** PARABÉNS VOCÊ VENCEU ***.\n\n", estado1, pib1);
                resultado1 = 1;

            } else if (pib1 < pib2){
                printf("%s (Carta 2) com PIB de R$ %.2f - *** VOCÊ PERDEU ***.\n\n", estado2, pib2);
                resultado1 = 0;

            } else {
                printf("Ninguem venceu, é um empate!\n\n");
            };
        break;

        case 2:
            printf("Você escolheu POPULAÇÃO.\n");

            printf("E quem vence a disputa de MAIOR POPULAÇÃO é: ");

            if (populacao1 > populacao2){
                printf("%s (Carta 1) com uma população de %u - *** PARABÉNS VOCÊ VENCEU ***.\n\n", estado1, populacao1);
                resultado1 = 1;

            } else if (populacao1 < populacao2){
                printf("%s (Carta 2) com uma população de %u - *** VOCÊ PERDEU ***.\n\n", estado2, populacao2);
                resultado1 = 0;

            } else {
                printf("Ninguem venceu, é um empate!");
            };
        break;

        case 3:
            printf("Você escolheu ÁREA TERRITORIAL.\n");

            printf("E quem vence a disputa de MAIOR ÁREA TERRITORIAL é: ");

            if (area1 > area2){
                printf("%s (Carta 1) com uma área de %.2f *** PARABÉNS VOCÊ VENCEU ***.\n\n", estado1, area1);
                resultado1 = 1;

            } else if (area1 < area2){
                printf("%s (Carta 2) com uma área de %.2f *** VOCÊ PERDEU ***.\n\n", estado2, area2);
                resultado1 = 0;

            } else {
                printf("Ninguem venceu, é um empate!");
            };
        break;

        case 4:
            printf("Você escolheu PONTOS TURÍSTICOS.\n");

            printf("E quem vence a disputa de MAIOR PONTOS TURÍSTICOS é: ");

            if (ptTuristico1 > ptTuristico2){
                printf("%s (Carta 1) com pontos turisticos de %u *** PARABÉNS VOCÊ VENCEU ***.\n\n", estado1, ptTuristico1);
                resultado1 = 1;

            } else if (ptTuristico1 < ptTuristico2){
                printf("%s (Carta 2) com pontos turisticos de %u *** VOCÊ PERDEU ***.\n\n", estado2, ptTuristico2);
                resultado1 = 0;

            } else {
                printf("Ninguem venceu, é um empate!");
            };
        break;

        case 5:
            printf("Você escolheu PIB PER CAPTA.\n");

            printf("E quem vence a disputa de maior PIB PER CAPTA é: ");

            if (percaptaPIB1 > percaptaPIB2){
                printf("%s (Carta 1) com o PIB per capta de R$ %.2f *** PARABÉNS VOCÊ VENCEU ***.\n\n", estado1, percaptaPIB1);
                resultado1 = 1;

            } else if (percaptaPIB1 < percaptaPIB2){
                printf("%s (Carta 2) com o PIB per capta de R$ %.2f *** VOCÊ PERDEU ***.\n\n", estado2, percaptaPIB2);
                resultado1 = 0;

            } else {
                printf("Ninguem venceu, é um empate!");
            };
        break;

        case 6:
            printf("Você escolheu DENSIDADE POPULACIONAL.\n");

            printf("E quem vence a disputa de MENOR DENSIDADE POPULACIONAL é: ");

            if (densidadePopulacao1 < densidadePopulacao2){
                printf("%s (Carta 1) com Desidade Populacional de %.2f *** PARABÉNS VOCÊ VENCEU ***.\n\n", estado1, densidadePopulacao1);
                resultado1 = 1;

            } else if (densidadePopulacao1 > densidadePopulacao2){
                printf("%s (Carta 2) com Desidade Populacional de %.2f *** VOCÊ PERDEU ***.\n\n", estado2, densidadePopulacao2);
                resultado1 = 0;

            } else {
                printf("Ninguem venceu, é um empate!");
            };
        break;

            case 7:
            printf("Você escolheu SUPER PODER.\n");

            printf("E quem vence a disputa de MAIOR SUPER PODER é: ");

            if (superPoder1 > superPoder2){
                printf("%s (Carta 1) com Super Poder de %u *** PARABÉNS VOCÊ VENCEU ***.\n\n", estado1, superPoder1);
                resultado1 = 1;

            } else if (superPoder1 < superPoder2){
                printf("%s (Carta 2) com Super Poder de %u *** VOCÊ PERDEU ***.\n\n", estado2, superPoder2);
                resultado1 = 0;

            } else {
                printf("Ninguem venceu, é um empate!");
            
            };
        break;

        default:
            printf("Opção inválida, tente novamente.\n\n");
        break;
    };


    // COMPARAÇÃO ENTRE CARTAS ROUND 2

    
    printf("VAMOS AO 2° ROUND!\n\n");

    printf("----------------- ATENÇÃO! ---------------------\n");

    printf("NÃO PODE SER O MESMO ATRIBUTO QUE ESCOLHEU ANTES.\n");

    printf("------------------------------------------------\n\n");

    printf("Digite do SEGUNDO atributo que deseja comparar: \n\n");


    printf("*** 1 - PIB. ***\n");
    printf("*** 2 - POPULAÇÃO. ***\n");
    printf("*** 3 - ÁREA TERRITORIAl. ***\n");
    printf("*** 4 - PONTOS TURÍSTICOS. ***\n");
    printf("*** 5 - PIB PER CAPTA. ***\n");
    printf("*** 6 - DENSIDADE POPULACIONAL. ***\n");
    printf("*** 7 - SUPER PODER. ***\n\n");

    // VERIFICAR A ESCOLHA 2

    while (1) {
        printf("Sua segunda escolha: ");
        if (scanf("%d", &escolha2) == 1) {
            if (escolha2 >= 1 && escolha2 <= 7) {
                break; // Sai do loop se a entrada estiver no intervalo
            } else {
                printf("Opção inválida. Por favor, digite um número entre 1 e 7.\n\n");
            }
        } else {
            printf("Entrada inválida. Por favor, digite um número inteiro.\n\n");
            while (getchar() != '\n'); // Limpa o buffer
        }
    };

    // VERIFICAR SE A ESCOLHA1 É IGUAL A ESCOLHA2

    while (escolha2 == escolha1) {
        printf("Você escolheu o mesmo atributo da rodada anterior. Por favor, escolha outro número: ");
        if (scanf("%d", &escolha2) == 1) {
            if (escolha2 >= 1 && escolha2 <= 7) {
                if (escolha2 != escolha1) {
                    printf("\n");
                    break; // Sai do loop se a nova escolha for válida e diferente
                }
            } else {
                printf("Opção inválida. Por favor, digite um número entre 1 e 7.\n\n");
            }
        } else {
            printf("Entrada inválida. Por favor, digite um número inteiro.\n\n");
            while (getchar() != '\n'); // Limpa o buffer
        }
    };
    
    switch (escolha2){

        case 1:
            printf("\nVocê escolheu PIB.\n");
            
            printf("E quem vence a disputa de MAIOR PIB é: ");

            if (pib1 > pib2){
                printf("%s (Carta 1) com PIB de R$ %.2f - *** PARABÉNS VOCÊ VENCEU ***.\n\n", estado1, pib1);
                resultado2 = 1;

            } else if (pib1 < pib2){
                printf("%s (Carta 2) com PIB de R$ %.2f - *** VOCÊ PERDEU ***.\n\n", estado2, pib2);
                resultado2 = 0;

            } else {
                printf("Ninguem venceu, é um empate!\n\n");
            };
        break;

        case 2:
            printf("\nVocê escolheu POPULAÇÃO.\n");

            printf("E quem vence a disputa de MAIOR POPULAÇÃO é: ");

            if (populacao1 > populacao2){
                printf("%s (Carta 1) com população de %u *** PARABÉNS VOCÊ VENCEU ***.\n\n", estado1, populacao1);
                resultado2 = 1;

            } else if (populacao1 < populacao2){
                printf("%s (Carta 2) com população de %u *** VOCÊ PERDEU ***.\n\n", estado2, populacao2);
                resultado2 = 0;

            } else {
                printf("Ninguem venceu, é um empate!");
            };
        break;

        case 3:
            printf("\nVocê escolheu ÁREA TERRITORIAL.\n");

            printf("E quem vence a disputa de MAIOR ÁREA TERRITORIAL é: ");

            if (area1 > area2){
                printf("%s (Carta 1) com área de %.2f *** PARABÉNS VOCÊ VENCEU ***.\n\n", estado1, area1);
                resultado2 = 1;

            } else if (area1 < area2){
                printf("%s (Carta 2) com área de %.2f *** VOCÊ PERDEU ***.\n\n", estado2, area2);
                resultado2 = 0;

            } else {
                printf("Ninguem venceu, é um empate!");
            };
        break;

        case 4:
            printf("\nVocê escolheu PONTOS TURÍSTICOS.\n");

            printf("E quem vence a disputa de MAIOR PONTOS TURÍSTICOS é: ");

            if (ptTuristico1 > ptTuristico2){
                printf("%s (Carta 1) com pontos de turismo de %u *** PARABÉNS VOCÊ VENCEU ***.\n\n", estado1, ptTuristico1);
                resultado2 = 1;

            } else if (ptTuristico1 < ptTuristico2){
                printf("%s (Carta 2) com pontos de turismo de %u *** VOCÊ PERDEU ***.\n\n", estado2, ptTuristico2);
                resultado2 = 0;

            } else {
                printf("Ninguem venceu, é um empate!");
            };
        break;

        case 5:
            printf("\nVocê escolheu PIB PER CAPTA.\n");

            printf("E quem vence a disputa de maior PIB PER CAPTA é: ");

            if (percaptaPIB1 > percaptaPIB2){
                printf("%s (Carta 1) com PIB per capta de %.2f *** PARABÉNS VOCÊ VENCEU ***.\n\n", estado1, percaptaPIB1);
                resultado2 = 1;

            } else if (percaptaPIB1 < percaptaPIB2){
                printf("%s (Carta 2) com PIB per capta de %.2f *** VOCÊ PERDEU ***.\n\n", estado2, percaptaPIB2);
                resultado2 = 0;

            } else {
                printf("Ninguem venceu, é um empate!");
            };
        break;

        case 6:
            printf("\nVocê escolheu DENSIDADE POPULACIONAL.\n");

            printf("E quem vence a disputa de MENOR DENSIDADE POPULACIONAL é: ");

            if (densidadePopulacao1 < densidadePopulacao2){
                printf("%s (Carta 1) com Densidade Populacional de %.2f *** PARABÉNS VOCÊ VENCEU ***.\n\n", estado1, densidadePopulacao1);
                resultado2 = 1;

            } else if (densidadePopulacao1 > densidadePopulacao2){
                printf("%s (Carta 2) com Densidade Populacional de %.2f *** VOCÊ PERDEU ***.\n\n", estado2, densidadePopulacao2);
                resultado2 = 0;

            } else {
                printf("Ninguem venceu, é um empate!");
            };
        break;

            case 7:
            printf("\nVocê escolheu SUPER PODER.\n");

            printf("E quem vence a disputa de MAIOR SUPER PODER é: ");

            if (superPoder1 > superPoder2){
                printf("%s (Carta 1) com Super Poder de %u *** PARABÉNS VOCÊ VENCEU ***.\n\n", estado1, superPoder1);
                resultado2 = 1;

            } else if (superPoder1 < superPoder2){
                printf("%s (Carta 2) com Super Poder de %u *** VOCÊ PERDEU ***.\n\n", estado2, superPoder2);
                resultado2 = 0;

            } else {
                printf("Ninguem venceu, é um empate!");
            };
        break;

        default:
            printf("\nOpção inválida, tente novamente.\n\n");
        break;
    };

    if (resultado1 == resultado2 && (resultado1 != 0 && resultado2 != 0)){
            printf("||| *** PARABÉNS VOCÊ VENCEU A BATALHA *** |||\n\n");

        } else if (resultado1 != resultado2){
        printf("||| É UM EMPATE, VAMOS AO ÚLTIMO E DECISSIVO 3° ROUND! |||\n\n");

        printf("*** 1 - PIB. ***\n");
        printf("*** 2 - POPULAÇÃO. ***\n");
        printf("*** 3 - ÁREA TERRITORIAl. ***\n");
        printf("*** 4 - PONTOS TURÍSTICOS. ***\n");
        printf("*** 5 - PIB PER CAPTA. ***\n");
        printf("*** 6 - DENSIDADE POPULACIONAL. ***\n");
        printf("*** 7 - SUPER PODER. ***\n\n");

        while (1) {
        printf("Sua terceira escolha: ");
        if (scanf("%d", &escolha3) == 1) {
            if (escolha3 >= 1 && escolha3 <= 7) {
                break; // Sai do loop se a entrada estiver no intervalo
            } else {
                printf("Opção inválida. Por favor, digite um número entre 1 e 7.\n\n");
            }
        } else {
            printf("Entrada inválida. Por favor, digite um número inteiro.\n\n");
            while (getchar() != '\n'); // Limpa o buffer
        }
        }

        // Loop para garantir que a escolha3 seja diferente da escolha1 e escolha2
        while (escolha3 == escolha1 || escolha3 == escolha2) {
            printf("Você já escolheu esse atributo. Por favor, escolha outro número: ");
            if (scanf("%d", &escolha3) == 1) {
                if (escolha3 >= 1 && escolha3 <= 7) {
                    if (escolha3 != escolha1 && escolha3 != escolha2) {
                        break; // Sai do loop se a nova escolha for válida e diferente
                    }
                } else {
                    printf("Opção inválida. Por favor, digite um número entre 1 e 7.\n\n");
                }
            } else {
                printf("Entrada inválida. Por favor, digite um número inteiro.\n\n");
                while (getchar() != '\n'); // Limpa o buffer
            }
        };

        switch (escolha3){

            case 1:
                printf("\nVocê escolheu PIB.\n");
                
                printf("E quem vence a disputa de MAIOR PIB é: ");

                if (pib1 > pib2){
                    printf("%s (Carta 1) com PIB de R$ %.2f - *** PARABÉNS VOCÊ VENCEU ***.\n\n", estado1, pib1);
                    resultado3 = 1;

                } else if (pib1 < pib2){
                    printf("%s (Carta 2) com PIB de R$ %.2f - *** VOCÊ PERDEU ***.\n\n", estado2, pib2);
                    resultado3 = 0;

                } else {
                    printf("Ninguem venceu, é um empate!\n\n");
                };
            break;

            case 2:
                printf("\nVocê escolheu POPULAÇÃO.\n");

                printf("E quem vence a disputa de MAIOR POPULAÇÃO é: ");

                if (populacao1 > populacao2){
                    printf("%s (Carta 1) com população de %u *** PARABÉNS VOCÊ VENCEU ***.\n\n", estado1, populacao1);
                    resultado3 = 1;

                } else if (populacao1 < populacao2){
                    printf("%s (Carta 2) com população de %u *** VOCÊ PERDEU ***.\n\n", estado2, populacao2);
                    resultado3 = 0;

                } else {
                    printf("Ninguem venceu, é um empate!");
                };
            break;

            case 3:
                printf("\nVocê escolheu ÁREA TERRITORIAL.\n");

                printf("E quem vence a disputa de MAIOR ÁREA TERRITORIAL é: ");

                if (area1 > area2){
                    printf("%s (Carta 1) com área de %.2f *** PARABÉNS VOCÊ VENCEU ***.\n\n", estado1, area1);
                    resultado3 = 1;

                } else if (area1 < area2){
                    printf("%s (Carta 2) com área de %.2f *** VOCÊ PERDEU ***.\n\n", estado2, area2);
                    resultado3 = 0;

                } else {
                    printf("Ninguem venceu, é um empate!");
                };
            break;

            case 4:
                printf("\nVocê escolheu PONTOS TURÍSTICOS.\n");

                printf("E quem vence a disputa de MAIOR PONTOS TURÍSTICOS é: ");

                if (ptTuristico1 > ptTuristico2){
                    printf("%s (Carta 1) com pontos de turismo de %u *** PARABÉNS VOCÊ VENCEU ***.\n\n", estado1, ptTuristico1);
                    resultado3 = 1;

                } else if (ptTuristico1 < ptTuristico2){
                    printf("%s (Carta 2) com pontos de turismo de %u *** VOCÊ PERDEU ***.\n\n", estado2, ptTuristico2);
                    resultado3 = 0;

                } else {
                    printf("Ninguem venceu, é um empate!");
                };
            break;

            case 5:
                printf("\nVocê escolheu PIB PER CAPTA.\n");

                printf("E quem vence a disputa de maior PIB PER CAPTA é: ");

                if (percaptaPIB1 > percaptaPIB2){
                    printf("%s (Carta 1) com PIB per capta de %.2f *** PARABÉNS VOCÊ VENCEU ***.\n\n", estado1, percaptaPIB1);
                    resultado3 = 1;

                } else if (percaptaPIB1 < percaptaPIB2){
                    printf("%s (Carta 2) com PIB per capta de %.2f *** VOCÊ PERDEU ***.\n\n", estado2, percaptaPIB2);
                    resultado3 = 0;

                } else {
                    printf("Ninguem venceu, é um empate!");
                };
            break;

            case 6:
                printf("\nVocê escolheu DENSIDADE POPULACIONAL.\n");

                printf("E quem vence a disputa de MENOR DENSIDADE POPULACIONAL é: ");

                if (densidadePopulacao1 < densidadePopulacao2){
                    printf("%s (Carta 1) com Densidade Populacional de %.2f *** PARABÉNS VOCÊ VENCEU ***.\n\n", estado1, densidadePopulacao1);
                    resultado3 = 1;

                } else if (densidadePopulacao1 > densidadePopulacao2){
                    printf("%s (Carta 2) com Densidade Populacional de %.2f *** VOCÊ PERDEU ***.\n\n", estado2, densidadePopulacao2);
                    resultado3 = 0;

                } else {
                    printf("Ninguem venceu, é um empate!");
                };
            break;

                case 7:
                printf("\nVocê escolheu SUPER PODER.\n");

                printf("E quem vence a disputa de MAIOR SUPER PODER é: ");

                if (superPoder1 > superPoder2){
                    printf("%s (Carta 1) com Super Poder de %u *** PARABÉNS VOCÊ VENCEU ***.\n\n", estado1, superPoder1);
                    resultado3 = 1;

                } else if (superPoder1 < superPoder2){
                    printf("%s (Carta 2) com Super Poder de %u *** VOCÊ PERDEU ***.\n\n", estado2, superPoder2);
                    resultado3 = 0;

                } else {
                    printf("Ninguem venceu, é um empate!");
                };
            break;

            default:
                printf("\nOpção inválida, tente novamente.\n\n");
            break;
        };

            // ULTIMA VERIFICAÇÃO DE VITORIA PARA A DISPUTA

            if (resultado3 != 0){
                printf("||| *** PARABÉNS VOCÊ VENCEU A BATALHA *** |||\n\n");

            } else {
                printf("||| VOCÊ PERDEU A BATALHA |||\n");
                printf("||| MAIS SORTE NA PRÓXIMA |||\n\n");
            };

    // FINALIZAÇÃO DA PRIMEIRA VERIFICAÇÃO DE VITORIA 

    } else {
            printf("||| VOCÊ PERDEU A BATALHA |||\n");
            printf("||| MAIS SORTE NA PRÓXIMA |||\n\n");
    };

    return 0;
}