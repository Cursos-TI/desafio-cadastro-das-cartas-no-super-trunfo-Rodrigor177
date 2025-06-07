#include <stdio.h>

int main() {
    // Carta 1
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;

    // Carta 2
    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;

    // Cadastro da carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Código da carta (ex: A01): ");
    scanf("%3s", codigo1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Código da carta (ex: B02): ");
    scanf("%3s", codigo2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos da carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1;

    // Cálculos da carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2;

    // Exibição dos dados da carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);

    // Exibição dos dados da carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    return 0;
}
