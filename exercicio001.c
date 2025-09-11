#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua matrícula: ");
    scanf("%i", &matricula);

    printf("Nome do aluno: %s - Matrícula: %i  \n", nome, matricula);
    printf("Idade %i - Altura %2f", idade, altura);

    return 0;

}