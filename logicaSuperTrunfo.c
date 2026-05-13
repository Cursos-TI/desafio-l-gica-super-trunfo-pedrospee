#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    // variáveis da carta 1
    char estado1[50];
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;

    // variáveis da carta 2
    char estado2[50];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;

    // variável auxiliar para ler números como texto
    char entrada[100];

    printf("=== SUPER TRUNFO - CADASTRO DE CARTAS ===\n");

    // --- carta 1 ---
    printf("\nDados da Carta 1:\n");

    printf("\nEstado: ");
    fflush(stdout);
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = '\0';

    printf("\nCodigo da carta: ");
    fflush(stdout);
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = '\0';

    printf("\nNome da cidade: ");
    fflush(stdout);
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("\nPopulacao: ");
    fflush(stdout);
    fgets(entrada, sizeof(entrada), stdin);
    populacao1 = atoi(entrada);

    printf("\nArea (km2): ");
    fflush(stdout);
    fgets(entrada, sizeof(entrada), stdin);
    area1 = atof(entrada);

    printf("\nPIB (bilhoes de reais): ");
    fflush(stdout);
    fgets(entrada, sizeof(entrada), stdin);
    pib1 = atof(entrada);

    printf("\nNumero de pontos turisticos: ");
    fflush(stdout);
    fgets(entrada, sizeof(entrada), stdin);
    pontos1 = atoi(entrada);

    // --- carta 2 ---
    printf("\nDados da Carta 2:\n");

    printf("\nEstado: ");
    fflush(stdout);
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("\nCodigo da carta: ");
    fflush(stdout);
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';

    printf("\nNome da cidade: ");
    fflush(stdout);
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("\nPopulacao: ");
    fflush(stdout);
    fgets(entrada, sizeof(entrada), stdin);
    populacao2 = atoi(entrada);

    printf("\nArea (km2): ");
    fflush(stdout);
    fgets(entrada, sizeof(entrada), stdin);
    area2 = atof(entrada);

    printf("\nPIB (bilhoes de reais): ");
    fflush(stdout);
    fgets(entrada, sizeof(entrada), stdin);
    pib2 = atof(entrada);

    printf("\nNumero de pontos turisticos: ");
    fflush(stdout);
    fgets(entrada, sizeof(entrada), stdin);
    pontos2 = atoi(entrada);

    // cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // PIB está em bilhões de reais; multiplica por 1e9 para obter reais por habitante
    pibPerCapita1 = (pib1 * 1e9f) / populacao1;
    pibPerCapita2 = (pib2 * 1e9f) / populacao2;

    // exibição das cartas
    printf("\n\n===== CARTAS CADASTRADAS =====\n");

    printf("\nCarta 1:\n");
    printf("  Estado: %s\n", estado1);
    printf("  Codigo: %s\n", codigo1);
    printf("  Cidade: %s\n", cidade1);
    printf("  Populacao: %d habitantes\n", populacao1);
    printf("  Area: %.2f km2\n", area1);
    printf("  PIB: %.2f bilhoes de reais\n", pib1);
    printf("  Pontos turisticos: %d\n", pontos1);
    printf("  Densidade populacional: %.2f hab/km2\n", densidade1);
    printf("  PIB per capita: %.2f reais/hab\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("  Estado: %s\n", estado2);
    printf("  Codigo: %s\n", codigo2);
    printf("  Cidade: %s\n", cidade2);
    printf("  Populacao: %d habitantes\n", populacao2);
    printf("  Area: %.2f km2\n", area2);
    printf("  PIB: %.2f bilhoes de reais\n", pib2);
    printf("  Pontos turisticos: %d\n", pontos2);
    printf("  Densidade populacional: %.2f hab/km2\n", densidade2);
    printf("  PIB per capita: %.2f reais/hab\n", pibPerCapita2);

    // menu para o usuário escolher o atributo de comparação
    int opcao;

    printf("\n===== COMPARACAO DE CARTAS =====\n");
    printf("\nEscolha o atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("\nOpcao: ");
    fflush(stdout);
    fgets(entrada, sizeof(entrada), stdin);
    opcao = atoi(entrada);

    switch (opcao) {

        case 1:
            printf("\nComparacao de cartas (Atributo: Populacao)\n\n");
            printf("Carta 1 - %s: %d\n", cidade1, populacao1);
            printf("Carta 2 - %s: %d\n", cidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("\nResultado: %s venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("\nResultado: %s venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 2:
            printf("\nComparacao de cartas (Atributo: Area)\n\n");
            printf("Carta 1 - %s: %.2f km2\n", cidade1, area1);
            printf("Carta 2 - %s: %.2f km2\n", cidade2, area2);

            if (area1 > area2) {
                printf("\nResultado: %s venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("\nResultado: %s venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 3:
            printf("\nComparacao de cartas (Atributo: PIB)\n\n");
            printf("Carta 1 - %s: %.2f bilhoes\n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f bilhoes\n", cidade2, pib2);

            if (pib1 > pib2) {
                printf("\nResultado: %s venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("\nResultado: %s venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 4:
            printf("\nComparacao de cartas (Atributo: Pontos turisticos)\n\n");
            printf("Carta 1 - %s: %d\n", cidade1, pontos1);
            printf("Carta 2 - %s: %d\n", cidade2, pontos2);

            if (pontos1 > pontos2) {
                printf("\nResultado: %s venceu!\n", cidade1);
            } else if (pontos2 > pontos1) {
                printf("\nResultado: %s venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 5:
            // na densidade, menor valor vence
            printf("\nComparacao de cartas (Atributo: Densidade demografica)\n\n");
            printf("Carta 1 - %s: %.2f hab/km2\n", cidade1, densidade1);
            printf("Carta 2 - %s: %.2f hab/km2\n", cidade2, densidade2);

            if (densidade1 < densidade2) {
                printf("\nResultado: %s venceu!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("\nResultado: %s venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        default:
            printf("\nOpcao invalida! Por favor, escolha um numero entre 1 e 5.\n");
            break;
    }

    return 0;
}
