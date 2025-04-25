#include <stdio.h>

int main() {

    printf("Desafio: Super Trunfo - Países \n \n");

    // Variáveis da primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1, turisticos1;
    float area1, pib1;

    // Cadastro da primeira carta
    printf("Carta 1: \n");
    printf("Digite o estado (A a H): \n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta: (%c01 a 04): \n");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", &cidade1);
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade (km²): \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (bilhões): \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &turisticos1);

    // Variáveis da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2, turisticos2;
    float area2, pib2;

    // Cadastro da segunda carta
    printf("\nCarta 2: \n");
    printf("Digite o estado (A a H): \n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (%c01 a 04): \n");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", &cidade2);
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade (km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (bilhões): \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &turisticos2 );


    // Exibindo as cartas
    printf("\nCarta 1: \n- Estado: %c \n- Código da carta: %s \n", estado1, codigo1);
    printf("- Cidade: %s \n- População: %d habitantes\n", cidade1, populacao1);
    printf("- Área: %.2f km²\n- PIB (Produto Interno Bruto): R$%.2f bilhões \n", area1, pib1);
    printf("- Pontos Turísticos: %d \n \n", turisticos1);

    printf("\nCarta 2: \n- Estado: %c \n- Código da carta: %s \n", estado2, codigo2);
    printf("- Cidade: %s \n- População: %d habitantes\n", cidade2, populacao2);
    printf("- Área: %.2f km²\n- PIB (Produto Interno Bruto): R$%.2f bilhões \n", area2, pib2);
    printf("- Pontos Turísticos: %d \n", turisticos2);


    return 0;

}
