#include <stdio.h> //utilizado para printf scanf
#include <stdlib.h> //utilizado para atoi e atof
#include <string.h> //utilizado para fgets

//inicio do codigo
int main() {

    //variáveis da carta 1
    char estado[5];
    char codigo[5];
    char cidade[50];
    char buffer[50];
    int populacao;
    float areaPopulacional;
    int pontosTuristicos;
    float pib;

    //introdução
    printf("Seja bem-vindo ao jogo do Super Trunfo! \n");
    printf("Vamos criar 2 cartas, tema: Estados do Brasil. \n");
    printf("\nCriação da carta 1: \n");
    
    //pergunta sobre o estado da carta 1
    printf("Digite o estado da carta (A até H): \n");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = 0;

    //pergunta sobre o codigo do estado da carta 1
    printf("Digite o codigo deste estado (exemplo: A01, H04): \n");
    fgets(codigo, sizeof(codigo), stdin);
    codigo[strcspn(codigo, "\n")] = 0;


    //pergunta sobre o nome da cidade da carta 1
    printf("Digite o nome da cidade: \n");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    //pergunta sobre a população da carta 1
    printf("Digite a população da cidade escolhida (em número inteiro, sem pontos): \n");
    fgets(buffer, sizeof(buffer), stdin);
    populacao = atoi(buffer);

    //pergunta sobre a area populacional da carta 1
    printf("Digite a área populacional da cidade em km² (Exemplo: 123.4 ou 1234.5): \n");
    fgets(buffer, sizeof(buffer), stdin);
    areaPopulacional = atof(buffer);

    //pergunta sobre os pontos turisticos da carta 1
    printf("Digite quantos pontos turísticos tem na cidade: \n");
    fgets(buffer, sizeof(buffer), stdin);
    pontosTuristicos = atoi(buffer);

    //pergunta sobre o pib da carta 1
    printf("Digite o PIB aproximado da cidade (Exemplo: 1.000.000 ou 1.000.000.000): \n");
    fgets(buffer, sizeof(buffer), stdin);
    pib = atof(buffer);

    //
    // fim da carta 1 e inicio da carta 2
    //

   //variáveis da carta 2
    char estado1[5];
    char codigo1[5];
    char cidade1[50];
    char buffer1[50];
    int populacao1;
    float areaPopulacional1;
    int pontosTuristicos1;
    float pib1;


    //introdução da carta 2
    printf("\nAgora vamos para a criação da carta 2: \n");
    printf("\nCriação da carta 2: \n");

    //pergunta sobre o estado da carta 2
    printf("Digite o estado da carta (A até H): \n");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0;

    //pergunta sobre o codigo do estado da carta 2
    printf("Digite o codigo deste estado (exemplo: A01, H04): \n");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = 0;

    //pergunta sobre o nome da cidade da carta 2
    printf("Digite o nome da cidade: \n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    //pergunta sobre a população da carta 2
    printf("Digite a população da cidade escolhida (em número inteiro, sem pontos): \n");
    fgets(buffer, sizeof(buffer), stdin);
    populacao1 = atoi(buffer);

    //pergunta sobre a area populacional da carta 2
    printf("Digite a área populacional da cidade em km² (Exemplo: 123.4 ou 1234.5): \n");
    fgets(buffer, sizeof(buffer), stdin);
    areaPopulacional1 = atof(buffer);

    //pergunta sobre os pontos turisticos da carta 2
    printf("Digite quantos pontos turísticos tem na cidade: \n");
    fgets(buffer, sizeof(buffer), stdin);
    pontosTuristicos1 = atoi(buffer);

    //pergunta sobre o pib da carta 2
    printf("Digite o PIB aproximado da cidade (Exemplo: 1.000.000 ou 1.000.000.000): \n");
    fgets(buffer, sizeof(buffer), stdin);
    pib1 = atof(buffer);

    // Exibir os dados da carta 1
    printf("\n*Carta 1: *\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.1f km²\n", areaPopulacional);
    printf("Pontos turísticos: %d\n", pontosTuristicos);
    printf("PIB: %.1f de reais\n", pib);

    // Exibir os dados da carta 2
    printf("\n*Carta 2: *\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.1f km²\n", areaPopulacional1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("PIB: %.1f de reais\n", pib1);

    return 0;
}

//utilizado fgets uma melhor funcionabilidade e poder escrever com espaços
//utilizado atoi e atof para corrigir o erro de duas perguntas sair juntos por combinar fgets com scanf
//buffer[] combinado com atoi e atof para corrigir erro de fgets e scanf junto
//estava tendo muito problemas com perguntas saindo junto, tive que mudar um pouco para ficar 100%