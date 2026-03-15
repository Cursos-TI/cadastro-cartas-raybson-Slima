#include <stdio.h>

int main() {
    // ===== VARIÁVEIS CARTA 1 =====
    char estado;           
    char codigodaCarta[4]; 
    char nomedaCidade[50]; 
    unsigned long int populacao;         
    float areakm2;           
    float pib;              
    int pontosTuristicos;   
    float densidadePopulacional;
    float pibPercapita;
    float superpoder;

    // ===== VARIÁVEIS CARTA 2 =====
    char Estado_c2;            
    char Codigo_daCarta[4]; 
    char Nome_daCidade[50];   
    unsigned long int Populacao_c2;         
    float Area_km2;           
    float Pib_c2; 
    int Pontos_Turisticos;
    float Densidade_Populacional;
    float Pib_Percapita;  
    float superpoder_c2;

    // ===== ENTRADA CARTA 1 =====
    printf("\n=== Cadastro de Carta 1 ===\n");

    printf("Digite o Estado escolha do (A ao H): ");
    scanf(" %c", &estado);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf(" %3s", codigodaCarta);

    printf("Digite o Nome da Cidade (sem espacos): ");
    scanf(" %49s", nomedaCidade);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao);

    printf("Digite a Area (km2): ");
    scanf("%f", &areakm2);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos);

    // ===== CÁLCULOS CARTA 1 =====
    densidadePopulacional = (float)populacao / areakm2;
    pibPercapita = pib / (float)populacao;
    float inversoDensidade1 = 1.0f / densidadePopulacional; // ou: areakm2 / (float)populacao

    superpoder =
        (float)populacao +
        areakm2 +
        pib +
        (float)pontosTuristicos +
        pibPercapita +
        inversoDensidade1;

    // ===== ENTRADA CARTA 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o Estado escolha do (A ao H): ");
    scanf(" %c", &Estado_c2);

    printf("Digite o Codigo da Carta (ex: B03): ");
    scanf(" %3s", Codigo_daCarta);

    printf("Digite o Nome da Cidade (sem espacos): ");
    scanf(" %49s", Nome_daCidade);

    printf("Digite a Populacao: ");
    scanf("%lu", &Populacao_c2);

    printf("Digite a Area (km2): ");
    scanf("%f", &Area_km2);

    printf("Digite o PIB: ");
    scanf("%f", &Pib_c2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &Pontos_Turisticos);

    // ===== CÁLCULOS CARTA 2 =====
    Densidade_Populacional = (float)Populacao_c2 / Area_km2;
    Pib_Percapita = Pib_c2 / (float)Populacao_c2;
    float inversoDensidade2 = 1.0f / Densidade_Populacional; // ou: Area_km2 / (float)Populacao_c2

    superpoder_c2 =
        (float)Populacao_c2 +
        Area_km2 +
        Pib_c2 +
        (float)Pontos_Turisticos +
        Pib_Percapita +
        inversoDensidade2;

    // ===== SAÍDA =====
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigodaCarta);
    printf("Nome da Cidade: %s\n", nomedaCidade);
    printf("Populacao: %lu\n", populacao);
    printf("Area: %.2f km2\n", areakm2);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.6f hab/km2\n", densidadePopulacional);
    printf("PIB Per Capita: %.2f\n", pibPercapita);
    printf("Super Poder Carta1: %.2f\n", superpoder);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado_c2);
    printf("Codigo: %s\n", Codigo_daCarta);
    printf("Nome da Cidade: %s\n", Nome_daCidade);
    printf("Populacao: %lu\n", Populacao_c2);
    printf("Area: %.2f km2\n", Area_km2);
    printf("PIB: %.2f\n", Pib_c2);
    printf("Numero de Pontos Turisticos: %d\n", Pontos_Turisticos);
    printf("Densidade Populacional: %.6f hab/km2\n", Densidade_Populacional);
    printf("PIB Per Capita: %.2f\n", Pib_Percapita);
    printf("Super Poder Carta2: %.2f\n", superpoder_c2);

    printf("\n=== Comparacao de Cartas ===\n");

// Para cada atributo: 1 = Carta 1 vence, 0 = Carta 2 vence
int vPopulacao = (populacao > Populacao_c2);
int vArea = (areakm2 > Area_km2);
int vPIB = (pib > Pib_c2);
int vPontos = (pontosTuristicos > Pontos_Turisticos);

// Densidade: MENOR vence (regra especial)
int vDensidade = (densidadePopulacional < Densidade_Populacional);

int vPibPerCapita = (pibPercapita > Pib_Percapita);
int vSuperPoder = (superpoder > superpoder_c2);

printf("Populacao: Carta %d venceu (%d)\n", vPopulacao ? 1 : 2, vPopulacao);
printf("Area: Carta %d venceu (%d)\n", vArea ? 1 : 2, vArea);
printf("PIB: Carta %d venceu (%d)\n", vPIB ? 1 : 2, vPIB);
printf("Pontos Turisticos: Carta %d venceu (%d)\n", vPontos ? 1 : 2, vPontos);
printf("Densidade Populacional: Carta %d venceu (%d)\n", vDensidade ? 1 : 2, vDensidade);
printf("PIB per Capita: Carta %d venceu (%d)\n", vPibPerCapita ? 1 : 2, vPibPerCapita);
printf("Super Poder: Carta %d venceu (%d)\n", vSuperPoder ? 1 : 2, vSuperPoder);


     

    return 0;
}