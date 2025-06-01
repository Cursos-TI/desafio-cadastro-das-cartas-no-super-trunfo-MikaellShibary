#include <stdio.h>

int main() {
    //declaração dos utilitarios
    int turistico, populacao;
    char estado [40];
    char nome_cidade [30];
    char ID_cidade [40];
    float pib, area;
// Coleta dos dados dos estados para as cartas
    printf ("Desafio Super Trunfo - Países\n");

    printf ("Estado: ");
    fgets (estado, sizeof(estado), stdin);

    printf ("Nome da cidade: ");
    fgets (nome_cidade, sizeof(nome_cidade), stdin);

    printf ("População total da cidade: %d \n");
    scanf (" %d, &populacao");

    printf("Qual PIB da cidade: %.f \n");
    scanf ("%.f, &pib");

    printf ("Quantos pontos turistico a cidade possui: %d \n");
    scanf ( "%d, &turistico");

    printf ("Qual a área total da cidade: %2f Km²\n");
    scanf ("%.f, &area");
// Imprimir na tela o restultado dos dados coletados acima
    printf ("Super Trunfo - Países \n");

    printf ("Identificação da cidade: %s \n.", ID_cidade);
    printf ("Estado: %s \n", estado);
    printf ("Nome da cidade: %s \n.", nome_cidade);
    printf ("Cidade de %s", ID_cidade, "possui total de %d pessoas. \n", populacao);
    printf ("Cidade de %s", ID_cidade ,"tem sua área de %.2f metros quadrados.", area);
    printf ("Cidade de %s", ID_cidade ,"tem %d pontos turístico.\n", turistico);
    printf ("Cidade de %s", ID_cidade ,"tem seu Podruto Interno Bruto - PIB de: %.3f", pib);
    return 0;
}