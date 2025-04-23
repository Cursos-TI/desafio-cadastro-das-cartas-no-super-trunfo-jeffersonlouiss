#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // variaveis para duas cartas
    char estado_0, estado_1;
    char *cod_0[10], cod_1[10];
    char cidade_0[50], cidade_1[50];
    int populacao_0, populacao_1;
    float area_0, area_1;
    float pib_0, pib_1;
    int nPontosTuris_0, nPontosTuris_1;
    float densidadePopulacional_0, densidadePopulacional_1;
    float pibPerCapita_0, pibPerCapita_1;

    // Cadastro das Cartas 01: entrada pelo usuario
    printf("---CADASTRO DA CARTA N-01---\n");
    printf("Estado: ");
    scanf("%c", &estado_0);
    printf("Código da Carta: ");
    scanf("%s", &cod_0);
    printf("Nome da Cidade: ", &cidade_0);
    scanf("%s", &cidade_0);
    printf("População: ");
    scanf("%i", &populacao_0);
    printf("Área km²: ");
    scanf("%f", &area_0);
    printf("PIB: ");
    scanf("%f", &pib_0);
    printf("Número de Pontos Turísticos: ");
    scanf("%i", &nPontosTuris_0);

    //calcula os atributos desidade populacional e PIB per Capita da carta 1
    densidadePopulacional_0 = populacao_0 / area_0;
    pibPerCapita_0 =  pib_0 / populacao_0;

    // Cadastro das Cartas 02: entrada pelo usuario
    printf("---CADASTRO DA CARTA N-02---\n");
    printf("Estado: ");
    scanf("%c", &estado_1);
    printf("Código da Carta: ");
    scanf("%s", &cod_1);
    printf("Nome da Cidade: ", &cidade_1);
    scanf("%s", &cidade_1);
    printf("População: ");
    scanf("%i", &populacao_1);
    printf("Área km²: ");
    scanf("%f", &area_1);
    printf("PIB: ");
    scanf("%f", &pib_1);
    printf("Número de Pontos Turísticos: ");
    scanf("%i", &nPontosTuris_1);

    //calcula os atributos desidade populacional e PIB per Capita da carta 2
    densidadePopulacional_1 = populacao_1 / area_1;
    pibPerCapita_1 =  pib_1 / populacao_1;

    printf("\n\n");
    // Exibicao dos dados de cada carta numero 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_0);
    printf("Código: %s\n", cod_0);
    printf("Nome da Cidade: %s\n", cidade_0);
    printf("População: %i\n", populacao_0);
    printf("Área: %0.2f km²\n", area_0);
    printf("PIB: %0.2f bilhões de reais\n", pib_0);
    printf("Número de Pontos Turísticos: %i\n", nPontosTuris_0);
    printf("Densidade Populacional: %0.2f\n", densidadePopulacional_0);
    printf("PIB per Capita: %0.2f\n", pibPerCapita_0);

    printf("\n\n");
    // Exibicao dos dados de cada carta numero 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", cod_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %i\n", populacao_1);
    printf("Área: %0.2f km²\n", area_1);
    printf("PIB: %0.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %i\n", nPontosTuris_1);
    printf("Densidade Populacional: %0.2f\n", densidadePopulacional_1);
    printf("PIB per Capita: %0.2f\n", pibPerCapita_1);

    return 0;
}
