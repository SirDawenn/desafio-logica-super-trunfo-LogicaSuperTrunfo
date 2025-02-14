#include <stdio.h>

int main() {
    int NPT1, populacao1, NPT, populacao, areapKM1, areapKM;
    int  opcao1, opcaoVs1, priopcao, segopcao;
    int resultado1, resultado2;
    char opcao;
char cod1[4], cod2[5];
   float  pib1,  pib;
   char cidade1[21], cidade2[20];
 char estado1[19], estado2[22];

 printf("~***Bem-vinde ao SuperTrunfo 2***~\nEscolha uma opção\n");
 printf("[A] Jogar!\n");
 printf("[B] Regras!\n");
 printf("[C] Sair!\n\n");
 scanf("%c", &opcao);

 switch (opcao)
 {
 case 'A' :
 case 'a' :
 printf("Vamos cadastrar as cartas dos participantes ^-^ \n LEMBRE DE USAR _ COMO ESPAÇO* \n ~Primeiro Jogador~\n");
 printf("Qual o Código da carta? \n");
 scanf("%s", cod1);
 printf("Qual estado você prefere: \n");
 scanf("%s", estado1);
 printf("Qual cidade você prefere: \n");
 scanf("%s", cidade1);
 printf("Quantos pontos turisticos sua cidade tem: \n");
 scanf("%d", &NPT);
 printf("Qual a População da sua cidade: \n");
 scanf("%d", &populacao);
 printf("Qual o tamanho em km² da sua cidade: \n");
 scanf("%d", &areapKM);
 printf("Qual o PIB da sua cidade: \n");
 scanf("%f", &pib);
 //Leitura da densidade populacional e pib per capt da primeira carat
 float densidadePop1 = (float) populacao / (float) areapKM; 
 float PPC1 = (float) populacao / (float) pib;
 //inf da carta cadastrada
 printf("Vamos verificar se você informou tudo certinho?\n");
 printf("Código da Carta: %s\n", cod1);
 printf("Seu Estado é: %s \n", estado1);
 printf("Sua Cidade é: %s \n", cidade1);
 printf("A cidade de %s tem %d pontos turisticos\n", cidade1, NPT);
 printf("O tamanho de %s é: %dkm²\n", cidade1, areapKM);
 printf("Sua população é: %d habitantes\n", populacao);
 printf("E o seu PIB é: %.2f \n", pib);
 printf("A densidade populacional de %s é %.2f\n", cidade1, densidadePop1);
 printf("E o PIB per Capita é: %.2f \n \n", PPC1);
 // Final do cadastro da primeira carta e começo da segunda
 
 printf("~Agora é a vez do segundo jogador~\n\n"); 
 printf("Qual o Código da carta? \n");
  scanf("%s", cod2);
 printf("Qual estado você prefere: \n");
 scanf("%s", estado2);
 printf("Qual cidade você prefere: \n");
 scanf("%s", cidade2);
 printf("Quantos pontos turisticos sua cidade tem: \n");
 scanf("%d", &NPT1);
 printf("Qual a População da sua cidade: \n");
 scanf("%d", &populacao1);
 printf("Qual o tamanho em km² da sua cidade: \n");
 scanf("%d", &areapKM1);
 printf("Qual o PIB da sua cidade: \n");
 scanf("%f", &pib1);
 //Leitura da densidade populacional e pib per capt da segunda carat
 float PPC2 = (float) populacao1 / (float) pib1;
 float densidadePop2 = (float) populacao1 / (float) areapKM1; 
 //inf da carta cadastrada
 printf("Vamos verificar se você informou tudo certinnho?\n");
 printf("Código da Carta: %s\n", cod2);
 printf("Seu Estado é: %s \n", estado2);
 printf("Sua Cidade é: %s \n", cidade2);
 printf("A cidade de %s tem %d pontos turisticos\n", cidade2, NPT1);
 printf("O tamanho de %s é: %dkm²\n", cidade2, areapKM1);
 printf("Sua população é: %d habitantes\n", populacao1);
 printf("E o seu PIB é: %.2f \n", pib1);
 printf("A densidade populacional de %s é %.2f por km²\n", cidade2, densidadePop2);
 printf("E o PIB per Capita é: %.2f \n \n", PPC2);
 // final do cadastro do segundo jogador

 // Calculo da força das cartas

 int super_poder1 = (float)(NPT + areapKM + populacao + pib + PPC1 + densidadePop1) / 6;
int super_poder2 = (float)(NPT1 + areapKM1 + populacao1 + pib1 + PPC2 + densidadePop2) / 6;

// começo do estilo de jogo
printf("Vamos para o Duelo!\n");
printf("Escolha um modo de jogo:\n");
printf("[1] Vs. Geral\n");
printf("[2] Escolha 1 atributo!\n");
printf("[3] Escolha 2 atributos!\n");
scanf("%d", &opcao1);

switch (opcao1)
{
case 1:
    printf("Vocês escolheram o Vs. Geral!");
    printf("Vamos para o Duelo!\n");

printf("Quem tem a maior cidade? \n");
    if (areapKM > areapKM1) {
        printf("A cidade de %s é gigante!\n\n", cidade1);
    } else if (areapKM < areapKM1) { 
        printf("A cidade de %s é a maior!\n\n", cidade2);
    } else if (areapKM = areapKM1) {
        printf("Nossa, tem o mesmo tamanho é um EMPATE!!! \n\n");
    }
printf("Qual cidade tem mais pontos turisticos? \n");
    if (NPT > NPT1) {
        printf("A cidade de %s tem mais!\n\n", cidade1);
    } else if (NPT < NPT1) { 
        printf("A cidade de %s tem mais!\n\n", cidade2);
    } else if (NPT = NPT1) {
        printf("Nossa, tem a mesma quantidade é um EMPATE!!! \n\n");
    }
printf("Qual cidade tem a maior população? \n");
    if (populacao > populacao1) {
        printf("A cidade de %s tem mais habitantes!\n\n", cidade1);
    } else if (populacao < populacao1) { 
        printf("A cidade de %s tem muita gente!\n\n", cidade2);
    } else if (populacao = populacao1) {
        printf("Inacreditavel, é um EMPATE!!!  \n\n");
    }
printf("Qual cidade tem o melhor PIB? \n");
    if (pib > pib1) {
        printf("A cidade de %s tem um ótimo PIB. \n\n", cidade1);
    } else if (pib < pib1) { 
        printf("A cidade de %s tem uma ótima atividade econômica.\n\n", cidade2);
    } else if (pib = pib1) {
        printf("As duas cidades tem a mesma atividade econômica! \n\n");
    }    
printf("Qual cidade tem a melhor distribuição populacional? \n");
    if (densidadePop1 < densidadePop2) {
        printf("A cidade de %s \n\n", cidade1);
    } else if (densidadePop1 > densidadePop2) { 
        printf("A cidade de %s \n\n", cidade2);
    } else if (densidadePop1 = densidadePop2) {
        printf("As duas cidades tem a mesma densidade populacional! \n\n");
    }   
printf("Qual cidade tem o melhor rendimento per capita?\n");
    if (PPC1 > PPC2) {
        printf("A cidade de %s tem a melhor renda per capita \n\n", cidade1);
    } else if (PPC1 < PPC2) { 
        printf("A cidade de %s tem o melhor indice per capita\n\n", cidade2);
    } else if (PPC1 = PPC2) {
        printf("Ambas são ótimas cidades para viver! \n\n");
    } 
printf("Qual a melhor cidade para viver?\n");
    if (super_poder1 > super_poder2) {
        printf("A cidade de %s é a melhor opção! \n\n", cidade1);
    } else if (super_poder1 < super_poder2) { 
        printf("A cidade de %s é bem melhor!\n\n", cidade2);
    } else if (super_poder1 = super_poder2) {
        printf("Ambas são ótimas cidades para viver! \n\n");
    } 
printf("Obrigada por jogar! \nTe espero na próxima batalha!\n");
    break;
    case 2:
    printf("Vocês escolheram o Vs. 1 atributo!\n");
    printf("Escolha um dos atributos:\n");
    printf("[1] Tamanho Vs.\n");
    printf("[2] População Vs.\n");
    printf("[3] Número de Pontos Turisticos Vs.\n");
    printf("[4] PIB Vs.\n");
    printf("[5] Densidade Populacional Vs.\n");
    printf("[6] PIB per Capta Vs.\n");
    printf("[7] Super Poder Vs.\n");
    scanf("%d", &opcaoVs1);
   switch (opcaoVs1)
   {
    case 1:
    printf("Quem tem a maior cidade? \n");
    if (areapKM > areapKM1) {
        printf("A cidade de %s é gigante!\n\n", cidade1);
    } else if (areapKM < areapKM1) { 
        printf("A cidade de %s é a maior!\n\n", cidade2);
        
    } else if (areapKM = areapKM1) {
        printf("Nossa, tem o mesmo tamanho é um EMPATE!!! \n\n");
    }
        break;
        case 2:
        printf("Qual cidade tem a maior população? \n");
    if (populacao > populacao1) {
        printf("A cidade de %s tem mais habitantes!\n\n", cidade1);
       
    } else if (populacao < populacao1) { 
        printf("A cidade de %s tem muita gente!\n\n", cidade2);
        
    } else if (populacao = populacao1) {
        printf("Inacreditavel, é um EMPATE!!!  \n\n");
    }
        break;
        case 3:
        printf("Qual cidade tem mais pontos turisticos? \n");
    if (NPT > NPT1) {
        printf("A cidade de %s tem mais!\n\n", cidade1);
        
    } else if (NPT < NPT1) { 
        printf("A cidade de %s tem mais!\n\n", cidade2);
       
    } else if (NPT = NPT1) {
        printf("Nossa, tem a mesma quantidade é um EMPATE!!! \n\n");
    }
        break;
        case 4:
        printf("Qual cidade tem o melhor PIB? \n");
    if (pib > pib1) {
        printf("A cidade de %s tem um ótimo PIB. \n\n", cidade1);
       
    } else if (pib < pib1) { 
        printf("A cidade de %s tem uma ótima atividade econômica.\n\n", cidade2);
        
    } else if (pib = pib1) {
        printf("As duas cidades tem a mesma atividade econômica! \n\n");
    } 
        break;
        case 5:
        printf("Qual cidade tem a melhor distribuição populacional? \n");
    if (densidadePop1 < densidadePop2) {
        printf("A cidade de %s \n\n",&cidade1);
        
    } else if (densidadePop1 > densidadePop2) { 
        printf("A cidade de %s \n\n", &cidade2);
       
    } else if (densidadePop1 = densidadePop2) {
        printf("As duas cidades tem a mesma densidade populacional! \n\n");
    }
        break;
        case 6:
        printf("Qual cidade tem o melhor rendimento per capita?\n");
    if (PPC1 > PPC2) {
        printf("A cidade de %s tem a melhor renda per capita \n\n", cidade1);
        
    } else if (PPC1 < PPC2) { 
        printf("A cidade de %s tem o melhor indice per capita\n\n", cidade2);
       
    } else if (PPC1 = PPC2) {
        printf("Ambas são ótimas cidades para viver! \n\n");
    } 
        break;
        case 7:
        printf("Qual a melhor cidade para viver?\n");
        if (super_poder1 > super_poder2) {
            printf("A cidade de %s é a melhor opção! \n\n", cidade1);
           
        } else if (super_poder1 < super_poder2) { 
            printf("A cidade de %s é bem melhor!\n\n", cidade2);
           
        } else if (super_poder1 = super_poder2) {
            printf("Ambas são ótimas cidades para viver! \n\n");
        } 
        break;
   }
}
printf("Obrigada por jogar!\n\n");
    break;
    case 3 :
    printf("Vocês escolheram o Vs. 2 atributos!\n");
    printf("Escolha o primeiro dos atributos:\n");
    printf("[1] Tamanho Vs.\n");
    printf("[2] População Vs.\n");
    printf("[3] Número de Pontos Turisticos Vs.\n");
    printf("[4] PIB Vs.\n");
    printf("[5] Densidade Populacional Vs.\n");
    printf("[6] PIB per Capta Vs.\n");
    printf("[7] Super Poder Vs.\n");
    scanf("%d", &priopcao);
    printf("Escolha o segundo dos atributos:\n");
    scanf("%d", &segopcao);
   // primeira opção rodando
    switch (priopcao)
    {
    case 1:
    printf("Quem tem a maior cidade? \n");
    if (areapKM > areapKM1) {
        printf("A cidade de %s é gigante!\n\n", cidade1);
        resultado1 = cidade1;
    } else if (areapKM < areapKM1) { 
        printf("A cidade de %s é a maior!\n\n", cidade2);
        resultado1 = cidade2;
    } else if (areapKM = areapKM1) {
        printf("Nossa, tem o mesmo tamanho é um EMPATE!!! \n\n");
    }
        break;
        case 2:
        printf("Qual cidade tem a maior população? \n");
    if (populacao > populacao1) {
        printf("A cidade de %s tem mais habitantes!\n\n", cidade1);
        resultado1 = cidade1;
    } else if (populacao < populacao1) { 
        printf("A cidade de %s tem muita gente!\n\n", cidade2);
        resultado1 = cidade2;
    } else if (populacao = populacao1) {
        printf("Inacreditavel, é um EMPATE!!!  \n\n");
    }
        break;
        case 3:
        printf("Qual cidade tem mais pontos turisticos? \n");
    if (NPT > NPT1) {
        printf("A cidade de %s tem mais!\n\n", cidade1);
        resultado1 = cidade1;
    } else if (NPT < NPT1) { 
        printf("A cidade de %s tem mais!\n\n", cidade2);
        resultado1 = cidade2;
    } else if (NPT = NPT1) {
        printf("Nossa, tem a mesma quantidade é um EMPATE!!! \n\n");
    }
        break;
        case 4:
        printf("Qual cidade tem o melhor PIB? \n");
    if (pib > pib1) {
        printf("A cidade de %s tem um ótimo PIB. \n\n", cidade1);
        resultado1 = cidade1;
    } else if (pib < pib1) { 
        printf("A cidade de %s tem uma ótima atividade econômica.\n\n", cidade2);
        resultado1 = cidade2;
    } else if (pib = pib1) {
        printf("As duas cidades tem a mesma atividade econômica! \n\n");
    } 
        break;
        case 5:
        printf("Qual cidade tem a melhor distribuição populacional? \n");
    if (densidadePop1 < densidadePop2) {
        printf("A cidade de %s \n\n",&cidade1);
        resultado1 = cidade1;
    } else if (densidadePop1 > densidadePop2) { 
        printf("A cidade de %s \n\n", &cidade2);
        resultado1 = cidade2;
    } else if (densidadePop1 = densidadePop2) {
        printf("As duas cidades tem a mesma densidade populacional! \n\n");
    }
        break;
        case 6:
        printf("Qual cidade tem o melhor rendimento per capita?\n");
    if (PPC1 > PPC2) {
        printf("A cidade de %s tem a melhor renda per capita \n\n", cidade1);
        resultado1 = cidade1;
    } else if (PPC1 < PPC2) { 
        printf("A cidade de %s tem o melhor indice per capita\n\n", cidade2);
        resultado1 = cidade2;
    } else if (PPC1 = PPC2) {
        printf("Ambas são ótimas cidades para viver! \n\n");
    } 
        break;
        case 7:
        printf("Qual a melhor cidade para viver?\n");
        if (super_poder1 > super_poder2) {
            printf("A cidade de %s é a melhor opção! \n\n", cidade1);
            resultado1 = cidade1;
        } else if (super_poder1 < super_poder2) { 
            printf("A cidade de %s é bem melhor!\n\n", cidade2);
            resultado1 = cidade2;
        } else if (super_poder1 = super_poder2) {
            printf("Ambas são ótimas cidades para viver! \n\n");
        } 
        break;
    
    }
        // segunda opção rodando
        switch (segopcao)
        {
            case 1:
            printf("Quem tem a maior cidade? \n");
            if (areapKM > areapKM1) {
                printf("A cidade de %s é gigante!\n\n", cidade1);
                resultado2 = cidade1;
            } else if (areapKM < areapKM1) { 
                printf("A cidade de %s é a maior!\n\n", cidade2);
                resultado2 = cidade2;
            } else if (areapKM = areapKM1) {
                printf("Nossa, tem o mesmo tamanho é um EMPATE!!! \n\n");
            }
                break;
                case 2:
                printf("Qual cidade tem a maior população? \n");
            if (populacao > populacao1) {
                printf("A cidade de %s tem mais habitantes!\n\n", cidade1);
                resultado2 = cidade1;
            } else if (populacao < populacao1) { 
                printf("A cidade de %s tem muita gente!\n\n", cidade2);
                resultado2 = cidade2;
            } else if (populacao = populacao1) {
                printf("Inacreditavel, é um EMPATE!!!  \n\n");
            }
                break;
                case 3:
                printf("Qual cidade tem mais pontos turisticos? \n");
            if (NPT > NPT1) {
                printf("A cidade de %s tem mais!\n\n", cidade1);
                resultado2 = cidade1;
            } else if (NPT < NPT1) { 
                printf("A cidade de %s tem mais!\n\n", cidade2);
                resultado2 = cidade2;
            } else if (NPT = NPT1) {
                printf("Nossa, tem a mesma quantidade é um EMPATE!!! \n\n");
            }
                break;
                case 4:
                printf("Qual cidade tem o melhor PIB? \n");
            if (pib > pib1) {
                printf("A cidade de %s tem um ótimo PIB. \n\n", cidade1);
                resultado2 = cidade1;
            } else if (pib < pib1) { 
                printf("A cidade de %s tem uma ótima atividade econômica.\n\n", cidade2);
                resultado2 = cidade2;
            } else if (pib = pib1) {
                printf("As duas cidades tem a mesma atividade econômica! \n\n");
            } 
                break;
                case 5:
                printf("Qual cidade tem a melhor distribuição populacional? \n");
            if (densidadePop1 < densidadePop2) {
                printf("A cidade de %s \n\n", cidade1);
                resultado2 = cidade1;
            } else if (densidadePop1 > densidadePop2) { 
                printf("A cidade de %s \n\n", cidade2);
                resultado2 = cidade2;
            } else if (densidadePop1 = densidadePop2) {
                printf("As duas cidades tem a mesma densidade populacional! \n\n");
            }
                break;
                case 6:
                printf("Qual cidade tem o melhor rendimento per capita?\n");
            if (PPC1 > PPC2) {
                printf("A cidade de %s tem a melhor renda per capita \n\n", cidade1);
                resultado2 = cidade1;
            } else if (PPC1 < PPC2) { 
                printf("A cidade de %s tem o melhor indice per capita\n\n", cidade2);
                resultado2 = cidade2;
            } else if (PPC1 = PPC2) {
                printf("Ambas são ótimas cidades para viver! \n\n");
            } 
                break;
                case 7:
                printf("Qual a melhor cidade para viver?\n");
                if (super_poder1 > super_poder2) {
                    printf("A cidade de %s é a melhor opção! \n\n", cidade1);
                    resultado2 = cidade1;
                } else if (super_poder1 < super_poder2) { 
                    printf("A cidade de %s é bem melhor!\n\n", cidade2);
                    resultado2 = cidade2;
                } else if (super_poder1 = super_poder2) {
                    printf("Ambas são ótimas cidades para viver! \n\n");
                } 
                break;
    
        }
       if (resultado1 == cidade1 && resultado2 == cidade1) {printf("A cidade de %c é a Melhor!");}
       else if (resultado1 == cidade2 && resultado2 == cidade2){printf("A cidade de %c é a vencedora!", cidade2);}
       else {printf("É um EMPATE!!!");}
       printf("Obrigade por jogar!");
    break;

    break;
    
     case 'b' :
     case 'B' :
    printf("Vamos para às regras!\nDigite todas as informações pedidas no terminal, assim cadastrando sua cidade.\nTenha em mãos:\nCódigo da carta,\nO nome do estado,\nNome da cidade,\nQuantos habitantes possuí,\nSeu km²,\nSeu PIB,\ne quantos pontos turisticos tem.\n ");
        printf("Com base nos dados cadastrados dos dois jogadores você pode\nescolher combater todos os atriubutos ou um ou dois em expecifico.\n\nUm ótimo jogo!\n\n");
    break;
    case 'c' :
    case 'C' :
    printf("Tchau, tchau...\n");
    break;
        }
    return 0;
        }
