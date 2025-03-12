#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // VARIÁVEIS:
    // Variáveis pra carta 1
    char estado_1[3], codigo_1[4], nome_da_cidade_1[50];
    int populacao_1, pontos_turisticos_1;
    float area_1, pib_1, densidade_populacional_1, pib_per_capita_1, super_poder_1;

    // Variáveis pra carta 2
    char estado_2[3], codigo_2[4], nome_da_cidade_2[50];
    int populacao_2, pontos_turisticos_2;
    float area_2, pib_2, densidade_populacional_2, pib_per_capita_2, super_poder_2;

    // CADASTROS:
    // Cadastro da carta 1
    printf("CADASTRO DA CARTA 1");

    printf("\nDigite o nome da cidade: ");
    fgets(nome_da_cidade_1, 50, stdin);
    nome_da_cidade_1[strcspn(nome_da_cidade_1, "\n")] = 0;

    printf("\nDigite a sigla do estado (duas letras): ");
    scanf("%s", estado_1);

    printf("\nDigite o código (01, 02...): ");
    scanf("%s", codigo_1);
    
    printf("\nDigite a população da carta: ");
    scanf("%d", &populacao_1);

    printf("\nDigite a área da carta: ");
    scanf("%f", &area_1);

    printf("\nDigite o PIB da carta: ");
    scanf("%f", &pib_1);

    printf("\nDigite a quantidade de pontos turísticos da carta: ");
    scanf("%d", &pontos_turisticos_1);

    // precisa desse getchar pra evitar que o código pule o próximo input
    getchar();

    densidade_populacional_1 = (float)populacao_1 / area_1;
    pib_per_capita_1 = pib_1 / (float)populacao_1;
    super_poder_1 = (float)populacao_1 + area_1 + pib_1 + (float)pontos_turisticos_1 + pib_per_capita_1 - densidade_populacional_1;

    // Cadastro da carta 2
    printf("\nCADASTRO DA CARTA 2");

    printf("\nDigite o nome da cidade: ");
    fgets(nome_da_cidade_2, 50, stdin);
    nome_da_cidade_2[strcspn(nome_da_cidade_2, "\n")] = 0;

    printf("\nDigite a sigla do estado (duas letras): ");
    scanf("%s", estado_2);

    printf("\nDigite o código (01, 02...): ");
    scanf("%s", codigo_2);

    printf("\nDigite a população da carta: ");
    scanf("%d", &populacao_2);

    printf("\nDigite a área da carta: ");
    scanf("%f", &area_2);

    printf("\nDigite o PIB da carta: ");
    scanf("%f", &pib_2);

    printf("\nDigite a quantidade de pontos turísticos da carta: ");
    scanf("%d", &pontos_turisticos_2);

    densidade_populacional_2 = (float)populacao_2 / area_2;
    pib_per_capita_2 = pib_2 / (float)populacao_2;
    super_poder_2 = (float)populacao_2 + area_2 + pib_2 + (float)pontos_turisticos_2 + pib_per_capita_2 - densidade_populacional_2;

    // EXIBIÇÕES:
    // Exibição da carta 1
    printf("\nCARTA 1\n");
    printf("Nome da cidade: %s\n", nome_da_cidade_1);
    printf("Estado: %s\n", estado_1);
    printf("Código %s%s\n", estado_1, codigo_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Pontos turísticos: %d\n", pontos_turisticos_1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional_1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_1);
    printf("Super poder: %.2f\n", super_poder_1);

    // Exibição da carta 2
    printf("\nCARTA 2\n");
    printf("Nome da cidade: %s\n", nome_da_cidade_2);
    printf("Estado: %s\n", estado_2);
    printf("Código %s%s\n", estado_2, codigo_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Pontos turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional_2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_2);
    printf("Super poder: %.2f\n", super_poder_2);

    // COMPARAÇÃO DE CARTAS:
    printf("\nComparação de cartas: (Atributo: População)");
    printf("\nCarta 1 - %s (%s): %d", nome_da_cidade_1, estado_1, populacao_1);
    printf("\nCarta 2 - %s (%s): %d", nome_da_cidade_2, estado_2, populacao_2);

    if (populacao_1 > populacao_2) {
        printf("\nCarta 1 - %s (%s) venceu com %d de população a mais que %s (%s)!", nome_da_cidade_1, estado_1, (populacao_1 - populacao_2), nome_da_cidade_2, estado_2);
    } else {
        printf("\nCarta 2 - %s (%s) venceu com %d de população a mais que %s (%s)!", nome_da_cidade_2, estado_2, (populacao_2 - populacao_1), nome_da_cidade_1, estado_1);
    }
    
    return 0;
}
