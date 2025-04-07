#include <stdio.h>

int main(){
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ptTuristico1, ptTuristico2;
    float densPopulacional1, densPopulacional2;
    float pibPerCapita1, pibPerCapita2;

    // Cadastro da primeira carta.
    printf("Cadastre a primeira carta:A1\n");
    printf("Digite a letra que representa o estado:Go\n");
    scanf("%c", &estado1);
    printf("Digite o codigo da carta:A1\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:Goiania\n");
    scanf("%s", nomeCidade1);
    printf("Digite o n\u00famero de habitantes:138.900\n");
    scanf(" %lu", &populacao1);
    printf("Digite a \u00c1rea:738 km²\n");
    scanf(" %f", &area1);
    printf("Digite o PIB:60.000.000\n");
    scanf(" %f", &pib1);
    printf("Digite o n\u00famero de pontos tur\u00edsticos: 12\n");
    scanf(" %d", &ptTuristico1);

    // C\u00e1lculos da primeira carta
    densPopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = (float) (pib1 * 1000000000) / populacao1;

    printf("\nCarta: 01\nEstado: %c\nC\u00f3digo: %s\nNome da Cidade: %s\nPopula\u00e7\u00e3o: %lu\n\u00c1rea: %.2f Km\u00b2\nPIB: %.2f bilh\u00f5es de reais\nN\u00famero de Pontos Tur\u00edsticos: %d\n", estado1, codigo1, nomeCidade1, populacao1, area1, pib1, ptTuristico1);
    printf("Densidade Populacional: %.2f hab/Km\u00b2\nPib per Capita: %.2f reais\n", densPopulacional1, pibPerCapita1);

    // Cadastro da segunda carta.
    printf("\nCadastre a segunda carta:B2\n");
    printf("Digite a letra que representa o estado:TO\n");
    scanf("%c", &estado2); // espa\u00e7o corrige bug do enter anterior
    printf("Digite o c\u00f3digo da carta:B3 \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: Palmas \n");
    scanf("%s", nomeCidade2);
    printf("Digite o n\u00famero de habitantes:96.010\n");
    scanf("%lu", &populacao2);
    printf("Digite a \u00c1rea:2.490 km²\n");
    scanf(" %f", &area2);
    printf("Digite o PIB:67.000.000\n");
    scanf(" %f", &pib2);
    printf("Digite o n\u00famero de pontos tur\u00edsticos: 16\n");
    scanf("%d", &ptTuristico2);

    // C\u00e1lculos da segunda carta
    densPopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) (pib2 * 1000000000) / populacao2;

    printf("\nCarta: 02\nEstado: %c\nC\u00f3digo: %s\nNome da Cidade: %s\nPopula\u00e7\u00e3o: %lu\n\u00c1rea: %.2f Km\u00b2\nPIB: %.2f bilh\u00f5es de reais\nN\u00famero de Pontos Tur\u00edsticos: %d\n", estado2, codigo2, nomeCidade2, populacao2, area2, pib2, ptTuristico2);
    printf("Densidade Populacional: %.2f hab/Km\u00b2\nPib per Capita: %.2f reais\n", densPopulacional2, pibPerCapita2);

    // Resultado do jogo
    printf("\nCompara\u00e7\u00e3o das cartas (Atributo: Popula\u00e7\u00e3o)\n\n");
    printf("Carta 1 - %s: %lu;\nCarta 2 - %s: %lu.\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) Venceu!!!\n", nomeCidade1);
    } else {
        printf("Resultado: Carta 2 (%s) Venceu!!!\n", nomeCidade2);
    }

    return 0;
}
