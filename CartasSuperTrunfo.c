#include <stdio.h>

int main(){

    char estado[20], cidade[20];
    char cdc[5]; 
    int populacao, npturisticos;
    float area, pib;
    float densipop, pibper;

    char estado2[20], cidade2[20];
    char cdc2[5]; 
    int populacao2, npturisticos2;
    float area2, pib2;
    float densipop2, pibper2;

    unsigned int SuperPoderA = populacao + (int)area + (int)pib + npturisticos + (int)pibper;

    unsigned int SuperPoderB = populacao2 + (int)area2 + (int)pib2 + npturisticos2 + (int)pibper2;
     
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

    densipop = populacao / area;
    pibper = pib / populacao;

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

    densipop2 = populacao2 / area2;
    pibper2 = pib2 / populacao2;

    /*=======================*/

    printf("---Carta 1---\n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", cdc);
    printf("Noma da Cidade: %s \n", cidade);
    printf("População: %d pessoas\n", populacao);
    printf("Área: %.2f KM²\n", area);
    printf("PIB: R$%.2f \n", pib);
    printf("Pontos turisticos: %d \n", npturisticos);
    printf("Densidade Populacional: %.2f\n", densipop);
    printf("PIB per Capita: %.2f\n", pibper);

    printf("---Carta 2---\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", cdc2);
    printf("Noma da Cidade: %s \n", cidade2);
    printf("População: %d pessoas\n", populacao2);
    printf("Área: %.2f KM²\n", area2);
    printf("PIB: R$%.2f \n", pib2);
    printf("Pontos turisticos: %d \n", npturisticos2);
    printf("Densidade Populacional: %.2f\n", densipop2);
    printf("PIB per Capita: %.2f\n", pibper2);
/*===========================*/
/* Modelo antido de comparação sem if else!

    printf("------ Comparação das Cartas ------\n");
    printf("(Legenda: 1 = sim, 0 = Não)\n");

    printf("Populacão: Carta A Venceu a Carta B > Resultado: %d\n", populacao > populacao2);

    printf("Área: Carta A Venceu a Carta B > Resultado: %d\n", area > area2);

    printf("PIB: Carta A Venceu a Carta B> Resultado: %d\n", pib > pib2);

    printf("Pontos Turistícos: Carta A Venceu a Carta B > Resultado: %d\n", npturisticos > npturisticos2);

    printf("Densidade Populacional: Carta A Venceu a Carta B > Resultado: %d\n", densipop > densipop2);

    printf("PIB per Capita: Carta A Venceu a Carta B > Resultado: %d\n", pibper > pibper2);

    printf("Super Poder: Carta A Venceu a Carta B > Resultado: %d\n", SuperPoderA > SuperPoderB);
*/
/*===========================*/

    printf("------ Comparação das Cartas ------\n");
/*
    if (populacao > populacao2){
        printf("Comparação do Atributo população!\n");
        printf("Carta A - %s: %d habitantes\n", cidade, populacao);
        printf("Carta B - %s: %d habitantes\n", cidade2, populacao2);
        printf("Carta A (%s) venceu!!", cidade);
    } else {
       printf("Comparação do Atributo população!\n");
        printf("Carta A - %s: %d habitantes\n", cidade, populacao);
        printf("Carta B - %s: %d habitantes\n", cidade2, populacao2);
        printf("Carta B (%s) venceu!!", cidade2); 
    }
*/
/*
    if (area > area2){
        printf("Comparação do Atributo Área!\n");
        printf("Carta A - %s: %.2f Km²\n", cidade, area);
        printf("Carta B - %s: %.2f Km²\n", cidade2, area2);
        printf("Carta A (%s) venceu!!", cidade);
    } else {
       printf("Comparação do Atributo Área!\n");
        printf("Carta A - %s: %.2f Km²\n", cidade, area);
        printf("Carta B - %s: %.2f Km²\n", cidade2, area2);
        printf("Carta B (%s) venceu!!", cidade2); 
    }
*/
/*
    if (pib > pib2){
        printf("Comparação do Atributo PIB!\n");
        printf("Carta A - %s: R$ %.2f \n", cidade, pib);
        printf("Carta B - %s: R$ %.2f \n", cidade2, pib2);
        printf("Carta A (%s) venceu!!", cidade);
    } else {
       printf("Comparação do Atributo PIB!\n");
        printf("Carta A - %s: R$ %.2f\n", cidade, pib);
        printf("Carta B - %s: R$ %.2f \n", cidade2, pib2);
        printf("Carta B (%s) venceu!!", cidade2); 
    }
*/
/*
if (densipop < densipop2){
        printf("Comparação do Atributo Densidade Populacional!\n");
        printf("Carta A - %s: %.2f PpKm²\n", cidade, densipop);
        printf("Carta B - %s: %.2f PpKm²\n", cidade2, densipop2);
        printf("Carta A (%s) venceu!!", cidade);
    } else {
       printf("Comparação do Atributo Densisdade Populacional!\n");
        printf("Carta A - %s: %.2f PpKm²\n", cidade, densipop);
        printf("Carta B - %s: %.2f PpKm²\n", cidade2, densipop2);
        printf("Carta B (%s) venceu!!", cidade2); 
    }
*/

    if (pibper > pibper2){
        printf("Comparação do Atributo PIB per capita!\n");
        printf("Carta A - %s: R$ %.2f \n", cidade, pibper);
        printf("Carta B - %s: R$ %.2f \n", cidade2, pibper2);
        printf("Carta A (%s) venceu!!", cidade);
    } else {
       printf("Comparação do Atributo PIB per capita!\n");
        printf("Carta A - %s: R$ %.2f \n", cidade, pibper);
        printf("Carta B - %s: R$  %.2f \n", pibper2, area2);
        printf("Carta B (%s) venceu!!", cidade2); 
    }

    return 0;


}
