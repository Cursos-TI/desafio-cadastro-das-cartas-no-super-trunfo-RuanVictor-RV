#include <stdio.h>

//variaveis
int main() {
    char codigo [50];
    char nome [50];
    int populacao;
    float areaPopulacional;
    int pontosTuristicos;
    float pib;

    printf("Jogo do super trunfo! \n");
    //mensagem incial

    printf("Digite a codigo da cidade (sigla): \n");
    scanf("%s", codigo);
    //exemplo: SP, CWB, RJ
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);
    //exemplo: São Paulo, Curitiba, Rio de Janeiro

    printf("Digite a quantidade de população(10/11 digitos se for bilhão, 7/8 se for milhão): \n");
    scanf("%d",&populacao);
    //exemplo: 1234567 (numero inteiro)
    
    printf("Digite a area populacional(exemplo: 123.3 ou 1.234.5 (km², não incluir letras)): \n");
    scanf("%f",&areaPopulacional);
    //exemplo: 123.45 (numero com virtula(ponto))

    printf("Digite os pontos turisticos: \n");
    scanf("%d",&pontosTuristicos);
    //exemplo: 25 (numero inteiro)

    printf("Digite o pib aproximado(exemplo: 12.345(B)): \n");
    scanf("%f",&pib);
    //exemplo: 25.3 (numero com virtula(ponto))


    return 0;
}