#include <stdio.h>

int main() {

    char estado, codigo[4], nome[20];
    int popul, pontos;
    float area, pib;
    
    printf ("CADASTRO DE CARTAS - SUPER TRUNFO \n");
    printf ("------------------------------------- \n");
    printf ("CADASTRO - CARTA 1: \n");
    printf ("Digite a letra corresponde ao Estado (de A a H): ");
    scanf ("%c", &estado );
    printf ("Digite o código da carta: ");
    scanf (" %s", &codigo);
    getchar(); // usado para limpar o buffer e impedir que o programa "pule" o próximo scanf
    printf ("Digite o nome da cidade: ");
    fgets (nome, 20, stdin);
    printf ("Digite a população da cidade: ");
    scanf ("%i", &popul);
    printf ("Digite a Área da cidade em km²: ");
    scanf ("%f", &area);
    printf ("Digite o PIB da cidade: ");
    scanf ("%f", &pib);
    printf ("Digite o número de pontos turísticos: ");
    scanf ("%i", &pontos);
    printf ("---------------------------------------- \n");
    printf ("Carta 1: \n");
    printf ("Estado: %c\n", estado);
    printf ("Código: %s\n", codigo);
    printf ("Nome da cidade: %s", nome);
    printf ("População: %i\n", popul);
    printf ("Área: %f\n", area);
    printf ("PIB: %f\n", pib);
    printf ("Número de pontos turísticos: %i\n", pontos);
    printf ("-------------------------------------------- \n");

    char estado2, codigo2[4], nome2[20];
    int popul2, pontos2;
    float area2, pib2;

    getchar(); // usado para limpar o buffer e impedir que o programa "pule" o próximo scanf
    printf ("CADASTRO - CARTA 2: \n");
    printf ("Digite a letra corresponde ao Estado (de A a H): ");
    scanf ("%c", &estado2);
    printf ("Digite o código da carta: ");
    scanf (" %s", &codigo2);
    getchar();
    printf ("Digite o nome da cidade: ");
    fgets (nome2, 20, stdin);
    printf ("Digite a população da cidade: ");
    scanf ("%i", &popul2);
    printf ("Digite a Área da cidade em km²: ");
    scanf ("%f", &area2);
    printf ("Digite o PIB da cidade: ");
    scanf ("%f", &pib2);
    printf ("Digite o número de pontos turísticos: ");
    scanf ("%i", &pontos2);
    printf ("---------------------------------------- \n");
    printf ("Carta 2: \n");
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da cidade: %s", nome2);
    printf ("População: %i\n", popul2);
    printf ("Área: %f\n", area2);
    printf ("PIB: %f\n", pib2);
    printf ("Número de pontos turísticos: %i", pontos2);



    return 0;
}