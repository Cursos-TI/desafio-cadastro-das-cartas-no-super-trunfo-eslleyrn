#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado[25]; 
    char codigo_carta[25];
    char nome_cidade[25];
    int população;
    float area;
    float pib;
    int pontos_turisticos;

    char estado2[25];
    char codigo_carta2[25];
    char nome_cidade2[25];
    int  população2;
    float area2; 
    float pib2;
    int pontos_turisticosd;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("========================\n");
    printf("OPÇÕES DE CARTAS:\n");
    printf("FORTALEZA CARTA(A01)\n");
    printf("PERNAMBUCO CARTA(B02)\n");
    printf("========================\n");

    printf("É a vez do jogador 1\n");
    printf("Digite o nome do estado:\n");
    scanf("%s", estado);

    printf("Digite o código da carta(ex: A01, B03):\n");
    scanf("%s", codigo_carta);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_cidade);

    printf("Digite a populção de habitantes:\n");
    scanf("%d", &população);

    printf("Digite a área do estado:\n");
    scanf("%f", &area);

    printf("Digite o valor do PIB:\n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);




    printf("É a vez do jogador 2\n");

    printf("Digite o nome do estado:\n");
    scanf("%s", estado2);

    printf("Digite o código da carta(ex: A01, B02, C03):\n");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_cidade2);

    printf("Digite a populção:\n");
    scanf("%d", &população2);

    printf("Digite a área:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos:\n");
    scanf("%d", &pontos_turisticosd);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("CARTA - %s \n", codigo_carta);
    printf("Estado: %s \n", estado);
    printf("Código da carta: %s \n", codigo_carta);
    printf("Nome da cidade: %s \n", nome_cidade);
    printf("Populção: %d habitantes \n", população );
    printf("Área(km²): %fkm² \n", area);
    printf("PIB: %f \n", pib);
    printf("Número de pontos turisticos: %d \n", pontos_turisticos);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("CARTA - %s \n", codigo_carta2);
    printf("Estado: %s \n", estado2);
    printf("Código da carta: %s \n", codigo_carta2);
    printf("Nome da cidade: %s \n", nome_cidade2);
    printf("Populção: %d habitantes \n", população2);
    printf("Área(km²): %fkm² \n", area2);
    printf("PIB: %f \n", pib);
    printf("Número de pontos turisticos: %d \n", pontos_turisticosd);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- \n");

    return 0;
}
