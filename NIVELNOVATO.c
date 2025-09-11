#include <stdio.h>

int main() {

 //Declaramos as variáveis

    char estado1[2], estado2[2], codigo1[4], codigo2[4], nomecidade1[50], nomecidade2[50];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;


//Dados da carta 1 solicitados

    printf("DADOS CARTA 1: \n");
    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", nomecidade1);

    printf("População: ");
    scanf("%i", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%i", &pontos1);
    printf("\n");


//Dados da carta 2 solicitados


    printf("DADOS CARTA 2: \n");
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nomecidade2);

    printf("População: ");
    scanf("%i", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%i", &pontos2);
    printf("\n");




    //Mostrar dados da carta 1
    printf("LEITURA DA CARTA 1: \n");
    printf("Estado: %s \nCódigo: %s \nNome da Cidade: %s \nPopulação: %i \nÁrea: %f \nPIB: %f \nNúmero de Pontos Turísticos: %i \n", estado1, codigo1, nomecidade1, populacao1, area1, pib1, pontos1);
    printf("\n");




    //Mostrar dados da carta 2

    printf("LEITURA DA CARTA 2: \n");
    printf("Estado: %s \nCódigo: %s \nNome da Cidade: %s \nPopulação: %i \nÁrea: %f \nPIB: %f \nNúmero de Pontos Turísticos: %i \n", estado2, codigo2, nomecidade2, populacao2, area2, pib2, pontos2);


}