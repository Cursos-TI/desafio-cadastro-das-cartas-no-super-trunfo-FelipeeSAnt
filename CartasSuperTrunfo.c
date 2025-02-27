#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das duas cartas
    char codigo1[4], codigo2[4]; // Código da carta (ex: A01, B02)
    int populacao1, populacao2;   // População da cidade
    float area1, area2;           // Área da cidade
    float pib1, pib2;             // PIB da cidade
    int pontos_turisticos1, pontos_turisticos2; // Número de pontos turísticos
    float densidade1, densidade2; // Densidade Populacional
    float pib_per_capita1, pib_per_capita2; // PIB per capita

    // Entrada de dados da primeira carta
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da primeira cidade: ");
    scanf("%f", &area1);
    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo dos atributos adicionais para a primeira carta
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Entrada de dados da segunda carta
    printf("\nDigite o código da segunda carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da segunda cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo dos atributos adicionais para a segunda carta
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Exibição dos dados cadastrados
    printf("\n===== CARTA 1 =====\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);

    printf("\n===== CARTA 2 =====\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    return 0; // Indica que o programa terminou com sucesso
}
