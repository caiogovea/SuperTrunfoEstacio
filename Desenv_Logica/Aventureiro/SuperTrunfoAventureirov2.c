#include <stdio.h>

int main() {

char estado1, estado2;
char codigo1[4], codigo2[4]; 
char cidade1[50], cidade2[50]; 
int populacao1, populacao2; 
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
scanf(" %d", &populacao1);

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
scanf("%d", &populacao2);

printf("Digite a area (km²): ");
scanf("%f", &area2);

printf("Digite o PIB: ");
scanf("%f", &pib2);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &pontosT2);

// Calculo

float densidade1 = (float)populacao1 / area1;
float densidade2 = (float)populacao2 / area2;
float pibPC1 = (pib1 * 1000000000) / (float)populacao1;
float pibPC2 = (pib2 * 1000000000) / (float)populacao2;

// Exibição

printf("\n=== CARTAS CADASTRADAS ==== \n");
printf("\n - CARTA 1 - \n");

printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Pontos Turisticos: %d\n", pontosT1);
printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf("PIB per Capita: %.2f reais\n", pibPC1);

printf("\n");

printf("- CARTA 2 - \n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Area: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Pontos Turisticos: %d\n", pontosT2);
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB per Capita: %.2f reais\n", pibPC2);

int opcao;
printf("\n=== MENU DE COMPARACAO ===\n");
printf("1 - Populacao\n");
printf("2 - Area\n");
printf("3 - PIB\n");
printf("4 - Pontos Turisticos\n");
printf("5 - Densidade Demografica\n");
printf("Escolha: ");
scanf("%d", &opcao);

printf("\nCarta 1: %s\n", cidade1);
printf("Carta 2: %s\n", cidade2);

switch(opcao) {

case 1:
    printf("\n Atributo: Populacao\n");
    printf("%s: %d\n", cidade1, populacao1);
    printf("%s: %d\n", cidade2, populacao2);

    if(populacao1 > populacao2)
        printf("Vencedor: %s", cidade1);
    else 
        printf("Vencedor: %s", cidade2);
    break;

case 2:
    printf("\n Atributo: Area\n");
    printf("%s: %d\n", cidade1, area1);
    printf("%s: %d\n", cidade2, area2);

    if(area1 > area2)
        printf("Vencedor: %s", cidade1);
    else 
        printf("Vencedor: %s", cidade2);
    break;

case 3:
    printf("\n Atributo: PIB\n");
    printf("%s: %d\n", cidade1, pib1);
    printf("%s: %d\n", cidade2, pib2);

    if(pib1 > pib2)
        printf("Vencedor: %s", cidade1);
    else 
        printf("Vencedor: %s", cidade2);
    break;

case 4:
    printf("\n Atributo: Pontos Turisticos\n");
    printf("%s: %d\n", cidade1, pontosT1);
    printf("%s: %d\n", cidade2, pontosT2);

    if(pontosT1 > pontosT2)
        printf("Vencedor: %s", cidade1);
    else 
        printf("Vencedor: %s", cidade2);
    break;

case 5:
    printf("Atributo: Densidade Demografica\n");
    printf("%s: %d\n", cidade1, densidade1);
    printf("%s: %d\n", cidade2, densidade2);

    if(densidade1 < densidade2)
        printf("Vencedor: %s", cidade1);
    else 
        printf("Vencedor: %s", cidade2);
    break;

    default:
    printf("\nOpcao Invalida!\n");
    break;

}

return 0;

}