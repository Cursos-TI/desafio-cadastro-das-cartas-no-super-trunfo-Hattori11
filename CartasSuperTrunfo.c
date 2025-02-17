#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
        // Estado 1
    char estado1;
    printf("Digite o primeiro estado: \n");
    scanf(" %c", &estado1);
        // Cidade 1
    char cidade1_estado1[30];
    int populacao_cidade1_estado1, pontos_turisticos_cidade1_estado1;
    float areakm2_cidade1_estado1, pib_cidade1_estado1;
        // Cadastro das informações da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1_estado1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao_cidade1_estado1);

    printf("Digite a área em km2: ");
    scanf("%f", &areakm2_cidade1_estado1);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib_cidade1_estado1);

    printf("Quantos pontos turísticos há na cidade?: ");
    scanf("%d", &pontos_turisticos_cidade1_estado1);

        // Mostrar na tela a cidade 1 estado 1
    printf("Estado: %c \n Codigo da cidade: %c01 \n Nome da cidade: %s \n População: %d \n PIB: %f \n Pontos Turísticos: %d \n", estado1, estado1, cidade1_estado1, populacao_cidade1_estado1, pib_cidade1_estado1, pontos_turisticos_cidade1_estado1);

        // Cidade 2
    char cidade2_estado1[30];
    int populacao_cidade2_estado1, pontos_turisticos_cidade2_estado1;
    float areakm2_cidade2_estado1, pib_cidade2_estado1;
            // Cadastro das informações da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2_estado1);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao_cidade2_estado1);
    
    printf("Digite a área em km2: ");
    scanf("%f", &areakm2_cidade2_estado1);
    
    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib_cidade2_estado1);
    
    printf("Quantos pontos turísticos há na cidade?: ");
    scanf("%d", &pontos_turisticos_cidade2_estado1);
    
            // Mostrar na tela a cidade 2 estado 1
    printf("Estado: %c \n Codigo da cidade: %c02 \n Nome da cidade: %s \n População: %d \n PIB: %f \n Pontos Turísticos: %d \n", estado1, estado1, cidade2_estado1, populacao_cidade2_estado1, pib_cidade2_estado1, pontos_turisticos_cidade2_estado1);

            // Cidade 3
    char cidade3_estado1[30];
    int populacao_cidade3_estado1, pontos_turisticos_cidade3_estado1;
    float areakm2_cidade3_estado1, pib_cidade3_estado1;
                // Cadastro das informações da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade3_estado1);
        
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao_cidade3_estado1);
        
    printf("Digite a área em km2: ");
    scanf("%f", &areakm2_cidade3_estado1);
        
    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib_cidade3_estado1);
        
    printf("Quantos pontos turísticos há na cidade?: ");
    scanf("%d", &pontos_turisticos_cidade3_estado1);
        
                // Mostrar na tela a cidade 3 estado 1
    printf("Estado: %c \n Codigo da cidade: %c03 \n Nome da cidade: %s \n População: %d \n PIB: %f \n Pontos Turísticos: %d \n", estado1, estado1, cidade3_estado1, populacao_cidade3_estado1, pib_cidade3_estado1, pontos_turisticos_cidade3_estado1);

                // Cidade 4
    char cidade4_estado1[30];
    int populacao_cidade4_estado1, pontos_turisticos_cidade4_estado1;
    float areakm2_cidade4_estado1, pib_cidade4_estado1;
                    // Cadastro das informações da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade4_estado1);
            
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao_cidade4_estado1);
            
    printf("Digite a área em km2: ");
    scanf("%f", &areakm2_cidade4_estado1);
            
    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib_cidade4_estado1);
            
    printf("Quantos pontos turísticos há na cidade?: ");
    scanf("%d", &pontos_turisticos_cidade4_estado1);
            
                    // Mostrar na tela a cidade 4 estado 1
    printf("Estado: %c \n Codigo da cidade: %c04 \n Nome da cidade: %s \n População: %d \n PIB: %f \n Pontos Turísticos: %d \n", estado1, estado1, cidade4_estado1, populacao_cidade4_estado1, pib_cidade4_estado1, pontos_turisticos_cidade4_estado1);



    
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
