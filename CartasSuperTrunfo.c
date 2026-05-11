#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //carta 1
  char estado1[50], codigo1[4], cidade1[50]; 
  unsigned long int populacao1;
  int pontosturisticos1;
  float area1, pib1;
  float densidadepopulacional1;
  float pibpercapita1;

  //carta 2
  char estado2[50], codigo2[4], cidade2[50]; 
  unsigned long int populacao2;
  int pontosturisticos2;
  float area2, pib2;
  float densidadepopulacional2;
  float pibpercapita2;

  float superPoder1, superPoder2;
  // Área para entrada de dados
  // Carta 1
  printf("Carta 1\n");

  printf("Digite o estado: \n");
  scanf("%s", estado1);

  printf("Digite o código: \n");
  scanf("%s", codigo1);

  printf("Digite a cidade: \n");
  scanf("%s", cidade1);

  printf("Digite a população: \n");
  scanf("%lu", &populacao1);

  printf("Digite a área: \n");
  scanf("%f", &area1);

  printf("Digite o PIB: \n");
  scanf("%f", &pib1);

  printf("Digite o numero de pontos turísticos: \n");
  scanf("%d", &pontosturisticos1);

  // Carta 2
  printf("Carta 2\n");

  printf("Digite o estado: \n");
  scanf("%s", estado2);

  printf("Digite o código: \n");
  scanf("%s", codigo2);

  printf("Digite a cidade: \n");
  scanf("%s", cidade2);

  printf("Digite a população: \n");
  scanf("%lu", &populacao2);

  printf("Digite a área: \n");
  scanf("%f", &area2);

  printf("Digite o PIB: \n");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turísticos: \n");
  scanf("%d", &pontosturisticos2);

  // Área para exibição dos dados da cidade

  printf("Carta 1\n");
  printf("Estado: %s \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Cidade: %s \n", cidade1);
  printf("População: %lu \n", populacao1);
  printf("Área: km² %.2f \n", area1);
  printf("PIB: %.2f \n", pib1);
  printf("Pontos Turísticos: %d \n", pontosturisticos1);
  densidadepopulacional1 = populacao1 / area1;
  pibpercapita1 = pib1 / populacao1;
  printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional1);
  printf("PIB per capita: %.2f reais \n", pibpercapita1);

  printf("Carta 2\n");
  printf("Estado: %s \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Cidade: %s \n", cidade2);
  printf("População: %lu \n", populacao2);
  printf("Área: %.2f km² \n", area2);
  printf("PIB: %.2f \n", pib2);
  printf("Pontos Turísticos: %d \n", pontosturisticos2);
  densidadepopulacional2 = populacao2 / area2;
  pibpercapita2 = pib2 / populacao2;
  printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional2);
  printf("PIB per capita: %.2f reais \n", pibpercapita2);

  //calculo do super poder
  superPoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1 / densidadepopulacional1);
  superPoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1 / densidadepopulacional2);

  printf("Super Poder: %.2f \n", superPoder1);
  printf("Super Poder: %.2f \n", superPoder2);

  printf("Populção: Carta 1 venceu (%d)\n", populacao1 > populacao2);
  printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
  printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
  printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);
  printf("Densidade Populacioal: Carta 1 venceu (%d)\n", densidadepopulacional1 < densidadepopulacional2);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
  printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

return 0;
}