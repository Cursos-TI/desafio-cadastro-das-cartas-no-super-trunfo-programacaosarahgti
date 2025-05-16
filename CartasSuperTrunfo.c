 #include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char estado1 = 'A';                          // Estado da cidade
    char codigo1[] = "A01";                      // Código da carta
    char nomeCidade1[] = "São Paulo";            // Nome da cidade
    int populacao1 = 12325000;                   // População
    float area1 = 1521.11;                       // Área em km²
    float pib1 = 699.28;                         // PIB em bilhões de reais
    int pontosTuristicos1 = 50;                  // Número de pontos turísticos

    // Exibição das informações da primeira carta
    printf("--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    return 0;
}
