#include <stdio.h>

int main() {
  // Variáveis auxiliares

  char* escolhas[] = {"População",
                      "Área",
                      "PIB",
                      "Número de Pontos Turísticos",
                      "Densidade Populacional",
                      "PIB per Capita"};
  int escolha_comparacao;
  int escolha_comparacao2;
  float valor1_carta1 = 0, valor1_carta2 = 0;
  float valor2_carta1 = 0, valor2_carta2 = 0;
  float soma_carta1 = 0, soma_carta2 = 0;

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

  printf("\n### Escolha a primeira opção para comparação ###\n");

  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de pontos turísticos\n");
  printf("5. Densidade demográfica\n");

  scanf("%d", &escolha_comparacao);

  printf("\n### Escolha a segunda opção para comparação ###\n");

  if (escolha_comparacao != 1) printf("1. População\n");
  if (escolha_comparacao != 2) printf("2. Área\n");
  if (escolha_comparacao != 3) printf("3. PIB\n");
  if (escolha_comparacao != 4) printf("4. Número de pontos turísticos\n");
  if (escolha_comparacao != 5) printf("5. Densidade demográfica\n");

  scanf("%d", &escolha_comparacao2);

  // Comparação
  if (escolha_comparacao == escolha_comparacao2) {
    printf("Você escolheu o mesmo atributo duas vezes! Tente novamente.\n");
    return 0;
  }

  switch (escolha_comparacao) {
    case 1:
      valor1_carta1 = populacao;
      valor1_carta2 = populacao2;
      break;
    case 2:
      valor1_carta1 = area;
      valor1_carta2 = area2;
      break;
    case 3:
      valor1_carta1 = pib;
      valor1_carta2 = pib2;
      break;
    case 4:
      valor1_carta1 = qtd_pontos_turisticos;
      valor1_carta2 = qtd_pontos_turisticos2;
      break;
    case 5:
      valor1_carta1 = -densidade_populacional;
      valor1_carta2 = -densidade_populacional2;
      break;
    default:
      printf("Opção inválida\n");
  }

  switch (escolha_comparacao2) {
    case 1:
      valor2_carta1 = populacao;
      valor2_carta2 = populacao2;
      break;
    case 2:
      valor2_carta1 = area;
      valor2_carta2 = area2;
      break;
    case 3:
      valor2_carta1 = pib;
      valor2_carta2 = pib2;
      break;
    case 4:
      valor2_carta1 = qtd_pontos_turisticos;
      valor2_carta2 = qtd_pontos_turisticos2;
      break;
    case 5:
      valor2_carta1 = -densidade_populacional;
      valor2_carta2 = -densidade_populacional2;
      break;
    default:
      printf("Opção inválida\n");
  }

  soma_carta1 = valor1_carta1 + valor2_carta1;
  soma_carta2 = valor1_carta2 + valor2_carta2;

  printf("\nResultado final:\n");
  printf("%s: %s = %.2f, %s = %.2f -> Soma = %.2f\n", pais,
         escolhas[escolha_comparacao - 1], valor1_carta1,
         escolhas[escolha_comparacao2 - 1], valor2_carta1, soma_carta1);
  printf("%s: %s = %.2f, %s = %.2f -> Soma = %.2f\n", pais2,
         escolhas[escolha_comparacao - 1], valor1_carta2,
         escolhas[escolha_comparacao2 - 1], valor2_carta2, soma_carta2);

  if (soma_carta1 > soma_carta2) {
    printf("Carta 1 (%s) venceu!\n", pais);
  } else if (soma_carta2 > soma_carta1) {
    printf("Carta 2 (%s) venceu\n", pais2);
  } else {
    printf("Empate!\n");
  }

  return 0;
}
