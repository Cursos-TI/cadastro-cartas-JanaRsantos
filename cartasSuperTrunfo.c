#include <stdio.h>
#include <string.h>

struct Carta
{
  char estado[2];
  char codigo[4];
  char cidade[50];
  int populacao;
  float area;
  float pib;
  int pontoTuristico;
};

int main() {
  struct Carta cartas[2];

  for (int i = 0; i < 2; i++)
  {

    printf("=== Cadastro de cartas %d ===\n", i + 1);

    printf("Digite o Estado (Uma letra de 'A' a 'H'): ");
    scanf("%2s", cartas[i].estado);
    getchar();

    printf("Digite o Codigo (Letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): ");
    scanf("%4s", cartas[i].codigo);
    getchar();

    printf("Digite a Cidade: ");
    fgets(cartas[i].cidade, 50, stdin);
    cartas[i].cidade[strcspn(cartas[i].cidade, "\n")] = '\0';

    printf("Digite a Populacao: ");
    scanf("%d", &cartas[i].populacao);

    printf("Digite a Area: ");
    scanf("%f", &cartas[i].area);

    printf("Digite o PIB: ");
    scanf("%f", &cartas[i].pib);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &cartas[i].pontoTuristico);

    getchar();

    printf("\n---------------------------\n\n");
  }

  printf("=== CARTAS CADASTRADAS ===\n");

  for (int i = 0; i < 2; i++)
  {
    printf("\n--- Carta %d ---\n", i + 1);
    printf("Estado: %s\n", cartas[i].estado);
    printf("Codigo: %s\n", cartas[i].codigo);
    printf("Cidade: %s\n", cartas[i].cidade);
    printf("Populacao: %d\n", cartas[i].populacao);
    printf("Area: %.2f\n", cartas[i].area);
    printf("PIB: %.2f\n", cartas[i].pib);
    printf("Pontos turisticos: %d\n", cartas[i].pontoTuristico);
    printf("\n--------------------------------\n\n");
  }
} 
