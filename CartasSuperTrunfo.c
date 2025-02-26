#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
   
    // Variáveis
    char estado1, estado2;
    char codigo1[5], codigo2[5], cidade1[20], cidade2[20];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;
    float densidadePopulacional1, densidadePopulacional2, pibPerCapita1, pibPerCapita2;
        // Cadastro do usuário carta 1
    printf("Digite o estado da carta 1 (uma letra de A a H): ");
    scanf(" %c", &estado1);
    while (getchar() != '\n'); // Tira o enter do buffer

    printf("Digite o código da carta 1 (a letra estado e um número de 01 a 04): ");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = '\0'; // Retira o \n do buffer

    printf("Digite o nome da cidade da carta 1: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; // Retira o \n do buffer

    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos há na carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Calculo da Densidade populacional carta 1
    densidadePopulacional1 = populacao1 / area1;
    // Calculo do PIB per Capita carta 1
    pibPerCapita1 = pib1 / populacao1;

        // Cadastro da carta 2
    printf("Digite o estado da carta 2 (uma letra de A a H): ");
    scanf(" %c", &estado2);
    while (getchar() != '\n'); // Tira o enter do buffer

    printf("Digite o código da carta 2 (a letra estado e um número de 01 a 04): ");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0'; // Retira o \n do buffer

    printf("Digite o nome da cidade da carta 2: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0'; // Retira o \n do buffer

    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos há na carta 2: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Calculo da Densidade populacional carta 1
    densidadePopulacional2 = populacao2 / area2;
    // Calculo do PIB per Capita carta 1
    pibPerCapita2 = pib2 / populacao2;


    // Calculo do Super Poder
        // Variáveis
        float superPoder1, superPoder2;
        // Super poder da carta 1
        superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1/densidadePopulacional1);
        // Super poder da carta 2
        superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1/densidadePopulacional2);


        // Impressão da Carta 1
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Àrea: %f km2\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d \n", pontosTuristicos1);
    printf("Densidade Populacional: %f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %f reais\n", pibPerCapita1);
    printf("\n");
        // Impressão da Carta 2
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Àrea: %f km2\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d \n", pontosTuristicos2);
    printf("Densidade Populacional: %f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %f reais\n", pibPerCapita2);
    printf("\n");

    // Código de comparação das cartas
    printf("Comparação das cartas: \n");

    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    } else {
        printf("População: Carta 2 venceu (%d)\n", populacao1 > populacao2);
}
    if (area1 > area2) {
        printf("Àrea: Carta 1 venceu (%d)\n", area1 > area2);
    } else {
        printf("Àrea: Carta 2 venceu (%d)\n", area1 > area2);
}
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    } else {
        printf("PIB: Carta 2 venceu (%d)\n", pib1 > pib2);
}
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
}
    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 > densidadePopulacional2);
    } else {
        printf("Densidade populacional: Carta 2 venceu (%d)\n", densidadePopulacional1 > densidadePopulacional2);
}
    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    } else {
        printf("PIB per Capita: Carta 2 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
}
    if (superPoder1 > superPoder2) {
        printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);
    } else {
        printf("Super Poder: Carta 2 venceu (%d)\n", superPoder1 > superPoder2);
}


    
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
