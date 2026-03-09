#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // variaveis carta 1
  char estado;           // estado de  'A' a 'H' 
  char codigodaCarta[4]; // ex: A01
  char nomedaCidade[50]; // ex: Amazonas  
  int populacao;         // ex: 45000
  float areakm2;           // ex: 123.45
  float pib;              // ex: 12345.67
  int pontosTuristicos;   // ex: 50
// Variaveis carta 2
  char Estado;            
  char CodigodaCarta[4]; 
  char NomedaCidade[50];   
  int Populacao;         
  float Areakm2;           
  float Pib;             
  int PontosTuristicos;   

  // Área para entrada de dados CARTA 1
  
  printf("\n=== Cadastro de Carta 1 ===\n");

  printf("Digite o Estado escolha do (A ao H): ");
  scanf(" %c", &estado);  // espaço antes do %c pra ignorar ENTER anterior

  printf("Digite o Codigo da Carta (ex: A01): ");
  scanf("%s", codigodaCarta);                

  printf("Digite o Nome da Cidade: ");       
  scanf("%s", nomedaCidade);

  printf("Digite a População: ");
  scanf("%d", &populacao);

  printf("Digite a Area (km2): ");
  scanf("%f", &areakm2);

  printf("Digite o PIB: ");
  scanf("%f", &pib);

  printf("Digite o Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos);

  // ===== ENTRADA CARTA 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o Estado escolha do (A ao H): "); 
    scanf(" %c", &Estado); // espaço antes do %c pra ignorar ENTER anterior

    printf("Digite o Codigo da Carta (ex: B03): ");
    scanf(" %s", CodigodaCarta);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", NomedaCidade);

    printf("Digite a População: ");
    scanf("%d", &Populacao);

    printf("Digite a Area (km2): ");
    scanf("%f", &Areakm2);

    printf("Digite o PIB: ");
    scanf("%f", &Pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &PontosTuristicos);


    // Área para exibição dos dados da cidade carta 1 e carta 2
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigodaCarta);
    printf("Nome da Cidade: %s\n", nomedaCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.f km²\n", areakm2);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicoS);

    

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado);
    printf("Codigo: %s\n", CodigodaCarta);
    printf("Nome da Cidade: %s\n", NomedaCidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %.2f km²\n", Areakm2);
    printf("PIB: %.2f bilhoes de reais\n", Pib);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos);



    
return 0;
} 
