#include <stdio.h>

    unsigned int populacao1 = 6729894, populacao2 = 11895578;
    unsigned int ptTuristico1 = 9650, ptTuristico2 = 16820;
    float densidadePopulacao1, densidadePopulacao2, percaptaPIB1, percaptaPIB2;
    float area1 = 43.696, pib1 = 1153000000, area2 = 248.219, pib2 = 3500000000;
    char pais1[50] = "Brasil", pais2[50] = "Brasil";
    char estado1[50] = "Rio de Janeiro", estado2[50] = "São Paulo";
    char cidade1[50] = "Duque de Caxias", cidade2[50] = "Adamantina";
    char codigoC1[5] = "C1", codigoC2[5] = "C2"; 
    unsigned int superPoder1, superPoder2;


int main() {

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
    //scanf("%.2f", &area1);
    printf("%.2f Km².\n\n", area1);

    // PIB CARTA 1

    printf("Qual o PIB de ESTADO: ");
    //scanf("%.0f", &pib1);
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
    //scanf("%.2f", &area2);
    printf("%.2f Km².\n\n", area2);

    // PIB CARTA 2

    printf("Qual o PIB de ESTADO: ");
    //scanf("%.2f", &pib2);
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

    printf("AS REGRAS SÃO:\n\n"
            "Escolha um atributo da sua carta e compare com o mesmo da outra carta.\n"
            "VENCE A CARTA COM O MAIOR VALOR DO ATRIBUTO (exceto para o atributo DENSIDADE POPULACIONAL).\n"
            "Para vencer escolhendo DENSIDADE POPULACIONAL, você deve ter o MENOR VALOR entre ambos atributos.\n\n"
            "VAMOS LÁ!\n\n");

    // COMPARAÇÃO ENTRE CARTAS

    printf("A ÁREA TERRITORIAL do Estado %s é MAIOR que %s?\n", estado1, estado2);
    if (area1 > area2)
    {
        printf("%s Venceu, pois tem a maior área territorial.\n\n", estado1);

    } else{
        printf("%s Venceu, pois tem a maior área territorial.\n\n", estado2);

    };

    printf("A POPULÇÃO do Estado %s é MAIOR que %s?\n", estado1, estado2);
    if (populacao1 > populacao2)
    {
        printf("%s Venceu, pois tem a maior populção.\n\n", estado1);

    } else{
        printf("%s Venceu, pois tem a maior população.\n\n", estado2);

    };

    printf("O número de PONTOS TURÍSTICOS do Estado %s é MAIOR que %s?\n", estado1, estado2);
    if (ptTuristico1 > ptTuristico2)
    {
        printf("%s Venceu, pois tem mais pontos turísticos.\n\n", estado1);

    } else{
        printf("%s Venceu, pois tem mais pontos turísticos.\n\n", estado2);

    };

    printf("O PIB do Estado %s é maior que %s?\n", estado1, estado2);
    if (pib1 > pib2)
    {
        printf("%s Venceu, pois tem o maior Produto Intero Bruto.\n\n", estado1);

    } else{
        printf("%s Venceu, pois tem o maior Produto Interno Bruto.\n\n", estado2);

    };

    printf("O PIB PER CAPTA do Estado %s é MAIOR que %s?\n", estado1, estado2);
    if (percaptaPIB1 > percaptaPIB2)
    {
        printf("%s Venceu, pois tem o maior PIB PER CAPTA.\n\n", estado1);

    } else{
        printf("%s Venceu, pois tem o maior PIB PER CAPTA.\n\n", estado2);

    };

    printf("A DENSIDADE POPULACIONAL do Estado %s é MENOR que %s?\n", estado1, estado2);
    if (densidadePopulacao1 > densidadePopulacao2)
    {
        printf("%s Venceu, pois tem a MENOR DENSIDADE POPULACIONAL.\n\n", estado1);

    } else{
        printf("%s Venceu, pois tem a MENOR DENSIDADE POPULACIONAL.\n\n", estado2);

    };

    printf("O SUPOER PODER do Estado %s é MAIOR que %s?\n", estado1, estado2);
    if (superPoder1 > superPoder2)
    {
        printf("%s Venceu, pois tem o maior super poder.\n\n", estado1);

    } else{
        printf("%s Venceu, pois tem o maior super poder.\n\n", estado2);

    };

    return 0;
}