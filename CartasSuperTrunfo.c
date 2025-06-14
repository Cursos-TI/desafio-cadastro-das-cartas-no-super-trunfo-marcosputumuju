#include <stdio.h>

int main() {
    // Estrutura para armazenar os dados da cidade
    char estado[2];
    char codigo[4];
    char cidade[50];
    int populacao;
    float area, pib;
    char pontosTuristicos[100];
    
    float densidade, pibPerCapita;

    // Repetição para duas cidades
    for (int i = 0; i < 2; i++) {
        printf("\n--- Cadastro da Cidade %d ---\n", i + 1);

        printf("Digite o estado (UF): ");
        scanf(" %1s", estado);

        printf("Digite o código da carta (3 caracteres): ");
        scanf("%3s", codigo);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", cidade); // lê até a quebra de linha

        printf("Digite a população: ");
        scanf("%d", &populacao);

        printf("Digite a área (em km²): ");
        scanf("%f", &area);

        printf("Digite o PIB (em bilhões de reais): ");
        scanf("%f", &pib);

        printf("Digite os pontos turísticos: ");
        scanf(" %[^\n]", pontosTuristicos);

        // Cálculos
        densidade = populacao / area;
        pibPerCapita = pib * 1000000000 / populacao; // PIB está em bilhões

        // Exibição dos dados
        printf("\n--- Carta da Cidade %d ---\n", i + 1);
        printf("Estado: %s\n", estado);
        printf("Código: %s\n", codigo);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f bilhões de reais\n", pib);
        printf("Pontos Turísticos: %s\n", pontosTuristicos);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade);
        printf("PIB per Capita: R$ %.2f\n", pibPerCapita);
    }

    return 0;
}
