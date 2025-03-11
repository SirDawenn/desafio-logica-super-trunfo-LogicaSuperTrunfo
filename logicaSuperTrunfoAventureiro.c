#include <stdio.h>

int main() {

    float area, area2, pib, pib2;
    char pais[20], pais2 [20], estado[20], estado2[20], cidade[20], cidade2 [20], codcarta[20], codcarta2[20];
    int populacao, populacao2, pt, pt2, opcao; 

    printf("Para começar o jogo, digite um nome para o Pais da primeira carta:\n"); 
    scanf("%s", &pais);
    printf(" País cadastrado como: %s\n", pais);
    printf("Agora, digite um nome para o Estado da primeira carta:\n");
    scanf("%s", &estado);
    printf("Estado cadastrado como: %s\n", estado);
printf("Digite o codigo da sua primeira carta a ser criada. Sem espaços, por exemplo: A01, A02..\n");
    scanf("%s", &codcarta);
    printf("Código cadastrado como: %s\n", codcarta);
printf("Agora, escolha apenas um nome para a cidade: (Não usar nomes duplos) \n");
    scanf("%s", &cidade);
    printf("Cidade cadastrada como: %s\n", cidade);
printf("Agora, informe a Populacao da  cidade: %s\n", cidade);
    scanf("%d", &populacao);
    printf("População cadastrada: %d habitantes \n", populacao);
printf("Dessa vez, informe a area total (o tamanho) da cidade: %s (Deve ser decimal) \n", cidade);
    scanf("%f", &area);
    printf("Área cadastrada como: %f km² \n", area);
printf("Informe qual sera o PIB da cidade: %s (Deve ser decimal)\n", cidade);
    scanf("%f", &pib);
    printf("PIB cadastrado como: %f bilhões de reais\n", pib);
printf("Informe o numero de pontos turisticos da cidade %s\n", cidade);
    scanf("%d", &pt);
    printf("Número de Pontos Turisticos cadastrado como: %d\n", pt);

    printf("Agora vamos criar a sua Segunda Carta! \n");

    printf("Digite um nome para o Pais da segunda carta:\n"); 
    scanf("%s", &pais2);
    printf(" País cadastrado como: %s\n", pais2);
    printf("Digite um nome para o Estado da segunda carta:\n");
    scanf("%s", &estado2);
    printf("Estado cadastrado como: %s\n", estado2);
printf("Digite o codigo da sua segunda carta. Sem espaços, por exemplo: A01, A02..\n");
    scanf("%s", &codcarta2);
    printf("Código cadastrado como: %s\n", codcarta2);
printf("Agora, escolha apenas um nome para a cidade: (Não usar nomes duplos) \n");
    scanf("%s", &cidade2);
    printf("Cidade cadastrada como: %s\n", cidade2);
printf("Agora, informe a Populacao da  cidade: %s\n", cidade2);
    scanf("%d", &populacao2);
    printf("População cadastrada: %d habitantes \n", populacao2);
printf("Dessa vez, informe a area total (o tamanho) da cidade: %s (Deve ser decimal) \n", cidade2);
    scanf("%f", &area2);
    printf("Área cadastrada como: %f km² \n", area2);
printf("Informe qual sera o PIB da cidade: %s (Deve ser decimal)\n", cidade2);
    scanf("%f", &pib2);
    printf("PIB cadastrado como: %f bilhões de reais\n", pib2);
printf("Informe o numero de pontos turisticos da cidade %s\n", cidade2);
    scanf("%d", &pt2);
    printf("Número de Pontos Turisticos cadastrado como: %d\n", pt2);

    float denspop = (float) populacao / area;
    float pibpcap = (float) pib / populacao;
    float denspop2 = (float) populacao2 / area2;
    float pibpcap2 = (float) pib2 / area2;

     printf("Confira os valores da sua primeira carta: \n");
    printf("Carta: %s\n Nome do Pais: %s\n Estado: %s\n Cidade: %s\n População: %d habitantes \n Area: %f km² \n PIB: %f  bilhões de reais\n Pontos turistico: %d\n Densidade Populacional: %f\n PIB per Capita: %f\n", codcarta, pais, estado, cidade, populacao, area, pib, pt, denspop, pibpcap);
    
    printf("Agora Confira os valores da sua segunda carta: \n");
    printf("Carta: %s\n Nome do Pais: %s\n Estado: %s\n Cidade: %s\n População: %d habitantes \n Area: %f km² \n PIB: %f bilhões de reais \n Pontos turistico: %d\n Densidade Populacional: %f\n PIB per Capita: %f\n", codcarta2, pais2, estado2, cidade2, populacao2, area2, pib2, pt2, denspop2, pibpcap2);

    printf("Agora, começaremos o jogo!!!!!");
    printf(" Escolha qual atributo você deseja para realizar a comparação entre cartas:");
    printf(" 1. Área \n");
    printf(" 2. PIB \n");
    printf(" 3. Pontos Turísticos \n");
    printf(" 4. População \n");
    printf(" 5. Densidade Populacional \n");
    printf(" 6. PIB per capita \n");
    printf("Digite um número entre 1 a 6\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("A opção esolhida foi: Área");
        if (area > area2) {
            printf("A cidade %s possui uma Area de %f\nJá a Area da cidade %s é de %f\nA cidade vencedora então foi: %s\n", cidade, area, cidade2, area2, cidade);
    } else if (area2 > area){
            printf("A cidade %s possui uma Area de %f\nJá a Area da cidade %s é de %f\nA cidade vencedora então foi: %s\n", cidade2, area2, cidade, area, cidade2);
        } else { 
            printf("EMPATE. Os dois valores são iguais. \n");
        }
        break;
    case 2:
        printf("A opção esolhida foi: PIB");
    if (pib > pib2) {
        printf("A cidade %s possui um PIB de %f\nJá o PIB da cidade %s é de %f\nA cidade vencedora então é: %s\n", cidade, pib, cidade2, pib2, cidade);
} else if (pib2 > pib){
        printf("A cidade %s possui um PIB de %f\nJá o PIB da cidade %s é de %f\nA cidade vencedora então é: %s\n", cidade2, pib2, cidade, pib, cidade2);
    } else { 
        printf("EMPATE. Os dois valores são iguais. \n");
    }
    break;
    case 3:
    printf("A opção esolhida foi: Pontos Turisticos");
    if (pt > pt2) {
        printf("A cidade %s possui a quantidade de Pontos Turisticos: %d\nJá a quantidade na cidade %s é de: %d\nA cidade vencedora então é: %s\n", cidade, pt, cidade2, pt2, cidade);
} else if (pt2 > pt){
        printf("A cidade %s possui a quantidade de Pontos Turisticos: %d\nJá a quantidade na cidade %s é de: %f\nA cidade vencedora então é: %s\n", cidade2, pt2, cidade, pt, cidade2);
    } else { 
        printf("EMPATE. Os dois valores são iguais. \n");
    }
    break;
    case 4:
    printf("A opção esolhida foi: População");
    if (populacao > populacao2) {
        printf("A cidade %s possui a População: %d\nJá a População na cidade %s é de: %d\nA cidade vencedora então é: %s\n", cidade, populacao, cidade2, populacao2, cidade);
} else if (populacao2 > populacao){
        printf("A cidade %s possui a População: %d\nJá a População na cidade %s é de: %d\nA cidade vencedora então é: %s\n", cidade2, populacao2, cidade, populacao, cidade2);
    } else { 
        printf("EMPATE. Os dois valores são iguais. \n");
    }
    break;
    case 5:
    printf("A opção esolhida foi: Densidade Populacional");
    if (denspop < denspop2) {
        printf("A cidade %s possui a Densidade Populacional de: %f\nJá a Densidade Populacional na cidade %s é de: %f\nA cidade vencedora então é: %s\n", cidade, denspop, cidade2, denspop2, cidade);
} else if (denspop2 < denspop){
        printf("A cidade %s possui a Densidade Populacional de: %f\nJá a Densidade Populacional na cidade %s é de: %f\nA cidade vencedora então é: %s\n", cidade2, denspop2, cidade, denspop, cidade2);
    } else { 
        printf("EMPATE. Os dois valores são iguais. \n");
    }
    break;
    case 6:
    printf("A opção esolhida foi: PIB per capita");
    if (pibpcap > pibpcap2) {
        printf("A cidade %s possui PIB per capita de: %f\nJá o PIB per capita na cidade %s é de: %f\nA cidade vencedora então é: %s\n", cidade, pibpcap, cidade2, pibpcap2, cidade);
} else if (pibpcap2 > pibpcap){
        printf("A cidade %s possui PIB per capita de: %f\nJá o PIB per capita na cidade %s é de: %f\nA cidade vencedora então é: %s\n", cidade2, pibpcap2, cidade, pibpcap, cidade2);
    } else { 
        printf("EMPATE. Os dois valores são iguais. \n");
    }
    break;
    default:
        printf(" Opção Inválida!! \n");
        break;
    }
   
        printf (" FIM DE JOGO.");
    return 0;
}