#include <stdio.h>

int main() {

<<<<<<< HEAD
char estado1, estado2;
char codigo1[4], codigo2[4];
char cidade1[50], cidade2[50]; 
int populacao1, populacao2;
float area1, area2;
=======
char estado1, estado2; 
char codigo1[4], codigo2[4]; 
char cidade1[50], cidade2[50]; 
int populacao1, populacao2; 
float area1, area2; 
>>>>>>> f2380c9 (Adiciona o nível Aventureiro)
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
scanf(" %f", &populacao1);

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
scanf("%f", &populacao2);

printf("Digite a area (km²): ");
scanf("%f", &area2);

printf("Digite o PIB: ");
scanf("%f", &pib2);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &pontosT2);

// Exibição

printf("\n=== CARTAS CADASTRADAS ==== \n");
printf("\n - CARTA 1 - \n");

printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Area: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Pontos Turisticos: %d\n", pontosT1);

printf("\n");

printf("- CARTA 2 - \n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Area: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Pontos Turisticos: %d\n", pontosT2);
<<<<<<< HEAD
}
=======

return 0;

}
>>>>>>> f2380c9 (Adiciona o nível Aventureiro)
