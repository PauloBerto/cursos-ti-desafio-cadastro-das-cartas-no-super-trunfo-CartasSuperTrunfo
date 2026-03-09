#include <stdio.h>

int main() {


    // Variáveis para armazenar os dados das duas cartas
    char estado[2];
    char codigo[2][4];
    char cidade[2][50];
    int populacao[2];
    int pontos[2];
    float area[2];
    float PIB[2];
    
    // ---------------------------
    // Cadastro da Carta 1
    // ---------------------------
    printf("Iniciando o cadastro das cartas do Super Trunfo. Vamos cadastrar a carta 1, digite uma letra de A a H para definir o estado: ");
    scanf(" %c", &estado[0]);

    printf("Digite o codigo da carta 1 (letra do estado seguida de 01 a 04, ex: A01: ");
    scanf(" %s", codigo[0]);

    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %s", cidade[0]);

    printf("Digite a populacao da carta 1: ");
    scanf(" %d", &populacao[0]);

    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf(" %d", &pontos[0]);

    printf("Digite a area da carta 1: ");
    scanf(" %f", &area[0]);

    printf("Digite o PIB da carta 1: ");
    scanf(" %f", &PIB[0]);

    // ---------------------------
    // Cadastro da Carta 1
    // ---------------------------
    printf("Vamos cadastrar a carta 2, digite uma letra de A a H para definir o estado: ");
    scanf(" %c", &estado[1]);

    printf("Digite o codigo da carta 2: ");
    scanf(" %s", codigo[1]);

    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %s", cidade[1]);

    printf("Digite a populacao da carta 2: ");
    scanf(" %d", &populacao[1]);

    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf(" %d", &pontos[1]);

    printf("Digite a area da carta 2: ");
    scanf(" %f", &area[1]);

    printf("Digite o PIB da carta 2: ");
    scanf(" %f", &PIB[1]);

    // ---------------------------
    // Exibicao das Cartas
    // ---------------------------
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\nPontos turisticos: %d\nArea: %.2f km2\nPIB: %.2f bilhoes\n", 
    estado[0], codigo[0], cidade[0], populacao[0], pontos[0], area[0], PIB[0]);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\nPontos turisticos: %d\nArea: %.2f km2\nPIB: %.2f bilhoes\n", 
    estado[1], codigo[1], cidade[1], populacao[1], pontos[1], area[1], PIB[1]);

    return 0;
}
