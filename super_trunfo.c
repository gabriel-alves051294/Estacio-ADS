#include <stdio.h>

int main (){
    char letra1[3];
    char cidade1[50];
    char codigo_cartas1[10];
    
    char letra2[3];
    char cidade2[50];
    char codigo_cartas2[10];

    int numero1, populacao1, pontos_turisticos1, numero2, populacao2, pontos_turisticos2;
    float pib1, area1, pib2, area2;

    printf("Digite o número da carta: ");
    scanf(" %d", &numero1);

    printf("\nDigite o estado da primeira carta: ");
    scanf(" %s", &letra1);

    printf("\nDigite o nome da cidade: ");
    scanf(" %s", &cidade1);

    printf("\nDigite qual é a população desta cidade: ");
    scanf(" %d", &populacao1);

    printf("\nDigite o tamanho em área desta cidade: ");
    scanf(" %f", &area1);

    printf("\nQual é o PIB da cidade: ");
    scanf(" %f", &pib1);

    printf("\nDigite quantos pontos turísticos há na cidade: ");
    scanf(" %d", &pontos_turisticos1);

    printf("\n\n<Forneça os dados da segunda carta abaixo> \n\n");

    printf("Digite o número da carta: ");
    scanf(" %d", &numero2);

    printf("\nDigite o estado da segunda carta: ");
    scanf(" %s", &letra2);

    printf("\nDigite o nome da cidade: ");
    scanf(" %s", &cidade2);

    printf("\nDigite qual é a população desta cidade: ");
    scanf(" %d", &populacao2);

    printf("\nDigite o tamanho em área desta cidade: ");
    scanf(" %f", &area2);

    printf("\nQual é o PIB da cidade: ");
    scanf(" %f", &pib2);

    printf("\nDigite quantos pontos turísticos há na cidade: ");
    scanf(" %d \n\n", &pontos_turisticos2);

    printf("Carta 1: \n");
    printf("Estado: %s \n", letra1);
    printf("Código: %s0%d \n", letra1, numero1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n\n", pontos_turisticos1);

    printf("Carta 2: \n");
    printf("Estado: %s \n", letra2);
    printf("Código: %s0%d \n", letra2, numero2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n\n", pontos_turisticos2);

}
