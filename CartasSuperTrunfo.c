#include <stdio.h>
#include <stdlib.h>

int main() {
    int turistico, populacao, turistico2, populacao2;
    char estado[40], estado2[40];
    char nome_cidade[30], nome_cidade2[30];
    char ID_cidade[40], ID_cidade2[40];
    float pib, area, densidade, PIB, pib2, area2, densidade2, PIB2;

    // Coleta dos dados da carta 01
    printf("Desafio Super Trunfo - Países CARTA 01\n");

    printf("Estado: ");
    fgets(estado, sizeof(estado), stdin);

    printf("Nome da cidade: ");
    fgets(nome_cidade, sizeof(nome_cidade), stdin);

    printf("População total da cidade (SEM PONTUAÇÃO): ");
    scanf("%i", &populacao);

    printf("Qual o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos a cidade possui(SEM PONTUAÇÃO): ");
    scanf("%d", &turistico);

    printf("Qual a área total da cidade: ");
    scanf("%f", &area);

    printf("Defina o ID da sua carta (Primeira letra e um número): ");
    scanf("%s", &ID_cidade);

    densidade = populacao / area;
    PIB = pib / populacao;

    // Coleta dos dados da carta 02
    printf("Desafio Super Trunfo - Países CARTA 02\n");

    printf("Estado: ");
    fgets(estado2, sizeof(estado2), stdin);

    printf("Nome da cidade: ");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);

    printf("População total da cidade (SEM PONTUAÇÃO): ");
    scanf("%i", &populacao2);

    printf("Qual o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos a cidade possui(SEM PONTUAÇÃO): ");
    scanf("%d", &turistico2);

    printf("Qual a área total da cidade: ");
    scanf("%f", &area2);

    printf("Defina o ID da sua carta (Primeira letra e um número): ");
    scanf("%s", &ID_cidade2);

    densidade2 = populacao2 / area2;
    PIB2 = pib2 / populacao2;

    // Impressão dos dados coletados
    printf("\n--- Super Trunfo - Países ---\n");
    printf("\n");
    printf("CARTA 01");
    printf("\n");
    printf("ID da cidade: %s\n", ID_cidade);
    printf("Estado: %s", estado);
    printf("Nome da cidade: %s", nome_cidade);
    printf("Cidade de %s Possui total de %d pessoas.\n", nome_cidade, populacao);
    printf("Cidade de %s Tem sua área de %.2f km².\n", nome_cidade, area);
    printf("Cidade de %s Tem %d pontos turísticos.\n", nome_cidade, turistico);
    printf("Cidade de %s Tem seu Produto Interno Bruto (PIB) de R$:%.0f bilhões de reais.\n", nome_cidade, pib);
    printf("Densidade populacional da de %s É de %.2f hab/km².\n", nome_cidade, densidade);
    printf("PIB per Capita da cidade de %s É de R$:%.2f reais.\n", nome_cidade, PIB);
    printf("\n");
    printf("\n");
    printf("CARTA 02\n");
    printf("\n");
    printf("ID da cidade: %s\n", ID_cidade2);
    printf("Estado: %s", estado2);
    printf("Nome da cidade: %s", nome_cidade2);
    printf("Cidade de %s Possui total de %d pessoas.\n", nome_cidade2, populacao2);
    printf("Cidade de %s Tem sua área de %.2f km².\n", nome_cidade2, area2);
    printf("Cidade de %s Tem %d pontos turísticos.\n", nome_cidade2, turistico2);
    printf("Cidade de %s Tem seu Produto Interno Bruto (PIB) de R$:%.0f bilhões de reais.\n", nome_cidade2, pib2);
    printf("Densidade populacional da de %s É de %.2f hab/km².\n", nome_cidade2, densidade2);
    printf("PIB per Capita da cidade de %s É de R$:%.2f reais.\n", nome_cidade2, PIB2);
    return 0;
}