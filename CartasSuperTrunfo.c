#include <stdio.h>

int main() {
    // Dados da carta
    char estado = 'A';
    char codigo[4] = "A01";
    char cidade[50] = "Ipiaú";
    int populacao = 2000;
    float area = 2000.0;
    float pib = 10000.0;
    char pontosTuristicos[100] = "Praça Brasil e Praça Rui Barbosa";

    // Exibindo os dados
    printf("Carta:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %s\n", pontosTuristicos);

    return 0;
}
