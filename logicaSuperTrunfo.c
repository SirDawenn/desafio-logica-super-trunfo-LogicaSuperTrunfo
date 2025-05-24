#include <stdio.h>

// Estrutura da carta
struct Carta {
    char estado[3];
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

// Funcoes
void limpar_buffer();
struct Carta cadastrar_carta(int numero);
void mostrar_carta(struct Carta carta);
float calcular_densidade(struct Carta carta);

// Nivel Novato
void nivel_novato();
void comparar_novato(struct Carta c1, struct Carta c2);

// Nivel Aventureiro  
void nivel_aventureiro();
int menu_atributos();
void comparar_atributo(struct Carta c1, struct Carta c2, int opcao);

// Nivel Mestre
void nivel_mestre();
void comparar_dois(struct Carta c1, struct Carta c2, int attr1, int attr2);

int main() {
    int opcao;
    
    do {
        printf("\n=== SUPER TRUNFO - PAISES ===\n");
        printf("1 - Nivel Novato\n");
        printf("2 - Nivel Aventureiro\n");
        printf("3 - Nivel Mestre\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        limpar_buffer();
        
        switch(opcao) {
            case 1:
                nivel_novato();
                break;
            case 2:
                nivel_aventureiro();
                break;
            case 3:
                nivel_mestre();
                break;
            case 0:
                printf("Obrigado por jogar!\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao != 0);
    
    return 0;
}

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

struct Carta cadastrar_carta(int numero) {
    struct Carta carta;
    
    printf("\n--- CARTA %d ---\n", numero);
    printf("Estado: ");
    scanf("%s", carta.estado);
    printf("Codigo: ");
    scanf("%s", carta.codigo);
    printf("Nome da cidade: ");
    scanf("%s", carta.nome);
    printf("Populacao: ");
    scanf("%d", &carta.populacao);
    printf("Area: ");
    scanf("%f", &carta.area);
    printf("PIB: ");
    scanf("%f", &carta.pib);
    printf("Pontos turisticos: ");
    scanf("%d", &carta.pontos_turisticos);
    
    return carta;
}

void mostrar_carta(struct Carta carta) {
    printf("\n--- CARTA %s ---\n", carta.codigo);
    printf("Estado: %s\n", carta.estado);
    printf("Cidade: %s\n", carta.nome);
    printf("Populacao: %d\n", carta.populacao);
    printf("Area: %.2f km2\n", carta.area);
    printf("PIB: %.2f bilhoes\n", carta.pib);
    printf("Pontos turisticos: %d\n", carta.pontos_turisticos);
    printf("Densidade: %.2f hab/km2\n", calcular_densidade(carta));
}

float calcular_densidade(struct Carta carta) {
    if(carta.area > 0) {
        return (float)carta.populacao / carta.area;
    }
    return 0;
}

// NIVEL NOVATO
void nivel_novato() {
    printf("\n=== NIVEL NOVATO ===\n");
    printf("Comparacao por populacao\n");
    
    struct Carta carta1 = cadastrar_carta(1);
    struct Carta carta2 = cadastrar_carta(2);
    
    mostrar_carta(carta1);
    mostrar_carta(carta2);
    
    comparar_novato(carta1, carta2);
    
    printf("\nPressione ENTER...");
    getchar();
}

void comparar_novato(struct Carta c1, struct Carta c2) {
    printf("\n--- RESULTADO ---\n");
    
    if(c1.populacao > c2.populacao) {
        printf("Vencedora: %s\n", c1.nome);
        printf("Populacao: %d\n", c1.populacao);
    } else if(c2.populacao > c1.populacao) {
        printf("Vencedora: %s\n", c2.nome);
        printf("Populacao: %d\n", c2.populacao);
    } else {
        printf("Empate!\n");
        printf("Populacao: %d\n", c1.populacao);
    }
}

// NIVEL AVENTUREIRO
void nivel_aventureiro() {
    printf("\n=== NIVEL AVENTUREIRO ===\n");
    
    struct Carta carta1 = cadastrar_carta(1);
    struct Carta carta2 = cadastrar_carta(2);
    
    mostrar_carta(carta1);
    mostrar_carta(carta2);
    
    int opcao = menu_atributos();
    comparar_atributo(carta1, carta2, opcao);
    
    printf("\nPressione ENTER...");
    getchar();
}

int menu_atributos() {
    int opcao;
    
    printf("\n--- ESCOLHA O ATRIBUTO ---\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade (menor vence)\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    limpar_buffer();
    
    return opcao;
}

void comparar_atributo(struct Carta c1, struct Carta c2, int opcao) {
    printf("\n--- RESULTADO ---\n");
    
    switch(opcao) {
        case 1:
            printf("Comparando: Populacao\n");
            if(c1.populacao > c2.populacao) {
                printf("Vencedora: %s - %d\n", c1.nome, c1.populacao);
            } else if(c2.populacao > c1.populacao) {
                printf("Vencedora: %s - %d\n", c2.nome, c2.populacao);
            } else {
                printf("Empate: %d\n", c1.populacao);
            }
            break;
            
        case 2:
            printf("Comparando: Area\n");
            if(c1.area > c2.area) {
                printf("Vencedora: %s - %.2f\n", c1.nome, c1.area);
            } else if(c2.area > c1.area) {
                printf("Vencedora: %s - %.2f\n", c2.nome, c2.area);
            } else {
                printf("Empate: %.2f\n", c1.area);
            }
            break;
            
        case 3:
            printf("Comparando: PIB\n");
            if(c1.pib > c2.pib) {
                printf("Vencedora: %s - %.2f\n", c1.nome, c1.pib);
            } else if(c2.pib > c1.pib) {
                printf("Vencedora: %s - %.2f\n", c2.nome, c2.pib);
            } else {
                printf("Empate: %.2f\n", c1.pib);
            }
            break;
            
        case 4:
            printf("Comparando: Pontos turisticos\n");
            if(c1.pontos_turisticos > c2.pontos_turisticos) {
                printf("Vencedora: %s - %d\n", c1.nome, c1.pontos_turisticos);
            } else if(c2.pontos_turisticos > c1.pontos_turisticos) {
                printf("Vencedora: %s - %d\n", c2.nome, c2.pontos_turisticos);
            } else {
                printf("Empate: %d\n", c1.pontos_turisticos);
            }
            break;
            
        case 5:
            printf("Comparando: Densidade (menor vence)\n");
            float dens1 = calcular_densidade(c1);
            float dens2 = calcular_densidade(c2);
            if(dens1 < dens2) {
                printf("Vencedora: %s - %.2f\n", c1.nome, dens1);
            } else if(dens2 < dens1) {
                printf("Vencedora: %s - %.2f\n", c2.nome, dens2);
            } else {
                printf("Empate: %.2f\n", dens1);
            }
            break;
            
        default:
            printf("Opcao invalida!\n");
    }
}

// NIVEL MESTRE
void nivel_mestre() {
    printf("\n=== NIVEL MESTRE ===\n");
    printf("Comparacao com dois atributos\n");
    
    struct Carta carta1 = cadastrar_carta(1);
    struct Carta carta2 = cadastrar_carta(2);
    
    mostrar_carta(carta1);
    mostrar_carta(carta2);
    
    printf("\nPrimeiro atributo:\n");
    int attr1 = menu_atributos();
    
    printf("\nSegundo atributo:\n");
    int attr2 = menu_atributos();
    
    comparar_dois(carta1, carta2, attr1, attr2);
    
    printf("\nPressione ENTER...");
    getchar();
}

void comparar_dois(struct Carta c1, struct Carta c2, int attr1, int attr2) {
    int venc1 = 0, venc2 = 0; // 0=empate, 1=carta1, 2=carta2
    
    // Primeiro atributo
    venc1 = (attr1 == 1) ? (c1.populacao > c2.populacao ? 1 : (c1.populacao < c2.populacao ? 2 : 0)) :
            (attr1 == 2) ? (c1.area > c2.area ? 1 : (c1.area < c2.area ? 2 : 0)) :
            (attr1 == 3) ? (c1.pib > c2.pib ? 1 : (c1.pib < c2.pib ? 2 : 0)) :
            (attr1 == 4) ? (c1.pontos_turisticos > c2.pontos_turisticos ? 1 : (c1.pontos_turisticos < c2.pontos_turisticos ? 2 : 0)) :
            (attr1 == 5) ? (calcular_densidade(c1) < calcular_densidade(c2) ? 1 : (calcular_densidade(c1) > calcular_densidade(c2) ? 2 : 0)) : 0;
    
    // Segundo atributo  
    venc2 = (attr2 == 1) ? (c1.populacao > c2.populacao ? 1 : (c1.populacao < c2.populacao ? 2 : 0)) :
            (attr2 == 2) ? (c1.area > c2.area ? 1 : (c1.area < c2.area ? 2 : 0)) :
            (attr2 == 3) ? (c1.pib > c2.pib ? 1 : (c1.pib < c2.pib ? 2 : 0)) :
            (attr2 == 4) ? (c1.pontos_turisticos > c2.pontos_turisticos ? 1 : (c1.pontos_turisticos < c2.pontos_turisticos ? 2 : 0)) :
            (attr2 == 5) ? (calcular_densidade(c1) < calcular_densidade(c2) ? 1 : (calcular_densidade(c1) > calcular_densidade(c2) ? 2 : 0)) : 0;
    
    printf("\n--- RESULTADO ---\n");
    
    // Resultado primeiro atributo
    printf("Atributo 1: ");
    printf("%s\n", (venc1 == 1) ? "Carta 1 vence" : (venc1 == 2) ? "Carta 2 vence" : "Empate");
    
    // Resultado segundo atributo
    printf("Atributo 2: ");
    printf("%s\n", (venc2 == 1) ? "Carta 1 vence" : (venc2 == 2) ? "Carta 2 vence" : "Empate");
    
    // Resultado final
    int pontos1 = (venc1 == 1 ? 1 : 0) + (venc2 == 1 ? 1 : 0);
    int pontos2 = (venc1 == 2 ? 1 : 0) + (venc2 == 2 ? 1 : 0);
    
    printf("\n--- RESULTADO FINAL ---\n");
    if(pontos1 > pontos2) {
        printf("VENCEDORA GERAL: %s\n", c1.nome);
        printf("Placar: %d x %d\n", pontos1, pontos2);
    } else if(pontos2 > pontos1) {
        printf("VENCEDORA GERAL: %s\n", c2.nome);
        printf("Placar: %d x %d\n", pontos2, pontos1);
    } else {
        printf("EMPATE GERAL!\n");
        printf("Placar: %d x %d\n", pontos1, pontos2);
    }
}
