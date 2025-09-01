#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis
    char estado1[100], estado2[100];
    char codCarta1[4], codCarta2[4];
    char nome_cidade1[100], nome_cidade2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    printf("\n-----==== Bem-vindo ao SuperTrunfo! ====-----\n");

    // Carta 1
    printf("\nDigite os dados da Carta 1:\n");
    printf("Código da carta: ");
    scanf("%3s", codCarta1);
    getchar();
    printf("Estado: ");
    fgets(estado1, 100, stdin);
    estado1[strcspn(estado1, "\n")] = '\0';
    printf("Cidade: ");
    fgets(nome_cidade1, 100, stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0';
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%lf", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Carta 2
    getchar();
    printf("\nDigite os dados da Carta 2:\n");
    printf("Código da carta: ");
    scanf("%3s", codCarta2);
    getchar();
    printf("Estado: ");
    fgets(estado2, 100, stdin);
    estado2[strcspn(estado2, "\n")] = '\0';
    printf("Cidade: ");
    fgets(nome_cidade2, 100, stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%lf", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    float inv_densidade1 = 1.0f / densidade1;
    float inv_densidade2 = 1.0f / densidade2;

    super_poder1 = (float)populacao1 + area1 + (float)pib1 + (float)pontos1 + pib_per_capita1 + inv_densidade1;
    super_poder2 = (float)populacao2 + area2 + (float)pib2 + (float)pontos2 + pib_per_capita2 + inv_densidade2;

    // Exibição
    printf("\n===== Cartas =====\n");
    printf("%-20s %-20s %-20s\n", "Atributo", "Carta 1", "Carta 2");
    printf("%-20s %-20s %-20s\n", "Código", codCarta1, codCarta2);
    printf("%-20s %-20s %-20s\n", "Estado", estado1, estado2);
    printf("%-20s %-20s %-20s\n", "Cidade", nome_cidade1, nome_cidade2);
    printf("%-20s %-20lu %-20lu\n", "População", populacao1, populacao2);
    printf("%-20s %-20.2f %-20.2f\n", "Área", area1, area2);
    printf("%-20s %-20.2lf %-20.2lf\n", "PIB", pib1, pib2);
    printf("%-20s %-20d %-20d\n", "Pontos Turísticos", pontos1, pontos2);
    printf("%-20s %-20.2f %-20.2f\n", "Densidade Pop.", densidade1, densidade2);
    printf("%-20s %-20.2f %-20.2f\n", "PIB per Capita", pib_per_capita1, pib_per_capita2);
    printf("%-20s %-20.2f %-20.2f\n", "Super Poder", super_poder1, super_poder2);

    // Comparações
    printf("\n===== Comparação de Cartas =====\n");

    printf("População: Carta %d venceu (%d)\n", 
        populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);

    printf("Área: Carta %d venceu (%d)\n", 
        area1 > area2 ? 1 : 2, area1 > area2);

    printf("PIB: Carta %d venceu (%d)\n", 
        pib1 > pib2 ? 1 : 2, pib1 > pib2);

    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
        pontos1 > pontos2 ? 1 : 2, pontos1 > pontos2);

    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
        densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);

    printf("PIB per Capita: Carta %d venceu (%d)\n", 
        pib_per_capita1 > pib_per_capita2 ? 1 : 2, pib_per_capita1 > pib_per_capita2);

    printf("Super Poder: Carta %d venceu (%d)\n", 
        super_poder1 > super_poder2 ? 1 : 2, super_poder1 > super_poder2);

    return 0;
}
