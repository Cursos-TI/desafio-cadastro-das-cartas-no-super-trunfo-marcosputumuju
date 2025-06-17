#include <stdio.h>
#include <string.h>

int main() {
    char estado[2][3]; // +1 para o '\0'
    char codigo[2][4];
    char cidade[2][50];
    unsigned long int populacao[2];
    float area[2], pib[2];
    char pontosTuristicos[2][100];
    
    float densidade[2], pibPerCapita[2], superPoder[2];
    int numPontos[2]; // Número de pontos turísticos (contados como quantidade de palavras)

    for (int i = 0; i < 2; i++) {
        printf("\n--- Cadastro da Cidade %d ---\n", i + 1);

        printf("Digite o estado (UF): ");
        scanf(" %2s", estado[i]);

        printf("Digite o código da carta (3 caracteres): ");
        scanf(" %3s", codigo[i]);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", cidade[i]);

        printf("Digite a população: ");
        scanf("%lu", &populacao[i]);

        printf("Digite a área (em km²): ");
        scanf("%f", &area[i]);

        printf("Digite o PIB (em bilhões de reais): ");
        scanf("%f", &pib[i]);

        printf("Digite os pontos turísticos: ");
        scanf(" %[^\n]", pontosTuristicos[i]);

        // Cálculos
        densidade[i] = populacao[i] / area[i];
        pibPerCapita[i] = pib[i] * 1000000000 / populacao[i];

        // Contar pontos turísticos como quantidade de palavras
        numPontos[i] = 1;
        for (int j = 0; pontosTuristicos[i][j] != '\0'; j++) {
            if (pontosTuristicos[i][j] == ' ')
                numPontos[i]++;
        }

        // Super Poder = população + área + PIB + numPontosTuristicos + PIB per capita + (1 / densidade)
        superPoder[i] = (float)populacao[i] + area[i] + pib[i] +
                        (float)numPontos[i] + pibPerCapita[i] + (1.0f / densidade[i]);

        // Exibição dos dados
        printf("\n--- Carta da Cidade %d ---\n", i + 1);
        printf("Estado: %s\n", estado[i]);
        printf("Código: %s\n", codigo[i]);
        printf("Nome da Cidade: %s\n", cidade[i]);
        printf("População: %lu\n", populacao[i]);
        printf("Área: %.2f km²\n", area[i]);
        printf("PIB: %.2f bilhões de reais\n", pib[i]);
        printf("Pontos Turísticos: %s\n", pontosTuristicos[i]);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade[i]);
        printf("PIB per Capita: R$ %.2f\n", pibPerCapita[i]);
        printf("Super Poder: %.2f\n", superPoder[i]);
    }

    // Comparações
    printf("\n--- Comparações entre as Cartas ---\n");

    printf("População: %d\n", populacao[0] > populacao[1] ? 1 : 0);
    printf("Área: %d\n", area[0] > area[1] ? 1 : 0);
    printf("PIB: %d\n", pib[0] > pib[1] ? 1 : 0);
    printf("Número de Pontos Turísticos: %d\n", numPontos[0] > numPontos[1] ? 1 : 0);
    printf("PIB per Capita: %d\n", pibPerCapita[0] > pibPerCapita[1] ? 1 : 0);
    printf("Densidade Populacional (menor vence): %d\n", densidade[0] < densidade[1] ? 1 : 0);
    printf("Super Poder: %d\n", superPoder[0] > superPoder[1] ? 1 : 0);

    return 0;
}

