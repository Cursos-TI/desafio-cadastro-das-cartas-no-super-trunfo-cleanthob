#include <stdio.h>

int main() {
  char *nomesCartas[2] = {"Carta 1", "Carta 2"};

  // Variáveis da Carta 1

  char estado[50];
  char codigo[10];
  char cidade[50];
  int populacao;
  float area;
  float pib;
  int qtd_pontos_turisticos;
  float densidade_populacional;
  float pib_per_capita;
  float super_poder;

  // Variáveis da Carta 2

  char estado2[50];
  char codigo2[10];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int qtd_pontos_turisticos2;
  float densidade_populacional2;
  float pib_per_capita2;
  float super_poder2;

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

  // Cálculos usando atributos da carta 1

  densidade_populacional = populacao / area;
  pib_per_capita = pib / populacao;
  super_poder = populacao + area + pib + qtd_pontos_turisticos +
                pib_per_capita + (1 / densidade_populacional);

  // Imprime os atributos da Carta 1

  printf("\nCarta 1:\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib / 1000000000.0);
  printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos);
  printf("Densidade Populacional: %.2f\n", densidade_populacional);
  printf("PIB per Capita: %.2f\n", pib_per_capita);
  printf("Superpoder: %.2f\n", super_poder);

  // Cálculos usando atributos da carta 2

  densidade_populacional2 = populacao2 / area2;
  pib_per_capita2 = pib2 / populacao2;
  super_poder2 = populacao2 + area2 + pib2 + qtd_pontos_turisticos2 +
                 pib_per_capita2 + (1 / densidade_populacional2);

  // Imprime os atributos da Carta 2

  printf("\nCarta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2 / 1000000000.0);
  printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos2);
  printf("Densidade Populacional: %.2f\n", densidade_populacional2);
  printf("PIB per Capita: %.2f\n", pib_per_capita2);
  printf("Superpoder: %.2f\n", super_poder2);

  // Realizando comparações para verificar a carta ganhadora
  int ganhadoraPopulacao = populacao2 > populacao;
  int ganhadoraArea = area2 > area;
  int ganhadoraPIB = pib2 > pib;
  int ganhadoraPontosTuristicos =
      qtd_pontos_turisticos2 > qtd_pontos_turisticos;
  int ganhadoraDensidadePopulacional =
      densidade_populacional2 < densidade_populacional;
  int ganhadoraPIBPerCapita = pib_per_capita2 > pib_per_capita;
  int ganhadoraSuperPoder = super_poder2 > super_poder;

  printf("\nComparação de Cartas:\n");
  printf("População: %s venceu (%d)\n", nomesCartas[ganhadoraPopulacao],
         ganhadoraPopulacao);
  printf("Área: %s venceu (%d)\n", nomesCartas[ganhadoraArea], ganhadoraArea);
  printf("PIB: %s venceu (%d)\n", nomesCartas[ganhadoraPIB], ganhadoraPIB);
  printf("Pontos Turísticos: %s venceu (%d)\n",
         nomesCartas[ganhadoraPontosTuristicos], ganhadoraPontosTuristicos);
  printf("Densidade Populacional: %s venceu (%d)\n",
         nomesCartas[ganhadoraDensidadePopulacional],
         ganhadoraDensidadePopulacional);
  printf("PIB per Capita: %s venceu (%d)\n", nomesCartas[ganhadoraPIBPerCapita],
         ganhadoraPIBPerCapita);
  printf("Super Poder: %s venceu (%d)\n", nomesCartas[ganhadoraSuperPoder],
         ganhadoraSuperPoder);

  return 0;
}
