#include <stdio.h>

int main() {
  // Variáveis da Carta 1

  char estado[50];
  char codigo[10];
  char cidade[50];
  int populacao;
  float area;
  float pib;
  int qtd_pontos_turisticos;

  // Variáveis da Carta 2
  char estado2[50];
  char codigo2[10];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int qtd_pontos_turisticos2;

  // Entradas do usuário para a Carta 1

  printf("Estado: ");
  scanf("%s", estado);

  printf("Código: ");
  scanf("%s", codigo);

  printf("Cidade: ");
  scanf("%s", cidade);

  printf("População: ");
  scanf("%d", &populacao);

  printf("Área: ");
  scanf("%f", &area);

  printf("PIB: ");
  scanf("%f", &pib);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &qtd_pontos_turisticos);

  // Entradas do usuário para a Carta 2

  printf("\nEstado: ");
  scanf("%s", estado2);

  printf("Código: ");
  scanf("%s", codigo2);

  printf("Cidade: ");
  scanf("%s", cidade2);

  printf("População: ");
  scanf("%d", &populacao2);

  printf("Área: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &qtd_pontos_turisticos2);

  // Imprime os atributos da Carta 1

  printf("\nCarta 1:\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos);

  // Imprime os atributos da Carta 2

  printf("\nCarta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos2);

  return 0;
}
