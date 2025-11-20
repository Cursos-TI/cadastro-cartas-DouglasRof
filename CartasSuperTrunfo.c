#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    char SelCarta;
    int SelAtri, SelAtri2;
    char estado[5] = "SP", cidade[30] = "São Paulo";
    char codcarta[3] = "SP1"; 
    int populacao = 11900000, npturisticos = 300;
    float area = 248200, pib = 828900000;
    float densipop = 7528.26, pibper = 60805.18;

    char estado2[5] = "RJ", cidade2[30] = "Rio de Janeiro";
    char codcarta2[3] = "RJ1"; 
    int populacao2 = 6700000, npturisticos2 = 520;
    float area2 = 1200, pib2 = 360000000;
    float densipop2 = 5.556, pibper2 = 48800;
    int resultado1, resultado2;
    float somares;

    /*=======================*/

     printf("====== Super Trunfo ======\n");
    printf("Selecione sua carta: \n");
    printf("1. Carta A\n");
    printf("2. Carta B\n");
    scanf("%d", &SelCarta);

    switch (SelCarta)
    {
    case 1:
        printf("*** Carta 1 Selecionada ***\n");
        printf("População: %d\n", populacao);
        printf("Área: %.2f\n", area);
        printf("PIB: %.2f\n", pib);
        printf("Pontos Turísticos: %d\n", npturisticos);
        printf("Densidade Demográfica: %.2f\n", densipop);
        break;
    case 2:
        printf("Carta 2 Selecionada\n");
        printf("População: %d\n", populacao2);
        printf("Área: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Pontos Turísticos: %d\n", npturisticos2);
        printf("Densidade Demográfica: %.2f\n", densipop2);
        break;
    
    default:
        printf("Seleção inválida.");
        break;
    }

    printf("Selecione um atributo: \n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Pontos turísticos.\n");
    printf("5. Densidade populacional.\n");
    printf("6. PIB per capita.\n");
    scanf("%d", &SelAtri);

    switch (SelAtri)
    {
    case 1:
        resultado1 = populacao > populacao2 ? 1 : 0;
        break;
    case 2:
        resultado1 = area > area2 ? 1 : 0;
        break;
    case 3:
        resultado1 = pib > pib2 ? 1 : 0;
        break;
    case 4:
        resultado1 = npturisticos > npturisticos2 ? 1 : 0;
        break;
    case 5:
        resultado1 = densipop < densipop2 ? 1 : 0;
        break;
    case 6:
        resultado1 = pibper > pibper2 ? 1 : 0;
        break;
    
    default:
        printf("Seleção inválida!");
        break;
    }

    printf("Selecione um atributo: \n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Pontos turísticos.\n");
    printf("5. Densidade populacional.\n");
    printf("6. PIB per capita.\n");
    scanf("%d", &SelAtri2);

    if (SelAtri == SelAtri2){
        printf("Você já selecionou este atributo!\n");
    } else {
        switch (SelAtri2)
        {
        
            case 1:
        resultado1 = populacao > populacao2 ? 1 : 0;
        break;
            case 2:
        resultado1 = area > area2 ? 1 : 0;
        break;
            case 3:
        resultado1 = pib > pib2 ? 1 : 0;
        break;
            case 4:
        resultado1 = npturisticos > npturisticos2 ? 1 : 0;
        break;
            case 5:
        resultado1 = densipop < densipop2 ? 1 : 0;
        break;
            case 6:
        resultado1 = pibper > pibper2 ? 1 : 0;
        break;
    
            default:
        printf("Seleção inválida!");
        break;
        }
    }
    if ((resultado1 = 1) &&(resultado2 = 1)){
        printf("Você venceu!\n");
    } else if (resultado1 != resultado2){
        printf("Empate!\n");
    } else {
        printf("Você perdeu!\n");
    }
