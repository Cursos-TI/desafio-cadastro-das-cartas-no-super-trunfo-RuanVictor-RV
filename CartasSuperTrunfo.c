#include <stdio.h>

int main() {
    char codigo [50];
    char nome [50];
    int populacao;
    float areaPopulacional;
    float pib;
    int pontosTuristicos;
    
    printf("Jogo do super trunfo! \n");

    printf("Digite a codigo da cidade: \n");
    scanf("%s", codigo);
    
    printf("Digite o nome da cidade: \n");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a quantidade de população: \n");
    scanf("%d",&populacao);
    
    printf("Digite a area populacional: \n");
    scanf("%f",&areaPopulacional);

    printf("Digite o pib: \n");
    scanf("%f",&pib);

    printf("Digite os pontos turisticos: \n");
    scanf("%d",&pontosTuristicos);


    return 0;
}