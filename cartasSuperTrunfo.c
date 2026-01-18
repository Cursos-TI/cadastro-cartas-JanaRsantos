#include <stdio.h>
#include <string.h>

int main() {
  /*Carta 1*/
    char estado_1;
    char codigo_1[4];
    char cidade_1[50];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontos_1;
    
    /*Carta 2*/
    char estado_2;
    char codigo_2[4];
    char cidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_2;

    printf("=== Cadastro cartas ===\n\n");

    /*Leitura carta 1*/
    printf("Cadastro carta 1\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado_1);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo_1);

    printf("Cidade: ");
    scanf("%s", cidade_1);

    printf("População: ");
    scanf("%d", &populacao_1); 

    printf("Area (km²): ");
    scanf("%f", &area_1);

    printf("PIB: ");
    scanf("%f", &pib_1);

    printf("Número de pontos Turísticos: ");
    scanf("%d", &pontos_1);

    printf("\n--------------------------------\n\n");

    /*Leitura carta 2*/
    printf("Cadastro carta 1\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado_2);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo_2);

    printf("Cidade: ");
    scanf("%s", cidade_2);

    printf("População: ");
    scanf("%d", &populacao_2); 

    printf("Area (km²): ");
    scanf("%f", &area_2);

    printf("PIB: ");
    scanf("%f", &pib_2);

    printf("Número de pontos Turísticos: ");
    scanf("%d", &pontos_2);


    printf("\n=== CARTAS CADASTRADAS ===\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Codigo: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("Populacao: %d\n", populacao_1);
    printf("Area: %.2f km²\n", area_1);
    printf("PIB: %.2f\n", pib_1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontos_1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Codigo: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("Populacao: %d\n", populacao_2);
    printf("Area: %.2f km²\n", area_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_2);

    return 0;
}