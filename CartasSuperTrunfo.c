#include <stdio.h>

int main(){

     //Declaração das variaveis da primeira carta.
char estado1;
char codigo1[4];
char cidade1[50];
int populacao1, pontosTuristicos1;
float area1, pib1, densidade1, pibPerCapita1, superPoder1;

    //Declaração das variaveis da segunda carta.
char estado2;
char codigo2[4];
char cidade2[50];
int populacao2, pontosTuristicos2;
float area2, pib2, densidade2, pibPerCapita2, superPoder2;

    //Entrada de dados primeira carta.
    printf(".##' Carta 1 '##.\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade1);

    printf("Digite a polulação da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    //Calculo da primeira carta.
    if (area1 !=0){
        densidade1 = populacao1 / area1;
    } else {
        densidade1 = 0;
    }
    if (populacao1 !=0){
        pibPerCapita1 = pib1 / populacao1;
    } else {
        pibPerCapita1 = 0;
    }
    
    //Entrada de dados segunda carta.
    printf("\n.##' Carta 2 '##.\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade2);

    printf("Digite a polulação da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos da cidade: ");
    scanf("%d", &pontosTuristicos2);

    //Calculo da segunda carta.
    if (area2 !=0){
        densidade2 = populacao2 / area2;
    } else {
        densidade2 = 0;
    }
    if (populacao2 !=0){
        pibPerCapita2 = pib2 / populacao2;
    } else {
        pibPerCapita2 = 0;
    }
    //Calculo de super poder.(soma de tudo)
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 - densidade1;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 - densidade2;


    // #################### EXIBIÇÃO ######################

    printf("\n.###' RESULTADO '###.\n");

    // População
    printf("População: ");
    if(populacao1 > populacao2){
        printf("Carta 1 venceu!\n");
    } else if(populacao2 > populacao1){
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    // Área
    printf("Área: ");
    if(area1 > area2){
        printf("Carta 1 venceu!\n");
    } else if(area2 > area1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    // PIB
    printf("PIB: ");
    if(pib1 > pib2){
        printf("Carta 1 venceu!\n");
    } else if(pib2 > pib1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    // Pontos turísticos
    printf("Pontos Turísticos: ");
    if(pontosTuristicos1 > pontosTuristicos2){
        printf("Carta 1 venceu!\n");
    } else if(pontosTuristicos2 > pontosTuristicos1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    // Densidade (MENOR vence)
    printf("Densidade Populacional: ");
    if(densidade1 < densidade2){
        printf("Carta 1 venceu!\n");
    } else if(densidade2 < densidade1){
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    // PIB per capita
    printf("PIB per Capita: ");
    if(pibPerCapita1 > pibPerCapita2){
        printf("Carta 1 venceu!\n");
    } else if(pibPerCapita2 > pibPerCapita1){
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    // Super Poder
    printf("Super Poder: ");
    if(superPoder1 > superPoder2){
        printf("Carta 1 venceu!\n");
    } else if(superPoder2 > superPoder1){
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    return 0;
}
