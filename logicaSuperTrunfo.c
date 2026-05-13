#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    // dados da carta 1
    char estado1[50];
    char codigo1[50];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;

    // dados da carta 2
    char estado2[50];
    char codigo2[50];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;

    // uso essa variavel pra ler qualquer coisa digitada como texto
    // depois converto pra numero com atoi ou atof
    char entrada[100];

    // variaveis que vou precisar na hora de comparar os dois atributos
    int atributo1;
    int atributo2;
    float valor1_carta1;
    float valor1_carta2;
    float valor2_carta1;
    float valor2_carta2;
    float soma1;
    float soma2;

    printf("=== SUPER TRUNFO - CADASTRO DE CARTAS ===\n");

    // lendo os dados da primeira carta
    printf("\nDados da Carta 1:\n");

    printf("\nEstado: ");
    fflush(stdout);
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = '\0'; // tiro o enter que o fgets deixa no final

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
    populacao1 = atoi(entrada); // converto o texto para numero inteiro

    printf("\nArea (km2): ");
    fflush(stdout);
    fgets(entrada, sizeof(entrada), stdin);
    area1 = atof(entrada); // converto o texto para numero com casas decimais

    printf("\nPIB (bilhoes de reais): ");
    fflush(stdout);
    fgets(entrada, sizeof(entrada), stdin);
    pib1 = atof(entrada);

    printf("\nNumero de pontos turisticos: ");
    fflush(stdout);
    fgets(entrada, sizeof(entrada), stdin);
    pontos1 = atoi(entrada);

    // agora lendo os dados da segunda carta
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

    // calculando a densidade: populacao dividida pela area
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // o PIB esta em bilhoes, entao multiplico por 1 bilhao antes de dividir pela populacao
    pibPerCapita1 = (pib1 * 1e9f) / populacao1;
    pibPerCapita2 = (pib2 * 1e9f) / populacao2;

    // mostrando as cartas na tela
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

    // agora vem a parte da comparacao
    // o jogador 1 escolhe o primeiro atributo e o jogador 2 escolhe o segundo
    printf("\n===== COMPARACAO DE CARTAS =====\n");

    printf("\nEscolha o primeiro atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("\nOpcao: ");
    fflush(stdout);
    fgets(entrada, sizeof(entrada), stdin);
    atributo1 = atoi(entrada);

    // o segundo menu nao mostra o atributo que ja foi escolhido
    printf("\nEscolha o segundo atributo:\n");
    if (atributo1 != 1) printf("1 - Populacao\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos turisticos\n");
    if (atributo1 != 5) printf("5 - Densidade demografica\n");
    printf("\nOpcao: ");
    fflush(stdout);
    fgets(entrada, sizeof(entrada), stdin);
    atributo2 = atoi(entrada);

    // se os dois atributos forem iguais, mostro erro e encerro
    if (atributo1 == atributo2) {
        printf("\nErro: voce escolheu o mesmo atributo duas vezes. Encerrando comparacao.\n");
    } else {

        printf("\n===== COMPARACAO COM DOIS ATRIBUTOS =====\n");
        printf("\nCarta 1 - %s\n", cidade1);
        printf("Carta 2 - %s\n", cidade2);

        // busco o valor do primeiro atributo para cada carta
        valor1_carta1 = 0;
        valor1_carta2 = 0;

        switch (atributo1) {
            case 1:
                printf("\nPrimeiro atributo: Populacao\n");
                printf("%s: %d\n", cidade1, populacao1);
                printf("%s: %d\n", cidade2, populacao2);
                valor1_carta1 = (float)populacao1;
                valor1_carta2 = (float)populacao2;
                break;
            case 2:
                printf("\nPrimeiro atributo: Area\n");
                printf("%s: %.2f\n", cidade1, area1);
                printf("%s: %.2f\n", cidade2, area2);
                valor1_carta1 = area1;
                valor1_carta2 = area2;
                break;
            case 3:
                printf("\nPrimeiro atributo: PIB\n");
                printf("%s: %.2f\n", cidade1, pib1);
                printf("%s: %.2f\n", cidade2, pib2);
                valor1_carta1 = pib1;
                valor1_carta2 = pib2;
                break;
            case 4:
                printf("\nPrimeiro atributo: Pontos turisticos\n");
                printf("%s: %d\n", cidade1, pontos1);
                printf("%s: %d\n", cidade2, pontos2);
                valor1_carta1 = (float)pontos1;
                valor1_carta2 = (float)pontos2;
                break;
            case 5:
                // na densidade, quem tem o menor valor vence individualmente
                printf("\nPrimeiro atributo: Densidade demografica\n");
                printf("%s: %.2f\n", cidade1, densidade1);
                printf("%s: %.2f\n", cidade2, densidade2);
                valor1_carta1 = densidade1;
                valor1_carta2 = densidade2;
                break;
            default:
                printf("\nOpcao invalida!\n");
                break;
        }

        // agora busco o valor do segundo atributo para cada carta
        valor2_carta1 = 0;
        valor2_carta2 = 0;

        switch (atributo2) {
            case 1:
                printf("\nSegundo atributo: Populacao\n");
                printf("%s: %d\n", cidade1, populacao1);
                printf("%s: %d\n", cidade2, populacao2);
                valor2_carta1 = (float)populacao1;
                valor2_carta2 = (float)populacao2;
                break;
            case 2:
                printf("\nSegundo atributo: Area\n");
                printf("%s: %.2f\n", cidade1, area1);
                printf("%s: %.2f\n", cidade2, area2);
                valor2_carta1 = area1;
                valor2_carta2 = area2;
                break;
            case 3:
                printf("\nSegundo atributo: PIB\n");
                printf("%s: %.2f\n", cidade1, pib1);
                printf("%s: %.2f\n", cidade2, pib2);
                valor2_carta1 = pib1;
                valor2_carta2 = pib2;
                break;
            case 4:
                printf("\nSegundo atributo: Pontos turisticos\n");
                printf("%s: %d\n", cidade1, pontos1);
                printf("%s: %d\n", cidade2, pontos2);
                valor2_carta1 = (float)pontos1;
                valor2_carta2 = (float)pontos2;
                break;
            case 5:
                // a densidade entra com o valor normal na soma
                printf("\nSegundo atributo: Densidade demografica\n");
                printf("%s: %.2f\n", cidade1, densidade1);
                printf("%s: %.2f\n", cidade2, densidade2);
                valor2_carta1 = densidade1;
                valor2_carta2 = densidade2;
                break;
            default:
                printf("\nOpcao invalida!\n");
                break;
        }

        // somo os dois atributos de cada carta para ver quem tem o maior total
        soma1 = valor1_carta1 + valor2_carta1;
        soma2 = valor1_carta2 + valor2_carta2;

        printf("\nSoma da carta 1 (%s): %.2f\n", cidade1, soma1);
        printf("Soma da carta 2 (%s): %.2f\n", cidade2, soma2);

        // uso o operador ternario pra mostrar o nome da cidade vencedora
        // funciona assim: se soma1 > soma2 mostra cidade1, senao mostra cidade2
        if (soma1 != soma2) {
            printf("\nResultado: %s venceu!\n", (soma1 > soma2) ? cidade1 : cidade2);
        } else {
            printf("\nResultado: Empate!\n");
        }
    }

    return 0;
}
