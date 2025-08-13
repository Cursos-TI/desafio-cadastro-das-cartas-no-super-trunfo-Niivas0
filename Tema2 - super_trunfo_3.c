/*  
    Pseudocódigo:
    1. Declaração de variáveis
       - Para cada carta (1 e 2), declarar:
            estado = string
            codigo = string
            nome_cidade = string
            populacao = unsigned long int
            area = float
            pib = double
            num_pontos_turisticos = int
            densidade_populacional = float
            pib_per_capita = float
            super_poder = float

    2. Leitura dos dados das duas cartas
        - Para cada carta i de 1 até 2: (sem usar FOR)
            Ler estado[i]
            Ler codigo[i]
            Ler nome_cidade[i]
            Ler populacao[i]
            Ler area[i]
            Ler pib[i]
            Ler num_pontos_turisticos[i]

    3. Cálculos para cada carta
        - Calcular densidade_populacional[i] = populacao[i] / area[i]
        - Calcular pib_per_capita[i] = pib[i] / populacao[i]
        - Calcular inverso_densidade = 1 / densidade_populacional[i]
        - Calcular super_poder[i] como:
            (float) populacao[i] + (float) area[i] + (float) pib[i] + (float) num_pontos_turisticos[i] + pib_per_capita[i] + inverso_densidade

    4. Comparações e exibição dos resultados
        - Escrever "Comparação de Cartas:"
        - População: maior vence
            Se populacao[1] > populacao[2] = imprimir "População: Carta 1 venceu (1)"
            Senão = imprimir "População: Carta 2 venceu (0)"
        - Área: maior vence
            Se area[1] > area[2] = imprimir "Área: Carta 1 venceu (1)"
            Senão = imprimir "Área: Carta 2 venceu (0)"
        - PIB: maior vence
            Se pib[1] > pib[2] = imprimir "PIB: Carta 1 venceu (1)"
            Senão = imprimir "PIB: Carta 2 venceu (0)"
        - Pontos turísticos: maior vence
            Se num_pontos_turisticos[1] > num_pontos_turisticos[2] = imprimir "Pontos Turísticos: Carta 1 venceu (1)"
            Senão = imprimir "Pontos Turísticos: Carta 2 venceu (0)"
        - Densidade populacional: menor vence
            Se densidade_populacional[1] < densidade_populacional[2] = imprimir "Densidade Populacional: Carta 1 venceu (1)"
            Senão = imprimir "Densidade Populacional: Carta 2 venceu (0)"
        - PIB per capita: maior vence
            Se pib_per_capita[1] > pib_per_capita[2] = imprimir "PIB per Capita: Carta 1 venceu (1)"
            Senão = imprimir "PIB per Capita: Carta 2 venceu (0)"
        - Super Poder: maior vence
            Se super_poder[1] > super_poder[2] = imprimir "Super Poder: Carta 1 venceu (1)"
            Senão = imprimir "Super Poder: Carta 2 venceu (0)"

*/

#include <stdio.h>
#include <string.h>

// Função principal
int main() {
    // Declaração de variáveis
    char estado[2][100];
    char c1_codCarta[4] = "A01";
    char c2_codCarta[4] = "B02";
    char nome_cidade[2][100];
    unsigned long int populacao[2];
    float area[2];
    double pib[2];
    int num_pontos_turisticos[2];
    float densidade_populacional[2];
    float pib_per_capita[2];
    float super_poder[2];

    // Leitura dos dados das duas cartas
    printf("\n\n");
    printf("-----==== Bem-vindo ao SuperTrunfo! ====-----\n");

    // Carta 1
    printf("\nDigite os dados da Carta 1:\n");
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
    super_poder[0] = (float)populacao[0] + area[0] + (float)pib[0] +
                    (float)num_pontos_turisticos[0] + pib_per_capita[0] +
                    inverso_densidade1;

    // Carta 2
    densidade_populacional[1] = populacao[1] / area[1];
    pib_per_capita[1] = pib[1] / populacao[1];
    float inverso_densidade2 = 1.0f / densidade_populacional[1];
    super_poder[1] = (float)populacao[1] + area[1] + (float)pib[1] +
                    (float)num_pontos_turisticos[1] + pib_per_capita[1] +
                    inverso_densidade2;


    // Exibição dos dados das cartas
    printf("\n\n");

    printf("\n===== Cartas =====\n");
    printf("%-20s %-20s %-20s\n", "Atributo", "Carta 1", "Carta 2");
    printf("%-20s %-20s %-20s\n", "", c1_codCarta, c2_codCarta);
    printf("------------------------------------------------------------\n");
    printf("%-20s %-21s %-20s\n", "Estado", estado[0], estado[1]);
    printf("%-20s %-20s %-20s\n", "Cidade", nome_cidade[0], nome_cidade[1]);
    printf("%-22s %-20lu %-20lu\n", "População", populacao[0], populacao[1]);
    printf("%-22s %-20.2f %-20.2f\n", "Área (km²)", area[0], area[1]);
    printf("%-21s %-20.2lf %-20.2lf\n", "PIB (Bilhões)", pib[0], pib[1]);
    printf("%-21s %-20d %-20d\n", "Pontos Turísticos", num_pontos_turisticos[0], num_pontos_turisticos[1]);
    printf("%-20s %-20.2f %-20.2f\n", "Densidade Pop.", densidade_populacional[0], densidade_populacional[1]);
    printf("%-20s %-20.2f %-20.2f\n", "PIB per Capita", pib_per_capita[0], pib_per_capita[1]);
    printf("%-20s %-20.2f %-20.2f\n", "Super Poder", super_poder[0], super_poder[1]);


    // Comparações e exibição dos resultados
    printf("\n\n");
    printf("Comparação de Cartas:\n");

    // População: maior vence
    if (populacao[0] > populacao[1]) {
        printf("População: Carta 1 venceu (1)\n");
    } else {
        printf("População: Carta 2 venceu (0)\n");
    }

    // Área: maior vence
    if (area[0] > area[1]) {
        printf("Área: Carta 1 venceu (1)\n");
    } else {
        printf("Área: Carta 2 venceu (0)\n");
    }

    // PIB: maior vence
    if (pib[0] > pib[1]) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {    
        printf("PIB: Carta 2 venceu (0)\n");
    }
    // Pontos turísticos
    if (num_pontos_turisticos[0] > num_pontos_turisticos[1]) {
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    }
    // Densidade populacional
    if (densidade_populacional[0] < densidade_populacional[1]) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }
    // PIB per capita
    if (pib_per_capita[0] > pib_per_capita[1])
    {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }
    // Super Poder
    if (super_poder[0] > super_poder[1]) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }
    return 0;   
}
