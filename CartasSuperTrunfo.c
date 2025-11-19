#include <stdio.h>



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
/*
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
*/

// Novos estudos e técnicas aplicada a atividade

int main ()
{
/*==========================*/ 
    char SelCarta;
    int SelAtri;
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
/*==========================*/    

    printf("------ Super Trunfo ------\n");
    printf("Selecione sua carta: \n");
    printf("A. Carta 1\n");
    printf("B. Carta 2\n");
    scanf("%c", &SelCarta);
    
    

    switch (SelCarta)
    {
    case 'A':
        printf("*** Carta 1 Selecionada ***\n");
        printf("População: %d\n", populacao);
        printf("Área: %.2f\n", area);
        printf("PIB: %.2f\n", pib);
        printf("Pontos Turísticos: %d\n", npturisticos);
        printf("Densidade Demográfica: %d\n", densipop);
        break;
    case 'a':
        printf("*** Carta 1 Selecionada ***\n");
        printf("População: %d\n", populacao);
        printf("Área: %.2f\n", area);
        printf("PIB: %.2f\n", pib);
        printf("Pontos Turísticos: %d\n", npturisticos);
        printf("Densidade Demográfica: %.2f\n", densipop);
        break;
    case 'B':
        printf("Carta 2 Selecionada\n");
        printf("População: %d\n", populacao2);
        printf("Área: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Pontos Turísticos: %d\n", npturisticos2);
        printf("Densidade Demográfica: %.2f\n", densipop2);
        break;
    case 'b':
        printf("Carta 2 Selecionada\n");
        printf("População: %d\n", populacao2);
        printf("Área: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Pontos Turísticos: %d\n", npturisticos2);
        printf("Densidade Demográfica: %d\n", densipop2);
        break;
    
    default:
        printf("Opção Inválida\n");
        break;
    }

    printf("--- Selecione o atributo a se comparar: ---\n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos turísticos \n");
    printf("5. Densidade Demográfica \n");
    scanf("%d", &SelAtri);

    switch (SelAtri)
    {
    case 1:
        printf("*** Atributo População Selecionado! ***\n");
        if (populacao > populacao2){
            printf("Carta 1: %c, Venceu!", cidade);
        } else {
            printf("Carta 2: %c, Venceu!", cidade2);
        }
        break;
    case 2:
        printf("*** Atributo Área Selecionado! ***\n");
        if (area > area2){
            printf("Carta 1: %c, Venceu!", cidade);
        } else {
            printf("Carta 2: %c, Venceu!", cidade2);
        }
        break;
    case 3:
        printf("*** Atributo PIB Selecionado! ***\n");
        
        if (pib > pib2){
            printf("Carta 1: %c, Venceu!", cidade);
        } else {
            printf("Carta 2: %c, Venceu!", cidade2);
        }
        break;
    case 4:
        printf("*** Atributo Pontos Turísticos Selecionado! ***\n");
       
        if (npturisticos > npturisticos2){
            printf("Carta 1: %c, Venceu!", cidade);
        } else {
            printf("Carta 2: %c, Venceu!", cidade2);
        }
        break;
    case 5:
        printf("*** Atributo Densidade Demográfica Selecionado! ***\n");
        
        if (densipop < densipop2){
            printf("Carta 1: %c, Venceu!", cidade);
        } else {
            printf("Carta 2: %c, Venceu!", cidade2);
        }
        break;
    default:
        printf("Opção Inválida\n");
        break;
    }

    
}
