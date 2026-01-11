#include <stdio.h>



int main() {
  // Área para definição das variáveis para armazenar os atributos das cidades
  char estado_1, estado_2;
  char codigo_1[5], codigo_2[5];
  char cidade_1[20], cidade_2[20];
  unsigned long int populacao_1, populacao_2;
  unsigned int turismo_1, turismo_2;
  float area_1, area_2;
  long double PIB_1, PIB_2;

  int atributo_1, atributo_2;
  long double valor_1_1, valor_2_1;
  long double valor_1_2, valor_2_2;

  // Área para entrada de dados
  printf("Digite uma letra para o Estado (A-H): ");
  scanf(" %c", &estado_1);

  printf("Digite o código do Estado escolhido (Ex: X001): ");
  scanf("%s", codigo_1);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade_1);

  printf("Digite o número da população: ");
  scanf("%lu", &populacao_1);

  printf("Digite a quantidade de pontos turísticos: ");
  scanf("%u", &turismo_1);

  printf("Digite a área(km²): ");
  scanf("%f", &area_1);

  printf("Digite o PIB: ");
  scanf("%Lf", &PIB_1);

  printf("------------------------------- \n");

  printf("Digite uma letra para o Estado 2 (A-H): ");
  scanf(" %c", &estado_2);

  printf("Digite o código do Estado 2 escolhido (Ex: X001): ");
  scanf("%s", codigo_2);

  printf("Digite o nome da cidade 2: ");
  scanf("%s", cidade_2);

  printf("Digite o número da população: ");
  scanf("%lu", &populacao_2);

  printf("Digite a quantidade de pontos turísticos: ");
  scanf("%u", &turismo_2);

  printf("Digite a área(km²): ");
  scanf("%f", &area_2);

  printf("Digite o PIB: ");
  scanf("%Lf", &PIB_2);

  printf("\n");

  printf("========================================\n\n");

  // Área para cálculo de densidade  populacional e PIB per capita
  float densidade_1 = (float)populacao_1 / area_1;
  long double percapita_1 = (double)PIB_1 / populacao_1;

  float densidade_2 = (float)populacao_2 / area_2;
  long double percapita_2 = (double)PIB_2 / populacao_2;

  // Área para cálculo do Super poder e inverso da densidade
  double inverdensidade_1, inverdensidade_2;

  inverdensidade_1 = (float)area_1 / populacao_1;
  inverdensidade_2 = (float)area_2 / populacao_2;

  long double super_1, super_2;

  super_1 = (long double)populacao_1 + turismo_1 + area_1 + PIB_1 + inverdensidade_1 + percapita_1;
  super_2 = (long double)populacao_2 + turismo_2 + area_2 + PIB_2 + inverdensidade_2 + percapita_2;


  // Área para exibição dos dados da cidade
  printf("Carta 1:\n");
  printf("Estado: %c\n Código: %s\n Cidade: %s\n ", estado_1, codigo_1, cidade_1);
  printf("População: %lu\n Pontos Turísticos: %u\n Área: %.3f\n PIB: %.2Lf\n", populacao_1, turismo_1, area_1, PIB_1);
  printf("Densidade Populacional: %.2f\n PIB per Capita: %.2Lf\n", densidade_1, percapita_1);
  printf("Super Poder: %.2Lf\n", super_1);

  printf("-------------------------------\n");

  printf("Carta 2:\n");
  printf("Estado: %c\n Código: %s\n Cidade: %s\n ", estado_2, codigo_2, cidade_2);
  printf("População: %lu\n Pontos Turísticos: %u\n Área: %.3f\n PIB: %.2Lf\n", populacao_2, turismo_2, area_2, PIB_2);
  printf("Densidade Populacional: %.2f\n PIB per Capita: %.2Lf\n", densidade_2, percapita_2);
  printf("Super Poder: %.2Lf\n\n", super_2);

  printf("============================================\n\n");

  // Menu  e área para comparação do primeiro atributo
  printf("Comparação de cartas\n");
  printf("Escolha o primeiro atributo para comparar as cartas:\n");
  printf("1 - População\n");
  printf("2 - Pontos Turísticos\n");
  printf("3 - Área\n");
  printf("4 - PIB\n");
  printf("5 - Densidade Populacional (menor valor vence)\n");
  printf("6 - PIB per Capita\n");
  printf("7 - Super Poder\n");
  printf("Digite o número do atributo escolhido: ");
  scanf("%d", &atributo_1);

  printf("------------------------------------------------------------\n");

  
  switch (atributo_1)
  {
  case 1:
    valor_1_1 = populacao_1;
    valor_2_1 = populacao_2;
    break;
  
  case 2:
    valor_1_1 = turismo_1;
    valor_2_1 = turismo_2;
    break;

  case 3:
    valor_1_1 = area_1; 
    valor_2_1 = area_2;
    break;

  case 4:
    valor_1_1 = PIB_1;
    valor_2_1 = PIB_2;
    break;

  case 5:
    valor_1_1 = inverdensidade_1; 
    valor_2_1 = inverdensidade_2;
    break;

  case 6:
    valor_1_1 = percapita_1; 
    valor_2_1 = percapita_2;
    break;

  case 7:
    valor_1_1 = super_1;
    valor_2_1 = super_2;
    break;

  default:
    printf("Opção invãlida!");
    break;
  }


 //Menu e área para comparação do segundo atributo
printf("Escolha o segundo atributo (diferente do primeiro) para comparar as cartas\n");
printf("1 - População\n");
printf("2 - Pontos Turísticos\n");
printf("3 - Área\n");
printf("4 - PIB\n");
printf("5 - Densidade Populacional (menor valor vence)\n");
printf("6 - PIB per Capita\n");
printf("7 - Super Poder\n");
printf("Digite o número do segundo atributo escolhido: ");
scanf("%d", &atributo_2);

printf("\n");

if (atributo_1 == atributo_2) {
  printf("Você escolheu o mesmo atributo.\n");
  return 0;
} else {
  switch (atributo_2)
  {
  case 1:
    valor_1_2 = populacao_1;
    valor_2_2 = populacao_2;
    break;
  
  case 2:
    valor_1_2 = turismo_1;
    valor_2_2 = turismo_2;
    break;

  case 3:
    valor_1_2 = area_1; 
    valor_2_2 = area_2;
    break;

  case 4:
    valor_1_2 = PIB_1;
    valor_2_2 = PIB_2;
    break;

  case 5:
    valor_1_2 = inverdensidade_1; 
    valor_2_2 = inverdensidade_2;
    break;

  case 6:
    valor_1_2 = percapita_1; 
    valor_2_2 = percapita_2;
    break;

  case 7:
    valor_1_2 = super_1;
    valor_2_2 = super_2;
    break;

  default:
    printf("Opção invãlida!");
    break;
  }
}

printf("============================================\n \n");

// Soma dos atrbutos escolhidos
long double soma_1, soma_2;

soma_1 = valor_1_1 + valor_1_2;
soma_2 = valor_2_1 + valor_2_2;

// Exibição dos resultados
printf("Resultado da soma dos atributos escolhidos para comparação:\n");
printf("Carta 1 (%s): %.2Lf + %.2Lf = %.2Lf\n", cidade_1, valor_1_1, valor_1_2, soma_1);
printf("Carta 2 (%s): %.2Lf + %.2Lf = %.2Lf\n \n", cidade_2, valor_2_1, valor_2_2, soma_2);

soma_1 > soma_2 ? printf("Carta 1 venceu!\n") : soma_2 > soma_1 ? printf("Carta 2 venceu!\n") : printf("Empate!\n");

return 0;
} 

