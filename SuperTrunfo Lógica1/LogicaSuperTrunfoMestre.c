#include <stdio.h>

int main() {

    char pais[25];  char pais2[25];
    char codigo_carta[4];  char codigo_carta2[4];
    int Populacao; int Populacao2;
    float Area; float Area2;
    float PIB; float PIB2;
    int Numero_de_pontos_turisticos; int Numero_de_pontos_turisticos2;

    //Variaveis de Calculo de propriedades
    float PIBperCapita1, densidade1;
    float PIBperCapita2, densidade2;

    //Variáveis das opções do menu
    int opcaomenu1;
    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcaomenu1);
        switch (opcaomenu1) {

            case 1:
                printf("Iniciando o jogo...\n");
                printf("Olá, jogador. Iremos realizar primeiro a inserção de dados das 2 cartas\n");

                printf("Introduza os dados da carta 1 a seguir:\n");
                //carta1
                
                printf("Código da carta (primeira letra seguida de dois numeros): \n");
                scanf("%3s", codigo_carta);
    
                printf("Introduza o nome do pais: \n");
                scanf(" %[^\n]", pais);
    
                printf("Introduza o número de população: \n");
                scanf("%d", &Populacao);
    
                printf("Introduza o raio de distância total do pais em km²: \n");
                scanf("%f", &Area);
    
                printf("Introduza o PIB do pais em bilhões: \n");
                scanf("%f", &PIB);
    
                printf("Introduza o número de pontos turísticos: \n");
                scanf("%d", &Numero_de_pontos_turisticos);
    
                 //carta 2
    
                printf("Introduza os dados da carta 2 a seguir:\n");
                   
                printf("Código da carta (primeira letra seguida de dois numeros): \n");
                scanf("%3s", codigo_carta2);
    
                printf("Introduza o nome do pais: \n");
                scanf(" %[^\n]", pais2);
    
                printf("Introduza o número de população: \n");
                scanf("%d", &Populacao2);
    
                printf("Introduza o raio de distância total do pais em km²: \n");
                scanf("%f", &Area2);
    
                printf("Introduza o PIB do pais em bilhões: \n");
                scanf("%f", &PIB2);
    
                printf("Introduza o número de pontos turísticos: \n");
                scanf("%d", &Numero_de_pontos_turisticos2);
    
            //calculo pib*10^6 (bilhão para decimal)
    
            //calculo pibpercapta2 e densidade populacional
            //deveria ser 10 elevado a 6
            //porém tem duas casas decimais no float, então será elevado à 8
    
            PIBperCapita2 = (PIB2*100000000) / (float)Populacao2; 
            //calculo pibpercapta1 e densidade populacional            
            PIBperCapita1 = (PIB*100000000) / (float)Populacao;
    
            //calculo da densidade populacional
            densidade1 = (float)Populacao / Area;
            densidade2 = (float)Populacao2 / Area2;
    
            // Exibição dos dados coletados
    
                printf("      ***Estes são os dados inseridos das cartas:***");
                //carta 1
                    printf("\n      ***Dados da Carta 1:***\n");
                    printf("Código: %s\n", codigo_carta);
                    printf("pais: %s\n", pais);
                    printf("População: %d\n", Populacao);
                    printf("Área: %.2f km²\n", Area);
                    printf("PIB: %.2f bilhões\n", PIB);
                    printf("Pontos turísticos: %d\n", Numero_de_pontos_turisticos);
                    printf("PIB per capita do pais: %.2f \n", PIBperCapita1);
                    printf("A densidade populacional da Carta 1 é: %2f\n", densidade1);
    
                //carta 2
                    printf("\n      ***Dados da Carta 2:***\n");
                    printf("Código: %s\n", codigo_carta2);
                    printf("pais: %s\n", pais2);
                    printf("População: %d\n", Populacao2);
                    printf("Área: %.2f km²\n", Area2);
                    printf("PIB: %.2f bilhões\n", PIB2);
                    printf("Pontos turísticos: %d\n", Numero_de_pontos_turisticos2);
                    printf("PIB per capita do pais: %.2f\n", PIBperCapita2);
                    printf("A densidade populacional da Carta 2 é: %2f\n", densidade2);
    
            //Variaveis das somas das cartas, armazenando dados do superpoder
            float SpCarta1, SpCarta2, Inverso_densidade, Inverso_densidade2;
    
                //calculo do super poder (Sp)
                 Inverso_densidade = (Area / ((float)Populacao+1));
                 Inverso_densidade2 = (Area2 / ((float)Populacao2+1));
                 SpCarta1 = (Populacao+ Area+PIB+Numero_de_pontos_turisticos+PIBperCapita1+Inverso_densidade);
                 SpCarta2 = (Populacao2+ Area2+PIB2+Numero_de_pontos_turisticos2+PIBperCapita2+Inverso_densidade2);        
    
            //Exibição do SP
                 printf("O Super Poder total da Carta 1 é: %.2f\n", SpCarta1);
                 printf("O Super Poder total da Carta 2 é: %.2f\n", SpCarta2);
    
            // comparação dos valores e retorno do vencedor
    
                char *SP_vencedor[2] = {codigo_carta2, codigo_carta};
                char *vencedor = SP_vencedor[SpCarta1 > SpCarta2];
                    printf("O código da carta com maior super poder é: %s\n", vencedor);    
                    
                //A seguir comparações de qual o vencedor dentre os dados das cartas
    
                printf("A seguir vamos mostrar a comparação de dois dados inseridos e qual o vencedor\n");
                printf("De acordo com cada categoria\n");
                
                int opcaodado1, opcaodado2;
                printf("Informe qual o dado escolhido da rodada\n");
                printf("[1] Pupulação\n");
                printf("[2]Area\n");
                printf("[3]PIB\n");  
                printf("[4]Pontos Turisticos\n");
                printf("[5]PIB per Capita\n");
                printf("[6]Densidade Populacional \n");
                scanf("%d", &opcaodado1);
                printf("\n");

                printf("Selecione o primeiro dado a ser comparado\n");
                switch (opcaodado1)
                {
                case 1:
                opcaodado1 = Populacao > Populacao2 ? 1:0;
                    printf("O primeiro dado escolhido foi [Popualação]\n");
                    break;
                case 2:
                opcaodado1 = Area > Area2 ? 1:0;
                    printf("O primeiro dado escolhido foi [Área]\n");
                    break;
                case 3:
                opcaodado1 = PIB > PIB2 ? 1:0;
                    printf("O primeiro dado escolhido foi [PIB]\n");
                    break;
                case 4:
                opcaodado1 = Numero_de_pontos_turisticos > Numero_de_pontos_turisticos2 ? 1:0;
                    printf("O primeiro dado escolhido foi [Pontos Turisticos]\n");
                    break;
                case 5:
                opcaodado1 = PIBperCapita1 > PIBperCapita2 ? 1:0;
                    printf("O primeiro dado escolhido foi [PIB per Capita]\n");
                    break;
                case 6:
                opcaodado1 = densidade1 < densidade2 ? 1:0;
                    printf("O primeiro dado escolhido foi [Densidade Populacional]\n");
                    break;
                default:
                    printf("Opção Inválida, finalizando código\n");
                    break;
                }

                printf("A seguir, selecione o segundo dado a ser comparado\n");

                printf("Informe qual o dado escolhido da rodada\n");
                printf("[1] Pupulação\n");
                printf("[2] Area\n");
                printf("[3] PIB\n");  
                printf("[4] Pontos Turisticos\n");
                printf("[5] PIB per Capita\n");
                printf("[6] Densidade Populacional \n");
                scanf("%d", &opcaodado2);
                printf("\n");
                if (opcaodado2 != opcaodado1){
                    switch (opcaodado2)
                    {
                    case 1:
                        opcaodado2 = Populacao > Populacao2 ? 1:0;
                            printf("O segundo dado escolhido foi [Popualação]\n");
                            break;
                    case 2:
                        opcaodado2 = Area > Area2 ? 1:0;
                            printf("O segundo dado escolhido foi [Área]\n");
                            break;
                    case 3:
                        opcaodado2 = PIB > PIB2 ? 1:0;
                            printf("O segundo dado escolhido foi [PIB]\n");
                            break;
                    case 4:
                        opcaodado2 = Numero_de_pontos_turisticos > Numero_de_pontos_turisticos2 ? 1:0;
                            printf("O segundo dado escolhido foi [Pontos Turisticos]\n");
                            break;
                    case 5:
                        opcaodado2 = PIBperCapita1 > PIBperCapita2 ? 1:0;
                            printf("O segundo dado escolhido foi [PIB per Capita]\n");
                            break;
                    case 6:
                        opcaodado2 = densidade1 < densidade2 ? 1:0;
                            printf("O segundo dado escolhido foi [Densidade Populacional]\n");
                            break;
                    default:
                            printf("Opção Inválida, finalizando código\n");
                    break;
                    }               
                } else {
                printf("Você digitou o mesmo dado!\n");
                }

                //comparação de ambos os dados inseridos para decidir o vitorioso

            float resultado, somaopcao1, somaopcao2;    
            if (somaopcao1 && somaopcao2){
                printf("Parabéns! O País Vencedor é %s!\n\n", pais);
                } else if (somaopcao1 != somaopcao2){
                    printf("Empatou!\n");
                } else {
                    printf("Parabéns! O País Vencedor é%s!\n\n", pais2);
                }
        
            break;   
            case 2:
                // Código para exibir as regras
                printf("Regras do Jogo:\n");
                printf("Temos algumas regras básicas\n");
                printf("O código da carta deve ser a inicial do pais e mais dois numeros crescentes\n");
                printf("Como por exemplo, Brasil deve ser B01\n");
                printf("E a segunda carta, será China, C02\n");
                printf("A próxima deve ser a inicial e 03, e assim por diante!\n");
                printf("A segunda regra é: Esteja atualizado com os dados do pais de acordo com o IBGE\n");
                printf("Não minta nos dados!\n");
                break;
    
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }   
 return 0;
}