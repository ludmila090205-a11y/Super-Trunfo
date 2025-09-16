#include <stdio.h>

int main()
{    // Declaramos as variáveis
    char estado1[2], estado2[2], codigo1[4], codigo2[4], nomecidade1[50], nomecidade2[50];
    int pontos1, pontos2;
    float area1, area2, pib1, pib2, dp1, dp2, pibpc1, pibpc2, superPoder1, superPoder2;
    long int populacao1, populacao2;

    // Dados da carta 1 solicitados
    printf("DADOS CARTA 1: \n");
    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", nomecidade1);

    printf("População: ");
    scanf("%ld", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);
    printf("\n");

    // Dados da carta 2 solicitados
    printf("DADOS CARTA 2: \n");
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nomecidade2);

    printf("População: ");
    scanf("%ld", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);
    printf("\n");

    // Fórmulas matemáticas(Densidade populacional e PIB per Capita)
    dp1 = ((float)populacao1 / area1);
    dp2 = ((float)populacao2 / area2);

    pibpc1 = (float)pib1 / populacao1;
    pibpc2 = (float)pib2 / populacao2;

    superPoder1 = (float) (populacao1 + area1 + pib1 + pontos1 + pibpc1 + dp1);
    superPoder2 = (float) (populacao2 + area2 + pib2 + pontos2 + pibpc2 + dp2);


    // Mostrar dados da carta 1
    printf("LEITURA DA CARTA 1: \n");
    printf("Estado: %s \nCódigo: %s \nNome da Cidade: %s \nPopulação: %ld \nÁrea: %.2fkm \nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estado1, codigo1, nomecidade1, populacao1, area1, pib1, pontos1);
    printf("Densidade populacional: %.2f hab/km\n", dp1);
    printf("PIB Per Capita: %.2f reais\n", pibpc1);
    printf("\n");

    
    // Mostrar dados da carta 2
    printf("LEITURA DA CARTA 2: \n");
    printf("Estado: %s \nCódigo: %s \nNome da Cidade: %s \nPopulação: %ld \nÁrea: %.2fkm \nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estado2, codigo2, nomecidade2, populacao2, area2, pib2, pontos2);
    printf("Densidade populacional: %.2f hab/km\n", dp2);
    printf("PIB Per Capita: %.2f reais\n", pibpc2);
    printf("\n");

    //Operadores relacionais

    printf("\nComparação de Cartas (Atributo: Densidade Populacional): \n\n");
    printf("Carta 1 - São Paulo (SP): %f\n", dp1);
    printf("Carta 2 - Rio de Janeiro (SP): %f\n", dp2);


    if (dp1 > dp2){
        printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
    } else {
        printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    }
    
    return 0;


}