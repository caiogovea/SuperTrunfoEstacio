#include <stdio.h>

int main() {

char estado1, estado2;
char codigo1[4], codigo2[4]; 
char cidade1[50], cidade2[50]; 
unsigned long int populacao1, populacao2; 
float area1, area2; 
float pib1, pib2;
int pontosT1, pontosT2;

// Carta 1
printf("\n=== Cadastro Carta 1 ===\n");

printf("Digite o estado (A-H): ");
scanf(" %c", &estado1);

printf("Digite o código da carta (ex: A01): ");
scanf(" %s", codigo1);

printf("Digite o nome da cidade: ");
scanf(" %[^\n]", cidade1);

printf("Digite a populacao: ");
scanf(" %lu", &populacao1);

printf("Digite a area (km²): ");
scanf(" %f", &area1);

printf("Digite o PIB: ");
scanf(" %f", &pib1);

printf("Digite o numero de pontos turisticos: ");
scanf(" %d", &pontosT1);

printf("\n");

// Carta 2
printf("=== Cadastro Carta 2 ===\n");

printf("Digite o estado (A-H): ");
scanf(" %c", &estado2);

printf("Digite o código da carta (ex: B02): ");
scanf(" %s", codigo2);

printf("Digite o nome da cidade: ");
scanf(" %[^\n]", cidade2);

printf("Digite a populacao: ");
scanf("%lu", &populacao2);

printf("Digite a area (km²): ");
scanf("%f", &area2);

printf("Digite o PIB: ");
scanf("%f", &pib2);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &pontosT2);

// Calculo

float densidade1 = (float)populacao1 / area1;
float densidade2 = (float)populacao2 / area2;
float pibPC1 = (pib1 * 1000000000.0) / (float)populacao1;
float pibPC2 = (pib2 * 1000000000.0) / (float)populacao2;

float SP1 = (float)populacao1 + area1 + pib1 + pontosT1 + pibPC1 + (1.0 / densidade1);
float SP2 = (float)populacao2 + area2 + pib2 + pontosT2 + pibPC2 + (1.0 / densidade2);

// Comparações

int vP = populacao1 > populacao2;
int vA = area1 > area2;
int vPB = pib1 > pib2;
int vPT = pontosT1 > pontosT2;
int vD = densidade1 < densidade2;
int vPBP = pibPC1 > pibPC2;
int vSP = SP1 > SP2;

// Exibição

printf("\n=== CARTAS CADASTRADAS ==== \n");
printf("\n - CARTA 1 - \n");

printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %lu\n", populacao1);
printf("Area: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Pontos Turisticos: %d\n", pontosT1);
printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf("PIB per Capita: %.2f reais\n", pibPC1);
printf("Super Poder: %.2f\n", SP1);

printf("\n");

printf("- CARTA 2 - \n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %lu\n", populacao2);
printf("Area: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Pontos Turisticos: %d\n", pontosT2);
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB per Capita: %.2f reais\n", pibPC2);
printf("Super Poder: %.2f\n", SP2); 

// Exibir Comparações

printf("\n\n=== COMPARACAO DE CARTAS ===\n");

printf("Populacao: Carta %d venceu (%d)\n", 2 - vP, vP);
printf("Area: Carta %d venceu (%d)\n", 2 - vA, vA);
printf("PIB: Carta %d venceu (%d)\n", 2 - vPB, vPB);
printf("Pontos Turisticos: Carta %d venceu (%d)\n", 2 - vPT, vPT);
printf("Densidade Populacional: Carta %d venceu (%d)\n", 2 - vD, vD);
printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - vPBP, vPBP);
printf("Super Poder: Carta %d venceu (%d)\n", 2 - vSP, vSP);



return 0;

}