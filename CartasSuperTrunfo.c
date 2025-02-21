#include <stdio.h>

//variaveis
int main() {
    char estado [50];
    char cidade [50];
    char UF[5]
    int populacao;
    float areaPopulacional;
    int pontosTuristicos;
    float pib;

    printf("Seja bem vindo ao jogo do super trunfo!");
    printf("Vamos criar 2 cartas, tema: Estados do Brasil.");
    printf("Criação da carta 1: \n");
    //explicação/inicio

    printf("  \n");
    //separar inicio e começar carta 1

    printf("Digite um estado do Brasil: \n");
    scanf("%s", estado);

    printf("Digite uma cidade deste estado: \n");
    scanf("%s", nome);

    printf("Digite a UF deste estado escolhido: \n");
    scanf("%s", UF);

    printf("Digite a quantidade de população da cidade escolhida (7/8 digitos se for milhão e 10/11 digitos se for bilhão:  \n");
    scanf("%d",&populacao);
    //exemplo: 1234567 (numero inteiro)
    
    printf("Digite a area populacional da cidade em km²(exemplo: 123.4 ou 1234.5): \n");
    scanf("%f",&areaPopulacional);
    //exemplo: 123.45 (numero com ponto(virgula))

    printf("Digite quantos pontos turisticos tem na cidade: \n");
    scanf("%d",&pontosTuristicos);
    //exemplo: 25 (numero inteiro)

    printf("Digite o pib aproximado(exemplo: 12.345(B) ou (M) 1.234.0): \n");
    scanf("%f",&pib);
    //exemplo: 25.3 (numero com virtula(ponto))

    return 0;
}