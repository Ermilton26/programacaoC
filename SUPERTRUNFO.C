#include <stdio.h>

int main() {

    
    char estado [50], estado02 [50];
    char codigo [50], codigo02 [50];
    char cidade [50], cidade02 [50];
    int populacao, pontosturisticos, populacao02, pontosturisticos02;
    float area, pib, area02, pib02;

    printf("CARTA 01: \n");
    printf("digite seu estado: ");
    scanf("%s", estado);
    
    printf("digite o codigo: ");
    scanf("%s", codigo);

    printf("digite o cidade: ");
    scanf("%s", cidade);

    printf("digite a populacao: ");
    scanf("%d", &populacao);

    printf("digite a area: ");
    scanf("%f", &area);

    printf("digite o pib: ");
    scanf("%f", &pib);

    printf("digite a pontos turisticos: ");
    scanf("%d", &pontosturisticos);

    

    printf("CARTA 02: \n");
    printf("digite seu estado: ");
    scanf("%s", estado02);

    printf("digite o codigo: ");
    scanf("%s", codigo02);

    printf("digite o cidade: ");
    scanf("%s", cidade02);

    printf("digite a populacao: ");
    scanf("%d", &populacao02);

    printf("digite a area: ");
    scanf("%f", &area02);

    printf("digite o pib: ");
    scanf("%f", &pib02);

    printf("digite a pontos turisticos: ");
    scanf("%d", &pontosturisticos02);

    printf("nome do estado : %s \n", estado);
    printf("codigo : %s \n", codigo);
    printf("nome da cidade : %s \n", cidade);
    printf("populacao : %d \n", populacao);
    printf("area : %f \n", area);
    printf("pib : %f \n", pib);
    printf("pontos turisticos : %d \n", pontosturisticos);


    printf("nome do estado : %s \n", estado02);
    printf("codigo : %s \n", codigo02);
    printf("nome da cidade : %s \n", cidade02);
    printf("populacao : %d \n", populacao02);
    printf("area : %f \n", area02);
    printf("pib : %f \n", pib02);
    printf("pontos turisticos : %d \n", pontosturisticos02);



return 0;

}