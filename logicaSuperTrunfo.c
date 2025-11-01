#include <stdio.h>

int main() {

    char codigo1[10], cidade1[50], estado1[50];
    int populacao1, pontos1;
    float area1, pib1, densidade1;

    char codigo2[10], cidade2[50], estado2[50];
    int populacao2, pontos2;
    float area2, pib2, densidade2;

    int opcao1, opcao2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Codigo: "); scanf("%s", codigo1);
    printf("Cidade: "); scanf(" %[^\n]", cidade1);
    printf("Estado: "); scanf(" %[^\n]", estado1);
    printf("Populacao: "); scanf("%d", &populacao1);
    printf("Area (km2): "); scanf("%f", &area1);
    printf("PIB (milhoes): "); scanf("%f", &pib1);
    printf("Numero de pontos turisticos: "); scanf("%d", &pontos1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Codigo: "); scanf("%s", codigo2);
    printf("Cidade: "); scanf(" %[^\n]", cidade2);
    printf("Estado: "); scanf(" %[^\n]", estado2);
    printf("Populacao: "); scanf("%d", &populacao2);
    printf("Area (km2): "); scanf("%f", &area2);
    printf("PIB (milhoes): "); scanf("%f", &pib2);
    printf("Numero de pontos turisticos: "); scanf("%d", &pontos2);

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha o primeiro atributo (1 a 5): ");
    scanf("%d", &opcao1);

    printf("\nEscolha o segundo atributo (1 a 5 - diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != opcao1) {
            switch (i) {
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turisticos\n"); break;
                case 5: printf("5 - Densidade Demografica\n"); break;
            }
        }
    }
    printf("Sua escolha: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("\nErro: os dois atributos precisam ser diferentes!\n");
        return 0;
    }

    printf("\n=== RESULTADO DA COMPARACAO ===\n");

    float valor1A = 0, valor2A = 0;
    float valor1B = 0, valor2B = 0;

    switch (opcao1) {
        case 1: valor1A = populacao1; valor2A = populacao2; break;
        case 2: valor1A = area1; valor2A = area2; break;
        case 3: valor1A = pib1; valor2A = pib2; break;
        case 4: valor1A = pontos1; valor2A = pontos2; break;
        case 5: valor1A = densidade1; valor2A = densidade2; break;
        default: printf("Atributo 1 invalido!\n"); return 0;
    }

    switch (opcao2) {
        case 1: valor1B = populacao1; valor2B = populacao2; break;
        case 2: valor1B = area1; valor2B = area2; break;
        case 3: valor1B = pib1; valor2B = pib2; break;
        case 4: valor1B = pontos1; valor2B = pontos2; break;
        case 5: valor1B = densidade1; valor2B = densidade2; break;
        default: printf("Atributo 2 invalido!\n"); return 0;
    }

    float pontuacao1 = 0, pontuacao2 = 0;

    pontuacao1 += (opcao1 == 5) ? (valor1A < valor2A ? 1 : 0) : (valor1A > valor2A ? 1 : 0);
    pontuacao2 += (opcao1 == 5) ? (valor2A < valor1A ? 1 : 0) : (valor2A > valor1A ? 1 : 0);

    pontuacao1 += (opcao2 == 5) ? (valor1B < valor2B ? 1 : 0) : (valor1B > valor2B ? 1 : 0);
    pontuacao2 += (opcao2 == 5) ? (valor2B < valor1B ? 1 : 0) : (valor2B > valor1B ? 1 : 0);

    printf("\nComparando %s e %s\n", cidade1, cidade2);
    printf("Atributo 1: %.2f vs %.2f\n", valor1A, valor2A);
    printf("Atributo 2: %.2f vs %.2f\n", valor1B, valor2B);
    printf("\nSoma dos atributos: %.2f (cidade 1) | %.2f (cidade 2)\n", valor1A + valor1B, valor2A + valor2B);

    (pontuacao1 > pontuacao2) ? 
        printf("\nVencedora: %s\n", cidade1) : 
        (pontuacao2 > pontuacao1) ? 
            printf("\nVencedora: %s\n", cidade2) : 
            printf("\nEmpate!\n");

    return 0;
}
