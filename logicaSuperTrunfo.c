#include <stdio.h>

int main() {

    char codigo1[10], cidade1[50], estado1[50];
    int populacao1, pontos1;
    float area1, pib1, densidade1, pib_per_capita1;

    char codigo2[10], cidade2[50], estado2[50];
    int populacao2, pontos2;
    float area2, pib2, densidade2, pib_per_capita2;

    int opcao;

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
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha o atributo para comparar (1 a 5): ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO DA COMPARACAO ===\n");

    
    switch (opcao) {
        case 1:
            printf("Comparacao de Populacao:\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedora: %s (maior populacao)\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedora: %s (maior populacao)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Comparacao de Area:\n");
            printf("%s: %.2f km2\n", cidade1, area1);
            printf("%s: %.2f km2\n", cidade2, area2);

            if (area1 > area2) {
                printf("Vencedora: %s (maior area)\n", cidade1);
            } else if (area2 > area1) {
                printf("Vencedora: %s (maior area)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Comparacao de PIB:\n");
            printf("%s: %.2f milhoes\n", cidade1, pib1);
            printf("%s: %.2f milhoes\n", cidade2, pib2);

            if (pib1 > pib2) {
                printf("Vencedora: %s (maior PIB)\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Vencedora: %s (maior PIB)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Comparacao de Pontos Turisticos:\n");
            printf("%s: %d pontos\n", cidade1, pontos1);
            printf("%s: %d pontos\n", cidade2, pontos2);

            if (pontos1 > pontos2) {
                printf("Vencedora: %s (mais pontos turisticos)\n", cidade1);
            } else if (pontos2 > pontos1) {
                printf("Vencedora: %s (mais pontos turisticos)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Comparacao de Densidade Demografica:\n");
            printf("%s: %.2f hab/km2\n", cidade1, densidade1);
            printf("%s: %.2f hab/km2\n", cidade2, densidade2);

            // Aqui a regra inverte — menor densidade vence!
            if (densidade1 < densidade2) {
                printf("Vencedora: %s (menor densidade)\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Vencedora: %s (menor densidade)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Escolha um numero entre 1 e 5.\n");
            break;
    }

    return 0;
}
