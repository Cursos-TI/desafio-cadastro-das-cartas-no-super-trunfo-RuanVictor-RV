#include <stdio.h>

int main() {
    //variaveis carta 1
    char estado [50];
    char cidade [50];
    char UF[5];
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
    scanf("%s", cidade);

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
    //exemplo: 25.3 (numero com virtula(ponto) 

    printf("**Carta 1:** \n");
    //apresentação da carta 1 (colocar no final 2x)

    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("UF: %s\n", UF);
    printf("População: %d habitantes\n", populacao);
    printf("Área Populacional: %.2f km²\n", areaPopulacional);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("PIB: R$ %.2f milhões\n", pib);

    //variaveis carta 2:
    char estado1[50];
    char cidade1[50];
    char UF1[5];
    int populacao1;
    float areaPopulacional1;
    int pontosTuristicos1;
    float pib1;

    //começo carta 2
    printf("Digite um estado do Brasil: \n");
    scanf("%s",&estado1);

    //repetir as perguntas colocando 1 no final para carta 2


        return 0;
    }