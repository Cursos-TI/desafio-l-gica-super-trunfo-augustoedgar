#include <stdio.h>

int main() {

    char codigo1[10], cidade1[50], estado1[50];
    int populacao1, pontos1;
    float area1, pib1, densidade1, pib_per_capita1;

    char codigo2[10], cidade2[50], estado2[50];
    int populacao2, pontos2;
    float area2, pib2, densidade2, pib_per_capita2;

    printf("Digite os dados da Carta 1:\n");
    printf("Codigo: "); scanf("%s", codigo1);
    printf("Cidade: "); scanf(" %[^\n]", cidade1);
    printf("Estado: "); scanf(" %[^\n]", estado1);
    printf("Populacao: "); scanf("%d", &populacao1);
    printf("Area (km2): "); scanf("%f", &area1);
    printf("PIB (milhoes): "); scanf("%f", &pib1);
    printf("Numero de pontos turisticos: "); scanf("%d", &pontos1);

    printf("\nDigite os dados da Carta 2:\n");
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

    if (populacao1 > populacao2) {
        printf("\nCidade 1 tem maior população.\n");
    } else if (populacao1 < populacao2) {
        printf("\nCidade 2 tem maior população.\n");
    } else {
        printf("\nAs duas cidades têm a mesma população.\n");
    }

    printf("Comparacao de cartas (Atributo: Populacao):\n");
    printf("%s: %d\n", cidade1, populacao1);
    printf("%s: %d\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("A cidade vencedora é: %s\n", cidade1);
    } else if (populacao1 < populacao2) {
        printf("A cidade vencedora é: %s\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
