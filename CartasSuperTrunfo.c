#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[10];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[10];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Área para entrada de dados
    
    // Entrada de dados da Carta 1
    printf("Digite o Estado da Carta 1 (A-H):\n");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta 1:\n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade 1:\n");
    scanf("%s", nomeCidade1);

    printf("Digite a Populacao da Cidade 1:\n");
    scanf("%d", &populacao1);

    printf("Digite a Area da Cidade 1 (em km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade 1 (em bilhoes de reais):\n");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos 1:\n");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("Digite o Estado da Carta 2 (A-H):\n");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta 2:\n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade 2:\n");
    scanf("%s", nomeCidade2);

    printf("Digite a Populacao da Cidade 2:\n");
    scanf("%d", &populacao2);

    printf("Digite a Area da Cidade 2 (em km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade 2 (em bilhoes de reais):\n");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos 2:\n");
    scanf("%d", &pontosTuristicos2);

    // Área para exibição dos dados da cidade
    
    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}