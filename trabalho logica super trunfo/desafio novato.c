#include <stdio.h>

// Desafio Desenvolvendo a Lógica do Jogo Super Trunfo - Países 
// Tema 1 – Comparando Cartas do Super Trunfo
// Teste: Augusto Bento Carvalho

    int main(){

// Declaração de variáveis para carta 1
    char estado1;  // Recebe uma letra
    char codigo_carta1[4];  // Recebe três caracteres, sendo uma letra e dois números 
    char nome_cidade1[20];  // Recebe o nome de uma cidade
    unsigned long int populacao1;  // Recebe um número inteiro
    float area1;  // Recebe número com casas decimais
    float pib1;  // Recebe número com casas decimais
    int pnts_turist1;  // Recebe número inteiro 
    float densidade_populacional1;  // Recebe número com casas decimais 
    float pib_percapita1;  // Recebe número com casas decimais 

// Declaração de variáveis para carta 2
    char estado2;  // Recebe uma letra
    char codigo_carta2[4];  // Recebe três caracteres, sendo uma letra e dois números 
    char nome_cidade2[20];  // Recebe nome de uma cidade
    unsigned long int populacao2;  // Recebe um número inteiro
    float area2;  // Recebe número com casas decimais
    float pib2;  // Recebe número com casas decimais
    int pnts_turist2;  // Recebe número inteiro
    float densidade_populacional2;  // Recebe número com casas decimais 
    float pib_percapita2;  // Recebe número com casas decimais

// Inserção de dados da carta 1
        
        printf("Digite os dados da carta 1, de acordo com os itens solicitados: \n");

        printf("\nDigite uma letra para o estado da carta 1: ");
        scanf(" %c", &estado1);

        printf("Digite o código da carta 1, contendo uma letra e dois números: ");
        scanf("%s", codigo_carta1);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", nome_cidade1);

        printf("Digite o número da população: ");
        scanf("%lu", &populacao1);

        printf("Digite a área Km²: ");
        scanf("%f", &area1);

        printf("Digite o PIB (em bilhões de reais): ");
        scanf("%f", &pib1);

        printf("Digite o número de pontos turísticos ");
        scanf("%i", &pnts_turist1);
        
// Inserção dos dados da carta 2
        
        printf("\nDigite os dados da carta 2, de acordo com os itens solicitados: \n");

        printf("\nDigite uma letra para o estado da carta 2: ");
        scanf(" %c", &estado2);

        printf("Digite o código da carta 2, contendo uma letra e dois números: ");
        scanf(" %s", codigo_carta2);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", nome_cidade2);

        printf("Digite o número da população: ");
        scanf("%lu", &populacao2);

        printf("Digite a área Km³: ");
        scanf("%f", &area2);

        printf("Digite o PIB (em bilhões de reais): ");
        scanf("%f", &pib2);

        printf("Digite o número de pontos turísticos ");
        scanf("%i", &pnts_turist2);


// Calculando a densidade populacional

        if(area1 != 0){
            densidade_populacional1 = populacao1 / area1;
        }else{
            densidade_populacional1 = 0.0;
        }
        if(area2 != 0){
            densidade_populacional2 = populacao2 / area2;
        }else{
            densidade_populacional2 = 0.0;
        }       


// Calculando o pib per capita

        if(populacao1 != 0){
            pib_percapita1 = (pib1 * 1000000000.0f) / populacao1;
        }else{
            pib_percapita1 = 0.0;
        }
        if(populacao2 != 0){
            pib_percapita2 = (pib2 * 1000000000.0f) / populacao2;
        }else{
            pib_percapita2 = 0.0;
        }


// Calculando o super poder

        double inverso_densidade1;
        if(densidade_populacional1 != 0){
            inverso_densidade1 = 1 / densidade_populacional1;
        }else{
            inverso_densidade1 = 0;
        }
        double inverso_densidade2;
        if(densidade_populacional2 != 0){
            inverso_densidade2 = 1 / densidade_populacional2;
        }else{
            inverso_densidade2 = 0;
        }

        double poder1 = (double) populacao1 + area1 + pib1 + pnts_turist1 +
                 pib_percapita1 + inverso_densidade1;
        double poder2 = (double) populacao2 + area2 + pib2 + pnts_turist2 +
                 pib_percapita2 + inverso_densidade2;


// Saída de dados da carta 1
        
        printf("\nDados relativo a carta 1:\n");
        printf("\nCódigo da carta: %s\n",codigo_carta1);
        printf("Letra do estado da carta: %c\n", estado1);
        printf("Nome da cidade da carta: %s\n", nome_cidade1);
        printf("População da cidade: %lu\n",populacao1);
        printf("Área Km²: %.2f Km²\n", area1);
        printf("Pib: %.2f R$\n", pib1);
        printf("Pontos Turísticos: %i\n",pnts_turist1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
        printf("Pib Per Capita: %.2f R$\n", pib_percapita1);
        printf("Super poder: %.2lf\n", poder1);

// Saída de dados da carta 2

        printf("\nDados relativos a carta 2:\n");
        printf("Código da carta: %s\n", codigo_carta2);
        printf("Letra do estado da carta: %c\n",estado2);
        printf("Nome da cidade da carta: %s\n", nome_cidade2);
        printf("População da cidade: %lu\n", populacao2);
        printf("Área Km²: %.2f Km²\n", area2);
        printf("Pib: %.2f R$\n", pib2);
        printf("Pontos Turísticos: %i\n", pnts_turist2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
        printf("Pib Per Capita: %.2f R$\n", pib_percapita2);
        printf("Super poder: %.2lf\n", poder2);


// Comparando as cartas e determinando a vencedora

        printf("Em população:");
        if (populacao1 > populacao2){
            printf("Carta 1 venceu!\n");
        }else if (populacao2 > populacao1){
            printf("Carta 2 venceu!\n");
        }else {
            printf("Empate!\n");
        }
        
        printf("Em Área Km²:");
        if (area1 > area2){
            printf("Carta 1 venceu!\n");
        }else if (area2 > area1){
            printf(" Carta 2 venceu!\n");
        }else {
             printf("Empate!\n");
        }
        
        printf("Em pib:");
        if (pib1 > pib2){
            printf("Carta 1 venceu!\n");
        }else if (pib2 > pib1){
            printf("Carta 2 venceu!\n");
        }else {
             printf("Empate!\n");
        }
        
        printf("Em pontos turisticos:");
        if (pnts_turist1 > pnts_turist2){
            printf("Carta 1 venceu!\n");
        }else if (pnts_turist2 > pnts_turist1){
            printf("Carta 2 venceu!\n");
        }else {
             printf("Empate!\n");
        }
        
        printf("Em pib per capita:");
        if (pib_percapita1 > pib_percapita2){
            printf("Carta 1 venceu!\n");
        }else if (pib_percapita2 > pib_percapita1){
            printf("Carta 2 venceu!\n");
        }else {
             printf("Empate!\n");
        }
        
        printf("Em densidade populacional:");
        if (densidade_populacional1 < densidade_populacional2){
            printf("Carta 1 venceu!\n");
        }else if (densidade_populacional2 < densidade_populacional1){
            printf("Carta 2 venceu!\n");
        }else {
             printf("Empate!\n");
        }
        
        printf("Em poder:");
        if (poder1 > poder2){
            printf("Carta 1 venceu!\n");
        }else if (poder2 > poder1){
            printf("Carta 2 venceu!\n");
        }else {
             printf("Empate!\n");
        }



        return 0;

    }

