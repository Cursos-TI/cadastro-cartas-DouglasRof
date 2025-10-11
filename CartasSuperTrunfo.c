#include <stdio.h>

int main(){

    char estado[20], cidade[20];
    char cdc[5]; 
    int populacao, npturisticos;
    float area, pib;

    char estado2[20], cidade2[20];
    char cdc2[5]; 
    int populacao2, npturisticos2;
    float area2, pib2;
     
    printf("----Registro carta 1---- \n");

    printf("Qual o Estado? \n");
    scanf("%s", &estado);
    printf("Qual o código da Carta? \n");
    scanf("%s", &cdc);
    printf("Qual o nome da cidade? \n");
    scanf("%s", &cidade);
    printf("Qual a população? \n");
    scanf("%d", &populacao);
    printf("Qual a área em Km²? \n");
    scanf("%f", &area);
    printf("Qual o PIB? \n");
    scanf("%f", &pib);
    printf("Quantos pontos turisticos? \n");
    scanf("%d", &npturisticos);

    printf("----Registro carta 2---- \n");

    printf("Qual o Estado? \n");
    scanf("%s", &estado2);
    printf("Qual o código da Carta? \n");
    scanf("%s", &cdc2);
    printf("Qual o nome da cidade? \n");
    scanf("%s", &cidade2);
    printf("Qual a população? \n");
    scanf("%d", &populacao2);
    printf("Qual a área em Km²? \n");
    scanf("%f", &area2);
    printf("Qual o PIB? \n");
    scanf("%f", &pib2);
    printf("Quantos pontos turisticos? \n");
    scanf("%d", &npturisticos2);


    /*=======================*/

    printf("---Carta 1---\n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", cdc);
    printf("Noma da Cidade: %s \n", cidade);
    printf("População: %d pessoas\n", populacao);
    printf("Área: %.2f KM²\n", area);
    printf("PIB: R$%.2f \n", pib);
    printf("Pontos turisticos: %d \n", npturisticos);

    printf("---Carta 2---\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", cdc2);
    printf("Noma da Cidade: %s \n", cidade2);
    printf("População: %d pessoas\n", populacao2);
    printf("Área: %.2f KM²\n", area2);
    printf("PIB: R$%.2f \n", pib2);
    printf("Pontos turisticos: %d \n", npturisticos2);

    return 0;


}