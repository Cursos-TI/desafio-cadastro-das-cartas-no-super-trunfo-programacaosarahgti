 #include <stdio.h>

int main() {
    // ----------- CARTA 1 -----------
    // Variáveis da Carta 1
    char estado1 = 'A';                          // Estado representado por letra A-H
    char codigo1[] = "A01";                      // Código da carta: letra do estado + número
    char nomeCidade1[] = "São Paulo";            // Nome da cidade
    int populacao1 = 12325000;                   // População total
    float area1 = 1521.11;                       // Área em km²
    float pib1 = 699.28;                         // PIB em bilhões de reais
    int pontosTuristicos1 = 50;                  // Número de pontos turísticos

    // ----------- CARTA 2 -----------
    // Variáveis da Carta 2
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;

    // ----------- EXIBIÇÃO DAS CARTAS -----------
    // Exibição da Carta 1
    printf("--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);


    printf("\n");

    
    printf("--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
