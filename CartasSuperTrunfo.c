#include <stdio.h>

int main() {
  // Variáveis auxiliares

  int escolhaComparacao;

  // Variáveis da Carta 1

  char pais[50];
  int populacao;
  float area;
  float pib;
  int qtd_pontos_turisticos;
  float densidade_populacional;
  float pib_per_capita;

  // Variáveis da Carta 2
  char pais2[50];
  int populacao2;
  float area2;
  float pib2;
  int qtd_pontos_turisticos2;
  float densidade_populacional2;
  float pib_per_capita2;

  // Entradas do usuário para a Carta 1

  printf("País: ");
  scanf("%s", pais);

  printf("População: ");
  scanf("%d", &populacao);

  printf("Área: ");
  scanf("%f", &area);

  printf("PIB: ");
  scanf("%f", &pib);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &qtd_pontos_turisticos);

  // Entradas do usuário para a Carta 2

  printf("\nPaís: ");
  scanf("%s", pais2);

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

  // Imprime os atributos da Carta 1

  printf("\nCarta 1:\n");
  printf("País: %s\n", pais);
  printf("População: %d\n", populacao);
  printf("Área: %.2f\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib / 1000000000.0);
  printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos);
  printf("Densidade Populacional: %.2f\n", densidade_populacional);
  printf("PIB per Capita: %.2f\n", pib_per_capita);

  // Cálculos usando atributos da carta 2

  densidade_populacional2 = populacao2 / area2;
  pib_per_capita2 = pib2 / populacao2;

  // Imprime os atributos da Carta 2

  printf("\nCarta 2:\n");
  printf("País: %s\n", pais2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2 / 1000000000.0);
  printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos2);
  printf("Densidade Populacional: %.2f\n", densidade_populacional2);
  printf("PIB per Capita: %.2f\n", pib_per_capita2);

  // Menu

  printf("\n### Escolha uma opcao para comparacao ###\n");

  printf("1. Nome do país\n");
  printf("2. População\n");
  printf("3. Área\n");
  printf("4. PIB\n");
  printf("5. Número de pontos turísticos\n");
  printf("6. Densidade demográfica\n");

  scanf("%d", &escolhaComparacao);

  switch (escolhaComparacao) {
    case 1:
      printf("Verificando países\n");
      printf("Carta 1: %s, Carta 2: %s\n", pais, pais2);
      break;
    case 2:
      printf("Comparando por população\n");
      if (populacao == populacao2) {
        printf("Carta 1: %s, Carta 2: %s\n", pais, pais2);
        printf("EMPATE!\n");
        printf("Carta 1: %d, Carta 2: %d\n", populacao, populacao2);
      } else {
        if (populacao > populacao2) {
          printf("Carta 1: %s, Carta 2: %s\n", pais, pais2);
          printf("Carta 1 ganhou\n");
          printf("Carta 1: %d, Carta 2: %d\n", populacao, populacao2);
        } else {
          printf("Carta 1: %s, Carta 2: %s\n", pais, pais2);
          printf("Carta 2 ganhou\n");
          printf("Carta 1: %d, Carta 2: %d\n", populacao, populacao2);
        }
      }
      break;
    case 3:
      printf("Comparando por área\n");
      if (area == area2) {
        printf("Carta 1: %s, Carta 2: %s\n", pais, pais2);
        printf("EMPATE!\n");
        printf("Carta 1: %.2f, Carta 2: %.2f\n", area, area2);
      } else {
        if (area > area2) {
          printf("Carta 1: %s, Carta 2: %s\n", pais, pais2);
          printf("Carta 1 ganhou\n");
          printf("Carta 1: %.2f, Carta 2: %.2f\n", area, area2);
        } else {
          printf("Carta 1: %s, Carta 2: %s\n", pais, pais2);
          printf("Carta 2 ganhou\n");
          printf("Carta 1: %.2f, Carta 2: %.2f\n", area, area2);
        }
      }
      break;
    case 4:
      printf("Comparando por pib\n");
      if (pib == pib2) {
        printf("Carta 1: %s, Carta 2: %s\n", pais, pais2);
        printf("EMPATE!\n");
        printf("Carta 1: %.2f, Carta 2: %.2f\n", pib, pib2);
      } else {
        if (pib > pib2) {
          printf("Carta 1: %s, Carta 2: %s\n", pais, pais2);
          printf("Carta 1 ganhou\n");
          printf("Carta 1: %.2f, Carta 2: %.2f\n", pib, pib2);
        } else {
          printf("Carta 1: %s, Carta 2: %s\n", pais, pais2);
          printf("Carta 2 ganhou\n");
          printf("Carta 1: %.2f, Carta 2: %.2f\n", pib, pib2);
        }
      }
      break;
    case 5:
      printf("Comparando por quantidade de pontos turísticos\n");
      if (qtd_pontos_turisticos == qtd_pontos_turisticos2) {
        printf("Carta 1: %s, Carta 2: %s\n", pais, pais2);
        printf("EMPATE!\n");
        printf("Carta 1: %d, Carta 2: %d\n", qtd_pontos_turisticos,
               qtd_pontos_turisticos2);
      } else {
        if (qtd_pontos_turisticos > qtd_pontos_turisticos2) {
          printf("Carta 1: %s, Carta 2: %s\n", pais, pais2);
          printf("Carta 1 ganhou\n");
          printf("Carta 1: %d, Carta 2: %d\n", qtd_pontos_turisticos,
                 qtd_pontos_turisticos2);
        } else {
          printf("Carta 1: %s, Carta 2: %s\n", pais, pais2);
          printf("Carta 2 ganhou\n");
          printf("Carta 1: %d, Carta 2: %d\n", qtd_pontos_turisticos,
                 qtd_pontos_turisticos2);
        }
      }
      break;
    case 6:
      printf("Comparando por densidade populacional\n");
      if (densidade_populacional == densidade_populacional2) {
        printf("Carta 1: %s, Carta 2: %s\n", pais, pais2);
        printf("EMPATE!\n");
        printf("Carta 1: %.2f, Carta 2: %.2f\n", densidade_populacional,
               densidade_populacional2);
      } else {
        if (densidade_populacional < densidade_populacional2) {
          printf("Carta 1: %s, Carta 2: %s\n", pais, pais2);
          printf("Carta 1 ganhou\n");
          printf("Carta 1: %.2f, Carta 2: %.2f\n", densidade_populacional,
                 densidade_populacional2);
        } else {
          printf("Carta 1: %s, Carta 2: %s\n", pais, pais2);
          printf("Carta 2 ganhou\n");
          printf("Carta 1: %.2f, Carta 2: %.2f\n", densidade_populacional,
                 densidade_populacional2);
        }
      }
      break;
    default:
      printf("Opcao invalida\n");
  }
  return 0;
}
