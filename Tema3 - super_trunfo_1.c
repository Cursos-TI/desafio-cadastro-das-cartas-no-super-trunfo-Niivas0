/* Repetir o mesmo do Tema 2 - Desafio_Mestre */
/* 
    ALterações:
    Remover Super Poder
    Após mostrar as cartas, solicitar a seleção do parametro a ser comparado (exibir lista de opções)
    Exibir o resultado da comparação
        - Para todos os atributos, exceto Densidade Populacional, a carta com o maior valor vence.
        - Para Densidade Populacional, a carta com o menor valor vence.
*/

#include <stdio.h>
#include <string.h>

// Função principal
int main() {
    // Declaração de variáveis
    char estado[2][100];
    char codCarta[2][4];
    char nome_cidade[2][100];
    unsigned long int populacao[2];
    float area[2];
    double pib[2];
    int num_pontos_turisticos[2];
    float densidade_populacional[2];
    float pib_per_capita[2];

    // Leitura dos dados das duas cartas
    printf("\n\n");
    printf("-----==== Bem-vindo ao SuperTrunfo! ====-----\n");

    // Carta 1
    printf("\nDigite os dados da Carta 1:\n");
    printf("Digite o código da carta (3 caracteres ex.: A01): ");
    scanf("%3s", codCarta[0]);
    getchar();
    printf("Digite o nome do Estado: ");
    fgets(estado[0], 50, stdin);
    estado[0][strcspn(estado[0], "\n")] = '\0';
    printf("Digite o nome da Cidade: ");
    fgets(nome_cidade[0], 50, stdin);
    nome_cidade[0][strcspn(nome_cidade[0], "\n")] = '\0';
    printf("Digite a Populacao: ");
    scanf("%lu", &populacao[0]);
    printf("Digite a Area (em km²): ");
    scanf("%f", &area[0]);
    printf("Digite o PIB (em Bilhoes de Reais): ");
    scanf("%lf", &pib[0]);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &num_pontos_turisticos[0]);

    // Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    getchar(); 
    printf("Digite o código da carta (3 caracteres ex.: B02): ");
    scanf("%3s", codCarta[1]);
    getchar();
    printf("Digite o nome do Estado: ");
    fgets(estado[1], 50, stdin);
    estado[1][strcspn(estado[1], "\n")] = '\0';
    printf("Digite o nome da Cidade: ");
    fgets(nome_cidade[1], 50, stdin);
    nome_cidade[1][strcspn(nome_cidade[1], "\n")] = '\0';
    printf("Digite a Populacao: ");
    scanf("%lu", &populacao[1]);
    printf("Digite a Area (em km²): ");
    scanf("%f", &area[1]);
    printf("Digite o PIB (em Bilhoes de Reais): ");
    scanf("%lf", &pib[1]);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &num_pontos_turisticos[1]);


    // Cálculos para cada carta
    // Carta 1
    densidade_populacional[0] = populacao[0] / area[0];
    pib_per_capita[0] = pib[0] / populacao[0];
    float inverso_densidade1 = 1.0f / densidade_populacional[0];


    // Carta 2
    densidade_populacional[1] = populacao[1] / area[1];
    pib_per_capita[1] = pib[1] / populacao[1];
    float inverso_densidade2 = 1.0f / densidade_populacional[1];


    // Exibição dos dados das cartas
    printf("\n\n");

    printf("\n===== Cartas =====\n");
    printf("%-20s %-20s %-20s\n", "Atributo", "Carta 1", "Carta 2");
    printf("%-20s %-20s %-20s\n", "", codCarta[0], codCarta[1]);
    printf("------------------------------------------------------------\n");
    printf("%-20s %-20s %-20s\n", "Estado", estado[0], estado[1]);
    printf("%-20s %-20s %-20s\n", "Cidade", nome_cidade[0], nome_cidade[1]);
    printf("%-22s %-20lu %-20lu\n", "População", populacao[0], populacao[1]);
    printf("%-22s %-20.2f %-20.2f\n", "Área (km²)", area[0], area[1]);
    printf("%-21s %-20.2lf %-20.2lf\n", "PIB (Bilhões)", pib[0], pib[1]);
    printf("%-21s %-20d %-20d\n", "Pontos Turísticos", num_pontos_turisticos[0], num_pontos_turisticos[1]);
    printf("%-20s %-20.2f %-20.2f\n", "Densidade Pop.", densidade_populacional[0], densidade_populacional[1]);
    printf("%-20s %-20.2f %-20.2f\n", "PIB per Capita", pib_per_capita[0], pib_per_capita[1]);




    // Seleção do parâmetro para comparação
    int escolha;
    printf("\n\n");
    printf("\nEscolha o parâmetro para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("Digite o número correspondente à sua escolha: ");
    scanf("%d", &escolha);
    printf("\n");

    // Comparação e exibição do resultado
    if (escolha = 1) {
        if (populacao[0] > populacao[1]) {
            printf("População: Carta 1 venceu \n");
        } else if (populacao[0] < populacao[1]) {
            printf("População: Carta 2 venceu \n");
        } else {
            printf("População: Empate\n");
        }
    } else if (escolha = 2) {
        if (area[0] > area[1]) {
            printf("Área: Carta 1 venceu \n");
        } else if (area[0] < area[1]) {
            printf("Área: Carta 2 venceu \n");
        } else {
            printf("Área: Empate\n");
        }
    } else if (escolha = 3) {
        if (pib[0] > pib[1]) {
            printf("PIB: Carta 1 venceu \n");
        } else if (pib[0] < pib[1]) {
            printf("PIB: Carta 2 venceu \n");
        } else {
            printf("PIB: Empate\n");
        }
    } else if (escolha = 4) {
        if (num_pontos_turisticos[0] > num_pontos_turisticos[1]) {
            printf("Pontos Turísticos: Carta 1 venceu \n");
        } else if (num_pontos_turisticos[0] < num_pontos_turisticos[1]) {
            printf("Pontos Turísticos: Carta 2 venceu \n");
        } else {
            printf("Pontos Turísticos: Empate\n");
        }
    } else if (escolha = 5) {
        if (densidade_populacional[0] < densidade_populacional[1]) {
            printf("Densidade Populacional: Carta 1 venceu \n");
        } else if (densidade_populacional[0] > densidade_populacional[1]) {
            printf("Densidade Populacional: Carta 2 venceu \n");
        } else {
            printf("Densidade Populacional: Empate\n");
        }
    } else if (escolha = 6)
    {
        if (pib_per_capita[0] > pib_per_capita[1]) {
            printf("PIB per Capita: Carta 1 venceu \n");
        } else if (pib_per_capita[0] < pib_per_capita[1]) {
            printf("PIB per Capita: Carta 2 venceu \n");
        } else {
            printf("PIB per Capita: Empate\n");
        }
    }
    

    return 0;   
}