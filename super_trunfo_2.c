/*
    Pseudocodigo:
    Objetivo: SuperTrunfo - Calculando Densidade Populacional e PIB per Capita
        1. Calcular a Densidade Populacional
        2. Calcular o PIB per Capita
        3. Exibir os resultados
    Inicio
        Duas Cartas (Cod: A01 e A02), solicitações para cada carta:
        1. Solicitar ao Usuário o Estado, Cidade, População, PIB (Bilhões de Reais), Área (km²), Numero de Pontos Turísticos.
        2. Calcular a Densidade Populacional:
            Densidade Populacional = População / Área
        3. Calcular o PIB per Capita:
            PIB per Capita = PIB / População
        4. Exibir os resultados:
            - Carta completa com os dados do Estado, Cidade, População, PIB, Área, Numero de Pontos Turísticos, densidade Populacional e PIB per Capita.
    Fim
*/

#include <stdio.h>
#include <string.h>

// Coletar Dados das Cartas
void coletarDadosCarta(char *c1_estado, char *c1_cidade, int *c1_populacao, float *c1_pib, float *c1_area, int *c1_pontosTuristicos,
    char *c2_estado, char *c2_cidade, int *c2_populacao, float *c2_pib, float *c2_area, int *c2_pontosTuristicos
)

{
    
    printf("\n");
    printf("-----==== Bem-vindo ao SuperTrunfo! ====-----\n");
    printf("\n");
    printf("Digite os dados da Carta 1:\n");
    printf("Digite o nome do Estado: ");
    fgets(c1_estado, 50, stdin);
    c1_estado[strcspn(c1_estado, "\n")] = 0;

    printf("Digite o nome da Cidade: ");
    fgets(c1_cidade, 50, stdin);
    c1_cidade[strcspn(c1_cidade, "\n")] = 0;

    printf("Digite a Populacao: ");
    scanf("%d", c1_populacao);
    printf("Digite o PIB (em Bilhoes de Reais): ");
    scanf("%f", c1_pib);
    printf("Digite a Area (em km²): ");
    scanf("%f", c1_area);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", c1_pontosTuristicos);
    getchar();
    
    printf("\n");
    printf("Digite os dados da Carta 2:\n");
    printf("Digite o nome do Estado: ");
    fgets(c2_estado, 50, stdin);
    c2_estado[strcspn(c2_estado, "\n")] = 0;

    printf("Digite o nome da Cidade: ");
    fgets(c2_cidade, 50, stdin);
    c2_cidade[strcspn(c2_cidade, "\n")] = 0;
    printf("Digite a Populacao: ");
    scanf("%d", c2_populacao);
    printf("Digite o PIB (em Bilhoes de Reais): ");
    scanf("%f", c2_pib);
    printf("Digite a Area (em km²): ");
    scanf("%f", c2_area);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", c2_pontosTuristicos);
}

// Calcular Densidade Populacional
    float c1_calcularDensidadePopulacional(int c1_populacao, float c1_area) {
        if (c1_area == 0) {
            printf("Erro: Área não pode ser zero.\n");
            return 0;
        }
        return c1_populacao / c1_area;
    }
    float c2_calcularDensidadePopulacional(int c2_populacao, float c2_area) {
        if (c2_area == 0) {
            printf("Erro: Área não pode ser zero.\n");
            return 0;
        }
        return c2_populacao / c2_area;
    }

// Calcular PIB per Capita
    float c1_calcularPibPerCapita(float c1_pib, int c1_populacao) {
        if (c1_populacao == 0) {
            printf("Erro: População não pode ser zero.\n");
            return 0;
        }
        return c1_pib / c1_populacao;
    }

    float c2_calcularPibPerCapita(float c2_pib, int c2_populacao) {
        if (c2_populacao == 0) {
            printf("Erro: População não pode ser zero.\n");
            return 0;
        }
        return c2_pib / c2_populacao;
    }

// Exibir Dados da Carta
void exibirDadosCarta(char *estado, char *cidade, int populacao, float pib, float area, int pontosTuristicos, 
    float densidadePopulacional, float pibPerCapita, char *codigoCarta) {
    
    printf("\n\n");
    printf("-----==== Carta %s ====-----\n", codigoCarta);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("PIB (Bilhoes de Reais): %.2f\n", pib);
    printf("Area (km²): %.2f\n", area);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f Reais\n", pibPerCapita);
}

// Função Principal
int main() {
    char c1_estado[50], c2_estado[50], c1_cidade[50], c2_cidade[50];
    int c1_populacao, c2_populacao, c1_turismo, c2_turismo; 
    float c1_area, c2_area, c1_pib, c2_pib;
    char c1_codCarta[4] = "A01";
    char c2_codCarta[4] = "B02";

    // Coletar Dados das Cartas
    coletarDadosCarta(c1_estado, c1_cidade, &c1_populacao, &c1_pib, &c1_area, &c1_turismo,
                      c2_estado, c2_cidade, &c2_populacao, &c2_pib, &c2_area, &c2_turismo);

    // Calcular Densidade Populacional e PIB per Capita
    float densidadePopulacionalC1 = c1_calcularDensidadePopulacional(c1_populacao, c1_area);
    float pibPerCapitaC1 = c1_calcularPibPerCapita(c1_pib, c1_populacao);
    
    float densidadePopulacionalC2 = c2_calcularDensidadePopulacional(c2_populacao, c2_area);
    float pibPerCapitaC2 = c2_calcularPibPerCapita(c2_pib, c2_populacao);

    // Exibir Dados das Cartas
    exibirDadosCarta(c1_estado, c1_cidade, c1_populacao, c1_pib, c1_area, 
                     c1_turismo, densidadePopulacionalC1, pibPerCapitaC1, c1_codCarta);
    
    exibirDadosCarta(c2_estado, c2_cidade, c2_populacao, c2_pib, c2_area,
                     c2_turismo, densidadePopulacionalC2, pibPerCapitaC2, c2_codCarta);

    return 0;   
}