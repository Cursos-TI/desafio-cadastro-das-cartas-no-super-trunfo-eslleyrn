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
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_pupulacional;
    float pib_per_capita;
    float superpoder;


    char estado2[25];
    char codigo_carta2[25];
    char nome_cidade2[25];
    unsigned long int populacao2;
    float area2; 
    float pib2;
    int pontos_turisticosd;
    float densidade_pupulacional2;
    float pib_per_capita2;
    float superpoder2;

    unsigned long int resultado_populacao;
    float resultado_area;
    float resultado_pib;
    int resultado_pontos_turisticos;
    float resultado_pib_per_capita;
    float resultado_densidade_populacional;
    float resultado_superpoder;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("========================\n");
    printf("OPÇÕES DE CARTAS:\n");
    printf("CEARA CARTA(A01)\n");
    printf("PERNAMBUCO CARTA(B02)\n");
    printf("========================\n");

    printf("É a vez do jogador 1\n");
    printf("Digite o nome do estado:\n");
    scanf("%s", estado);

    printf("Digite o código da carta(ex: A01, B02):\n");
    scanf("%s", codigo_carta);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_cidade);

    printf("Digite a população:\n");
    scanf("%lu", &populacao);

    printf("Digite a área:\n");
    scanf("%f", &area);

    printf("Digite o valor do PIB:\n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);

    printf("É a vez do jogador 2\n");

    printf("Digite o nome do estado:\n");
    scanf("%s", estado2);

    printf("Digite o código da carta(ex: A01, B02):\n");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_cidade2);

    printf("Digite a populção:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos:\n");
    scanf("%d", &pontos_turisticosd);

    densidade_pupulacional = (float) populacao / area;
    pib_per_capita = (float) (pib * 1000000000) / populacao;

    densidade_pupulacional2 = (float) populacao2 / area2;
    pib_per_capita2 = (float) (pib2 * 1000000000) / populacao2;

    superpoder = (float) populacao + area + pib + pontos_turisticos + pib_per_capita + densidade_pupulacional;
    superpoder2 = (float) populacao2 + area2 + pib2 + pontos_turisticosd + pib_per_capita2 + densidade_pupulacional2;

    resultado_populacao = populacao > populacao2;
    resultado_area = area > area2;
    resultado_pib = pib > pib2;
    resultado_pontos_turisticos = pontos_turisticos > pontos_turisticosd;
    resultado_pib_per_capita = pib_per_capita > pib_per_capita2;
    resultado_densidade_populacional = densidade_pupulacional < densidade_pupulacional2;
    resultado_superpoder = superpoder > superpoder2;


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("CARTA - %s \n", codigo_carta);
    printf("Estado: %s \n", estado);
    printf("Código da carta: %s \n", codigo_carta);
    printf("Nome da cidade: %s \n", nome_cidade);
    printf("Populção: %lu habitantes \n", populacao);
    printf("Área(km²): %.1f km² \n", area);
    printf("PIB: R$ %.2f bilhões \n", pib);
    printf("Número de pontos turisticos: %d \n", pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km² \n", densidade_pupulacional);
    printf("PIB per capital: R$ %.2f \n", pib_per_capita);
    printf("Super poder: %.2f \n", superpoder);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("CARTA - %s \n", codigo_carta2);
    printf("Estado: %s \n", estado2);
    printf("Código da carta: %s \n", codigo_carta2);
    printf("Nome da cidade: %s \n", nome_cidade2);
    printf("Populção: %lu habitantes \n", populacao2);
    printf("Área(km²): %.1f km² \n", area2);
    printf("PIB: R$ %.2f bilhões \n", pib2);
    printf("Número de pontos turisticos: %d \n", pontos_turisticosd);
    printf("Densidade populacional: %.2f hab/km² \n", densidade_pupulacional2);
    printf("PIB per capital: R$ %.2f \n", pib_per_capita2);
    printf("Super poder: %.2f \n", superpoder2);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    printf("Resultado da Batalha sendo analisado.......\n");
    printf("Informações sobre o resultado: \n");
    printf("=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Carta 1 (1 - vence)\n");
    printf("Carta 2 (0 - vence)\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-\n");

    printf("Populção: %lu \n", resultado_populacao);
    printf("Área: %.0f \n", resultado_area);
    printf("Pib: %.0f \n", resultado_pib);
    printf("Pontos turisticos: %d \n", resultado_pontos_turisticos);
    printf("Pib per capita: %.0f \n", resultado_pib_per_capita);
    printf("Densidade populacional: %f \n", resultado_densidade_populacional);
    printf("Super poder: %.0f \n", resultado_superpoder);

   



    return 0;
}
