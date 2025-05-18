#include <stdio.h>

    
int main() {

    unsigned int populacao1 = 16055174, populacao2 = 44411238;
    unsigned int ptTuristico1 = 150, ptTuristico2 = 124;
    float densidadePopulacao1, densidadePopulacao2;
    float percaptaPIB1, percaptaPIB2;
    float area1 = 43696.00, pib1 = 115000000.0;
    float area2 = 248219.00, pib2 = 350000000.0;
    char pais1[50] = "Brasil", pais2[50] = "Brasil";
    char estado1[50] = "Rio de Janeiro", estado2[50] = "São Paulo";
    char cidade1[50] = "Duque de Caxias", cidade2[50] = "Adamantina";
    char codigoC1[5] = "C1", codigoC2[5] = "C2"; 
    unsigned int superPoder1, superPoder2;
    int escolha;

    // CADASTRO DA PRIMEIRA CARTA

    printf("Cadastre sua Primeira carta! \n\n");

    // PAIS, ESTADO, CIDADE e CODIGO DA CARTA 1

    printf("A PRIMEIRA CARTA terá o nome de qual País: ");
    //scanf(" %[^\n]", pais1);
    printf("%s \n\n", pais1);

    printf("Qual o nome do ESTADO: ");
    //scanf(" %[^\n]", estado1);
    printf("%s \n\n", estado1);

    printf("Agora o nome da CIDADE: ");
    //scanf(" %[^\n]", cidade1);
    printf("%s \n\n", cidade1);

    // POPULÇÃO CARTA 1

    printf("Informe a POPULAÇÃO do ESTADO: ");
    //scanf("%u", &populacao1);
    printf("%u milhões de pessoas.\n\n", populacao1);

    // ÁREA CARTA 1

    printf("Informe de quanto é a ÁREA em kM² do ESTADO: ");
    //scanf("%f", &area1);
    printf("%.2f Km².\n\n", area1);

    // PIB CARTA 1

    printf("Qual o PIB de ESTADO: ");
    //scanf("%f", &pib1);
    printf("R$%.0f Trilhões.\n\n", pib1);

    // PONTOS TURÍSTICOS CARTA 1

    printf("Por último informe quantos PONTOS TURÍSTICOS possue o ESTADO: ");
    //scanf("%d", &ptTuristico1);
    printf("%d pontos de turismo.\n\n", ptTuristico1);

    // Calculo da DENSIDADE POPULACIONAL, PIB PER CAPTA e SUPER PODER da CARTA 1

    densidadePopulacao1 = (float) populacao1 / area1;
    percaptaPIB1 = pib1 / populacao1;

    printf("Com isso a DENSIDADE POPULACIONAL é de %.0f Mil pessoas por Km².\n", densidadePopulacao1);
    printf("E um PIB per capta de R$%.3f Milhões. \n\n", percaptaPIB1);

    // SUPER PODER da CARTA 1

    densidadePopulacao1 = 1 / densidadePopulacao1;
    superPoder1 = (float) area1 + populacao1 + ptTuristico1 + pib1 + densidadePopulacao1 + percaptaPIB1;
    printf("O Super Poder dessa carta é de %.0f.\n\n", superPoder1);

    // FINALIZAÇÃO CARTA 1

    printf("A carta do País %s, estado %s e cidade %s foi cadastrada e possui o código %s. \n\n", pais1, estado1, cidade1, codigoC1);

    printf("Com isso concluimos nossa primeira carta e Vamos fazer nossa segunda e última carta agora. \n\n");


    // AQUI AGORA JÁ COMEÇA O CADASTRO DA SEGUNDA CARTA

    // PAIS, ESTADO, CIDADE e CODIGO DA CARTA 2

    printf("A PRIMEIRA CARTA terá o nome de qual País: ");
    //scanf(" %[^\n]", pais2);
    printf("%s \n\n", pais2);

    printf("Qual o nome do ESTADO: ");
    //scanf(" %[^\n]", estado2);
    printf("%s \n\n", estado2);

    printf("Agora o nome da CIDADE: ");
    //scanf(" %[^\n]", cidade2);
    printf("%s \n\n", cidade2);

    // POPULÇÃO CARTA 2

    printf("Informe a POPULAÇÃO do ESTADO: ");
    //scanf("%u", &populacao2);
    printf("%u milhões de pessoas.\n\n", populacao2);

    // ÁREA CARTA 2

    printf("Informe de quanto é a ÁREA em kM² do ESTADO: ");
    //scanf("%f", &area2);
    printf("%.2f Km².\n\n", area2);

    // PIB CARTA 2

    printf("Qual o PIB de ESTADO: ");
    //scanf("%f", &pib2);
    printf("R$%.2f Trilhões.\n\n", pib2);

    // PONTOS TURÍSTICOS CARTA 2

    printf("Por último informe quantos PONTOS TURÍSTICOS possue o ESTADO: ");
    //scanf("%d", &ptTuristico2);
    printf("%d pontos de turismo.\n\n", ptTuristico2);

    // Calculo da DENSIDADE POPULACIONAL, PIB PER CAPTA e SUPER PODER da CARTA 1

    densidadePopulacao2 = (float) populacao2 / area2;
    percaptaPIB2 = pib2 / populacao2;

    printf("Com isso a DENSIDADE POPULACIONAL é de %.0f Mil pessoas por Km².\n", densidadePopulacao2);
    printf("E um PIB per capta de R$%.3f Milhões. \n\n", percaptaPIB2);

    // SUPER PODER da CARTA 1

    densidadePopulacao1 = 1 / densidadePopulacao2;
    superPoder1 = (float) area2 + populacao2 + ptTuristico2 + pib2 + densidadePopulacao2 + percaptaPIB2;
    printf("O Super Poder dessa carta é de %.0f.\n\n", superPoder2);

    // FINALIZAÇÃO CARTA 2

    printf("A carta do País %s, estado %s e cidade %s foi cadastrada e possui o código %s. \n\n", pais2, estado2, cidade2, codigoC2);

    printf("Com isso concluimos nossa segunda carta e Vamos fazer agora a comparação entre elas. \n\n");

    // REGRAS

    printf("AS REGRAS SÃO:\n\n"
            "Escolha um atributo da sua carta e compare com o mesmo da outra carta.\n"
            "VENCE A CARTA COM O MAIOR VALOR DO ATRIBUTO (exceto para o atributo DENSIDADE POPULACIONAL).\n"
            "Para vencer escolhendo DENSIDADE POPULACIONAL, você deve ter o MENOR VALOR entre ambos atributos.\n\n"
            "VAMOS LÁ!\n\n");


    // COMPARAÇÃO ENTRE CARTAS
    

    printf("Digite o número corresponte ao atributo que deseja comparar: \n\n");

    printf("*** 1 - PIB. ***\n");
    printf("*** 2 - POPULAÇÃO. ***\n");
    printf("*** 3 - ÁREA TERRITORIAl. ***\n");
    printf("*** 4 - PONTOS TURÍSTICOS. ***\n");
    printf("*** 5 - PIB PER CAPTA. ***\n");
    printf("*** 6 - DENSIDADE POPULACIONAL. ***\n");
    printf("*** 7 - SUPER PODER. ***\n\n");

    scanf("%d \n\n", &escolha);


    // RESULTADO DA COMPARAÇÃO


    switch (escolha){

        case 1:
            printf("Você escolheu PIB.\n");
            
            printf("E quem vence a disputa de MAIOR PIB é: ");

            if (pib1 > pib2){
                printf("%s (Carta 1).\n\n", estado1);
            } else{
                printf("%s (Carta 2).\n\n", estado2);
            };
        break;

        case 2:
            printf("Você escolheu POPULAÇÃO.\n");

            printf("E quem vence a disputa de MAIOR POPULAÇÃO é: ");

            if (populacao1 > populacao2){
                printf("%s (Carta 1).\n\n", estado1);
            } else{
                printf("%s (Carta 2).\n\n", estado2);
            };
        break;

        case 3:
            printf("Você escolheu ÁREA TERRITORIAL.\n");

            printf("E quem vence a disputa de MAIOR ÁREA TERRITORIAL é: ");

            if (area1 > area2){
                printf("%s (Carta 1).\n\n", estado1);
            } else{
                printf("%s (Carta 2).\n\n", estado2);
            };
        break;

        case 4:
            printf("Você escolheu PONTOS TURÍSTICOS.\n");

            printf("E quem vence a disputa de MAIOR PONTOS TURÍSTICOS é: ");

            if (ptTuristico1 > ptTuristico2){
                printf("%s (Carta 1).\n\n", estado1);
            } else{
                printf("%s (Carta 2).\n\n", estado2);
            };
        break;

        case 5:
            printf("Você escolheu PIB PER CAPTA.\n");

            printf("E quem vence a disputa de maior PIB PER CAPTA é: ");

            if (percaptaPIB1 > percaptaPIB2){
                printf("%s (Carta 1).\n\n", estado1);
            } else{
                printf("%s (Carta 2).\n\n", estado2);
            };
        break;

        case 6:
            printf("Você escolheu DENSIDADE POPULACIONAL.\n");

            printf("E quem vence a disputa de MENOR DENSIDADE POPULACIONAL é: ");

            if (densidadePopulacao1 < densidadePopulacao2){
                printf("%s (Carta 1).\n\n", estado1);
            } else{
                printf("%s (Carta 2).\n\n", estado2);
            };
        break;

            case 7:
            printf("Você escolheu SUPER PODER.\n");

            printf("E quem vence a disputa de MAIOR SUPER PODER é: ");

            if (superPoder1 > superPoder2){
                printf("%s (Carta 1).\n\n", estado1);
            } else{
                printf("%s (Carta 2).\n\n", estado2);
            };
        break;

        default:
            printf("Opção inválida, tente novamente.\n\n");
        break;
    }

    return 0;
}