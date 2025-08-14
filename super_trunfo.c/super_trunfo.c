// Inclusão da biblioteca padrão de entrada e saída
#include <stdio.h>
 
//Onde o programa começa a execução
int main() {

    //Declarando variáveis do tipo char, float e int do Cartão 1
    char estado = 'C';
    char codigo [50] = "C01";
    char cidade [50] = "Manaus";
    int populacao = 1903000;
    float area = 10507.93;
    float pib = 109.83;
    int pontos_turisticos = 11;

    //Exibindo resultado das variáveis aplicadas do Cartão 1
    printf("Carta 1:\nEstado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);

    //Declarando variáveis do tipo char, float e int do Cartão 2
    char estado2 = 'G';
    char codigo2 [50] = "G02";
    char cidade2 [50] = "Curitiba";
    int populacao2 = 1757000;
    float area2 = 421.37;
    float pib2 = 97.93;
    int pontos_turisticos2 = 17;

    //Exibindo resultado das variáveis aplicadas do Cartão 2
    printf("\nCartão 2:\nEstado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    //Indicação de que o programa terminou com sucesso
    return 0;

}