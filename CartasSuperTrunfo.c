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
    fgets (estado, sizeof(estado), stdin); //Para coletar nomes com espaços

    printf ("Nome da cidade: ");
    fgets (nome_cidade, sizeof(nome_cidade), stdin); //Para coletar nomes com espaços

    printf ("População total da cidade: ");
    scanf ("%d", &populacao);

    printf("Qual PIB da cidade: ");
    scanf ("%f", &pib);

    printf ("Quantos pontos turistico a cidade possui: ");
    scanf ( "%d", &turistico);

    printf ("Qual a área total da cidade: ");
    scanf ("%f", &area);

    printf ("Defina o ID da sua carta (Primeira Letra e um núemro)");
    scanf ("%s \n", ID_cidade);

// Imprimir na tela o restultado dos dados coletados acima
    printf ("Super Trunfo - Países \n");

    printf ("Identificação da cidade: %s \n.", ID_cidade);
    printf ("Estado: %s \n", estado);
    printf ("Nome da cidade: %s \n.", nome_cidade);
    printf ("Cidade de %s possui total de %d pessoas.\n", ID_cidade, populacao);
    printf ("Cidade de %s tem sua área de %.2f metos quadrados.\n", ID_cidade, area);
    printf ("Cidade de %s tem %d pontos turísticos.\n", ID_cidade, turistico);
    printf ("Cidade de %s tem seu Produto Interno Bruto - PIB de %.2f.\n", ID_cidade, pib);
    return 0;
}