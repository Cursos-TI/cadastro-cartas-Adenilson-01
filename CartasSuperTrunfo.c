#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível aventureiro, o sistema calcula automaticamente a Densidade Populacional e o PIB per Capita.

int main() {
    // --- ÁREA DE DEFINIÇÃO DE VARIÁVEIS ---
    
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[10];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[10];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // --- ÁREA DE ENTRADA DE DADOS ---
    
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
    printf("\nDigite o Estado da Carta 2 (A-H):\n");
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

    // --- ÁREA DE PROCESSAMENTO (CÁLCULOS AUTOMÁTICOS) ---
    
    // Cálculos para a Carta 1
    // Usamos (float) para garantir que a divisão de inteiros não perca as casas decimais
    densidadePopulacional1 = (float)populacao1 / area1;
    // Multiplicamos o PIB por 1.000.000.000 para converter de "bilhões" para o valor real em reais
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;

    // Cálculos para a Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // --- ÁREA DE EXIBIÇÃO DOS DADOS ---
    
    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}