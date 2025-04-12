#include <stdio.h>

// Estrutura para armazenar os dados de uma carta do Super Trunfo
struct Carta
{
    char estado;                 // Letra representando o estado (de 'A' a 'H')
    char codigo[4];              // Código da carta (ex: A01, B03)
    char nomeCidade[100];        // Nome da cidade
    int populacao;               // Número de habitantes
    float area;                  // Área da cidade em km²
    float pib;                   // Produto Interno Bruto
    int pontosTuristicos;        // Número de pontos turísticos
    float densidadePopulacional; // Habitantes por km²
    float pibPerCapita;          // PIB per capita (em reais)
};

int main()
{
    // Declaração de duas variáveis do tipo Carta
    struct Carta carta1;
    struct Carta carta2;

    // ---------- Leitura dos dados da primeira carta ----------
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &carta1.estado); // Espaço antes de %c para ignorar \n pendente

    printf("Informe o código da carta (ex: A01, B03): ");
    scanf("%s", carta1.codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade); // Lê até a quebra de linha (inclui espaços)

    printf("Informe a população da cidade: ");
    scanf("%d", &carta1.populacao);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &carta1.area);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &carta1.pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // ---------- Leitura dos dados da segunda carta ----------
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &carta2.estado);

    printf("Informe o código da carta (ex: A01, B03): ");
    scanf("%s", carta2.codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Informe a população da cidade: ");
    scanf("%d", &carta2.populacao);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &carta2.area);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &carta2.pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // ---------- Cálculo dos dados adicionais ----------
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000.0) / carta1.populacao;

    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000.0) / carta2.populacao;

    // ---------- Exibição dos dados das duas cartas ----------
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código da Carta: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: R$ %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código da Carta: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: R$ %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);

    return 0;
}