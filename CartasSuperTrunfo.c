#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível mestre, o sistema realiza a comparação das cartas usando operadores relacionais sem o uso de if/else.

int main() {
    // --- ÁREA DE DEFINIÇÃO DE VARIÁVEIS ---
    
    // Variáveis para a Carta 1
    char estado1; char codigo1[10]; char nomeCidade1[50];
    int populacao1; float area1; float pib1; int pontosTuristicos1;
    float densidadePopulacional1; float pibPerCapita1;
    float superPoder1;

    // Variáveis para a Carta 2
    char estado2; char codigo2[10]; char nomeCidade2[50];
    int populacao2; float area2; float pib2; int pontosTuristicos2;
    float densidadePopulacional2; float pibPerCapita2;
    float superPoder2;

    // Variáveis para armazenar os resultados das comparações (1 para Carta 1, 0 para Carta 2)
    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoPontosTuristicos;
    int resultadoDensidade;
    int resultadoPibPerCapita;
    int resultadoSuperPoder;

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
    printf("Digite a Area da Cidade 1:\n");
    scanf("%f", &area1);
    printf("Digite o PIB da Cidade 1:\n");
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
    printf("Digite a Area da Cidade 2:\n");
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade 2:\n");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos 2:\n");
    scanf("%d", &pontosTuristicos2);

    // --- ÁREA DE PROCESSAMENTO (CÁLCULOS AUTOMÁTICOS) ---
    
    // Cálculos da Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    // O Super Poder é a soma de todos os atributos da carta
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + densidadePopulacional1 + pibPerCapita1;

    // Cálculos da Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + densidadePopulacional2 + pibPerCapita2;

    // --- COMPARAÇÕES DOS ATRIBUTOS (OPERADORES RELACIONAIS) ---
    
    // Para a maioria, ganha o maior valor (>)
    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;
    resultadoSuperPoder = superPoder1 > superPoder2;

    // Para a Densidade Populacional, ganha o menor valor (<)
    resultadoDensidade = densidadePopulacional1 < densidadePopulacional2;

    // --- ÁREA DE EXIBIÇÃO DOS RESULTADOS ---
    
    printf("\n=== RESULTADO DA COMPARAÇÃO (1 = Carta 1 vence / 0 = Carta 2 vence) ===\n");
    printf("População: %d\n", resultadoPopulacao);
    printf("Área: %d\n", resultadoArea);
    printf("PIB: %d\n", resultadoPib);
    printf("Pontos Turísticos: %d\n", resultadoPontosTuristicos);
    printf("Densidade Populacional: %d\n", resultadoDensidade);
    printf("PIB per Capita: %d\n", resultadoPibPerCapita);
    printf("Super Poder: %d\n", resultadoSuperPoder);

    return 0;
}