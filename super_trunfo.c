#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8"); 

    char c1_estado[50], c2_estado[50], c1_cidade[50], c2_cidade[50];
    int c1_populacao, c2_populacao, c1_turismo, c2_turismo; 
    float c1_area, c2_area, c1_pib, c2_pib;
    char c1_codCarta[4] = "A01";
    char c2_codCarta[4] = "B02";

    //Carta1
    printf("\nInsira os Dados da Carta 1:\n");

    printf("Digite o nome do Estado: ");
    fgets(c1_estado, sizeof(c1_estado), stdin);
    c1_estado[strcspn(c1_estado, "\n")] = 0;

    printf("Digite o nome da Cidade: ");
    fgets(c1_cidade, sizeof(c1_cidade), stdin);
    c1_cidade[strcspn(c1_cidade, "\n")] = 0;

    printf("Digite a População: ");
    scanf("%d", &c1_populacao);
    getchar();

    printf("Digite a Área: ");
    scanf("%f", &c1_area);
    getchar();

    printf("Digite o PIB: ");
    scanf("%f", &c1_pib);
    getchar();

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &c1_turismo);
    getchar();

    //Carta2
    printf("\nInsira os Dados da Carta 2:\n");

    printf("Digite o nome do Estado: ");
    fgets(c2_estado, sizeof(c2_estado), stdin);
    c2_estado[strcspn(c2_estado, "\n")] = 0;

    printf("Digite o nome da Cidade: ");
    fgets(c2_cidade, sizeof(c2_cidade), stdin);
    c2_cidade[strcspn(c2_cidade, "\n")] = 0;

    printf("Digite a População: ");
    scanf("%d", &c2_populacao);
    getchar();

    printf("Digite a Área: ");
    scanf("%f", &c2_area);
    getchar();

    printf("Digite o PIB: ");
    scanf("%f", &c2_pib);
    getchar();

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &c2_turismo);
    getchar();

    //Exibição dos dados
    printf("\n\n");

    printf("Carta 1:\n");
    printf("Código: %s\n", c1_codCarta); 
    printf("Estado: %s\n", c1_estado);
    printf("Cidade: %s\n", c1_cidade);
    printf("População: %d\n", c1_populacao);
    printf("Área: %.2f km²\n", c1_area);    
    printf("PIB: %.2f bilhões de reais\n", c1_pib);
    printf("Pontos turísticos: %d\n", c1_turismo);
    printf("\n");

    printf("Carta 2:\n");
    printf("Código: %s\n", c2_codCarta);
    printf("Estado: %s\n", c2_estado);
    printf("Cidade: %s\n", c2_cidade);
    printf("População: %d\n", c2_populacao);
    printf("Área: %.2f km²\n", c2_area);
    printf("PIB: %.2f bilhões de reais\n", c2_pib);
    printf("Pontos turísticos: %d\n", c2_turismo);
    printf("\n");

    return 0;
}
