#include <stdio.h>
#include <string.h>


int main() {

    //variaveis carta 1
    char estado[50];
    char cidade[50];
    char UF[5];
    int populacao;
    float areaPopulacional;
    int pontosTuristicos;
    float pib;

    printf("Seja bem vindo ao jogo do super trunfo! \n");
    printf("Vamos criar 2 cartas, tema: Estados do Brasil. \n");
    //explicação/inicio

    printf("  \n");
    //separar inicio e começar carta 1

    printf("\nCriação da carta 1: \n");

    printf(" \n");
    //separar

    printf("Digite um estado do Brasil: \n");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = 0;
    //fgets para ter a possibilidade de acrescentar espaços

    printf("Digite uma cidade deste estado: \n");
    fgets(cidade, sizeof(cidade), stdin);
    //fgets para ter a possibilidade de acrescentar espaços
    cidade[strcspn(cidade, "\n")] = 0;
    // Remover o '\n' extra da string

    printf("Digite a UF deste estado escolhido: \n");
    printf("Exemplo: RJ, SP, PR, SC... \n");
    fgets(UF, sizeof(UF), stdin);
    UF[strcspn(UF, "\n")] = 0;
    //fgets para ter a possibilidade de acrescentar espaços

    printf("Digite a população da cidade escolhida (em número inteiro): \n");
    printf("(Exemplo: se a população for 1 milhão, digite 1000000 e \n");
    printf("se for 1 bilhão, digite 1000000000.)\n");
    scanf("%d",&populacao);
    //exemplo: 1234567 (numero inteiro)

    printf("Digite a area populacional da cidade em km²(exemplo: 123.4 ou 1234.5): \n");
    scanf("%f",&areaPopulacional);
    //exemplo: 123.45 (numero com ponto(virgula))

    printf("Digite quantos pontos turisticos tem na cidade: \n");
    scanf("%d",&pontosTuristicos);
    //exemplo: 25 (numero inteiro)

    printf("Digite o pib aproximado: \n");
    printf("(Exemplo em caso de milhão: 1.000.000, e  \n");
    printf("em caso de bilhão: 1.000.000.000.)  \n");
    scanf("%f",&pib);
    //exemplo: 25.3 (numero com virgula(ponto)
    
    while(getchar() != '\n'); 
    //corrigir erro de pergunta junto/ limpar buffer

    printf(" \n");

    printf("\nAgora vamos para a criação da carta 2: \n");

    //variaveis carta 2:
    char estado1[50];
    char cidade1[50];
    char UF1[5];
    int populacao1;
    float areaPopulacional1;
    int pontosTuristicos1;
    float pib1;

    printf(" \n");
    //somente para separar

    printf("Digite um estado do Brasil: \n");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0;
    //fgets para ter a possibilidade de acrescentar espaços

    printf("Digite uma cidade deste estado: \n");
    fgets(cidade1, sizeof(cidade1), stdin);
    //fgets para ter a possibilidade de acrescentar espaços
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Digite a UF deste estado escolhido: \n");
    printf("Exemplo: RJ, SP, PR, SC... \n");
    fgets(UF1, sizeof(UF1), stdin);
    UF1[strcspn(UF1, "\n")] = 0;
    //fgets para ter a possibilidade de acrescentar espaços

    printf("Digite a população da cidade escolhida (em número inteiro): \n");
    printf("(Exemplo: se a população for 1 milhão, digite 1000000 e \n");
    printf("se for 1 bilhão, digite 1000000000.)\n");
    scanf("%d",&populacao1);
    //exemplo: 1234567 (numero inteiro)
    while(getchar() != '\n'); 
    //corrigir erro de pergunta junto/ limpar buffer

    printf("Digite a area populacional da cidade em km²(exemplo: 123.4 ou 1234.5): \n");
    scanf("%f",&areaPopulacional1);
    //exemplo: 123.45 (numero com ponto(virgula))
    while(getchar() != '\n'); 
    //corrigir erro de pergunta junto/ limpar buffer

    printf("Digite quantos pontos turisticos tem na cidade: \n");
    scanf("%d",&pontosTuristicos1);
    //exemplo: 25 (numero inteiro)
    while(getchar() != '\n'); 
    //corrigir erro de pergunta junto/ limpar buffer

    printf("Digite o pib aproximado: \n");
    printf("(Exemplo em caso de milhão: 1.000.000, e  \n");
    printf("em caso de bilhão: 1.000.000.000.)  \n");
    scanf("%f",&pib1);
    //exemplo: 25.3 (numero com virgula(ponto)
    while(getchar() != '\n'); 
    //corrigir erro de pergunta junto/ limpar buffer
 
    //

    // Dados da carta 1
    printf("\n*Carta 1: *\n");
    printf("Estado: %s\n", estado);
    printf("Nome da cidade: %s\n", cidade);
    printf("UF: %s\n", UF);
    printf("População: %d\n", populacao);
    printf("Área: %.1f km²\n", areaPopulacional);
    printf("Pontos turísticos: %d\n", pontosTuristicos);
    printf("PIB: %.1f bilhões de reais\n", pib);

    // Dados da carta 2
    printf("\n*Carta 2: *\n");
    printf("Estado: %s\n", estado1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("UF: %s\n", UF1);
    printf("População: %d\n", populacao1);
    printf("Área: %.1f km²\n", areaPopulacional1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("PIB: %.1f bilhões de reais\n", pib1);

    printf("  \n");

    return 0;
}

//unica solução que encontrei de as perguntas não ficarem juntas foi utilizando while(getchar() != '\n'); 