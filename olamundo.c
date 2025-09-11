#include <stdio.h>

int main () {
    int idade;
    int quantidade;
    float altura;
    char opcao;
    char nome[20];

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade );

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %2f\n", altura);

    printf("Digite a opção: ");
    scanf(" %c", &opcao);
    printf("O nome é: %s", &opcao);
}