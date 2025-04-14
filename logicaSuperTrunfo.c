#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    //declaração de variáveis
    char estado1 [3], estado2 [3];
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float capita1, capita2;
    float superpoder1, superpoder2;
    int escolhaJogador1, escolhaJogador2;
    int opcao;
    
    //obtenção dos dados via teclado
    printf("Digite a sigla do primeiro Estado: \n");
    scanf("%s", estado1);
    printf("Digite o código do primeiro estado com 1 letra e 2 números: \n");
    scanf("%s", codigo1);
    printf("Digite o nome da primeira cidade: \n");
    scanf("%s", nome1);
    printf("Digite a população da primeira cidade: \n");
    scanf("%lu", &populacao1);
    printf("Digite a área da primeira cidade em km² com separação decimal utilizando ponto (ex: 300.54): \n");
    scanf("%f", &area1);
    printf("Digite o pib da primeira cidade em bilhões de reais com separação decimal utilizando ponto (ex: 8.3): \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos da primeira cidade: \n");
    scanf("%d", &pontos1);

    printf("\n"); //quebra de linha para melhor visualização

    printf("Digite a sigla do segundo Estado: \n");
    scanf("%s", estado2);
    printf("Digite o código do segundo estado com 1 letra e 2 números: \n");
    scanf("%s", codigo2);
    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", nome2);
    printf("Digite a população da segunda cidade: \n");
    scanf("%lu", &populacao2);
    printf("Digite a área da segunda cidade em km² com separação decimal utilizando ponto (ex: 300.54): \n");
    scanf("%f", &area2);
    printf("Digite o pib da segunda cidade em bilhões de reais com separação decimal utilizando ponto (ex: 8.3): \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos da segunda cidade: \n");
    scanf("%d", &pontos2);

    //Cálculo de atributos que dependem de outros
    densidade1 = populacao1 / area1;
    capita1 = pib1 * 1000000000 / populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + pontos1 + (1 / densidade1) + capita1;
    densidade2 = populacao2 / area2;
    capita2 = pib2 * 1000000000 / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + pontos2 + (1 / densidade2) + capita2;

    //apresentação da carta
    printf("\n"); //quebra de linha para melhor visualização
    printf("Carta1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Pib Per Capita: %.2f reais\n", capita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n"); //quebra de linha para melhor visualização
    
    printf("Carta2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Pib Per Capita: %.2f reais\n", capita2);
    printf("Super Poder: %.2f\n", superpoder2);


    //bloco do menu interativo

    printf ("\n"); //quebra de linha para melhor visualização
    printf ("Escolha a opção desejada:\n");
    printf ("1. Jogar\n");
    printf ("2. Regras\n");
    printf ("3. Sair\n");
    scanf ("%d", &opcao);

    switch (opcao) {
        case 1:
            printf ("Escolha o primeiro atributo que deseja comparar: \n");
            printf ("1. População\n");
            printf ("2. Área\n");
            printf ("3. PIB\n");
            printf ("4. Número de Pontos Turísticos\n");
            printf ("5. Densidade Demográfica\n");
            scanf ("%d", &escolhaJogador1);
            printf ("Você escolheu a opção: %d\n", escolhaJogador1);
            printf ("Escolha o segundo atributo que deseja comparar: \n");
            printf ("Atenção, você deve escolher um atributo diferente do primeiro.\n");
            printf ("1. População\n");
            printf ("2. Área\n");
            printf ("3. PIB\n");
            printf ("4. Número de Pontos Turísticos\n");
            printf ("5. Densidade Demográfica\n");
            scanf ("%d", &escolhaJogador2);
            printf ("Você escolheu a opção: %d\n", escolhaJogador2);
            break;
        case 2:
            printf ("A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n");
            break;
        case 3:
            printf ("Você saiu do jogo.\n");
            break;        
    }

    //Bloco de identificação de escolha
    if (escolhaJogador1 == escolhaJogador2) {
        printf ("Escolha inválida!\n");
        exit(5); //utilizei retorno 5 para finalizar caso escolha errada.
    } 

    //Comparação das cartas;
    char atributoComparado1 [50], atributoComparado2 [50];
    float atributo1Carta1, atributo2Carta1;
    float atributo1Carta2, atributo2Carta2;
    int vencedor1, vencedor2;
    char mensagemVencedor [100];

    //identificação do primeiro atributo comparado e do vencedor

    if (escolhaJogador1 == 1) {
        strcpy (atributoComparado1, "População");
        atributo1Carta1 = populacao1;
        atributo1Carta2 = populacao2;
        vencedor1 = populacao1 > populacao2;
    } else if (escolhaJogador1 == 2) {
        strcpy (atributoComparado1, "Área");
        atributo1Carta1 = area1;
        atributo1Carta2 = area2;
        vencedor1 = area1 > area2;
    } else if (escolhaJogador1 == 3) {
        strcpy (atributoComparado1, "Pib");
        atributo1Carta1 = pib1;
        atributo1Carta2 = pib2;
        vencedor1 = pib1 > pib2;
    } else if (escolhaJogador1 == 4) {
        strcpy (atributoComparado1, "Pontos Turísticos");
        atributo1Carta1 = pontos1;
        atributo1Carta2 = pontos2;
        vencedor1 = pontos1 > pontos2;
    } else if (escolhaJogador1 == 5) {
        strcpy (atributoComparado1, "Densidade Demográfica");
        atributo1Carta1 = densidade1;
        atributo1Carta2 = densidade2;
        vencedor1 = densidade1 < densidade2;
    } else {
        printf ("Opção inválida.\n");
    }
    
    //identificação do segundo atributo comparado e vencedor

    if (escolhaJogador2 == 1) {
        strcpy (atributoComparado2, "População");
        atributo2Carta1 = populacao1;
        atributo2Carta2 = populacao2;
        vencedor2 = populacao1 > populacao2;
    } else if (escolhaJogador2 == 2) {
        strcpy (atributoComparado2, "Área");
        atributo2Carta1 = area1;
        atributo2Carta2 = area2;
        vencedor2 = area1 > area2;
    } else if (escolhaJogador2 == 3) {
        strcpy (atributoComparado2, "Pib");
        atributo2Carta1 = pib1;
        atributo2Carta2 = pib2;
        vencedor2 = pib1 > pib2;
    } else if (escolhaJogador2 == 4) {
        strcpy (atributoComparado2, "Pontos Turísticos");
        atributo2Carta1 = pontos1;
        atributo2Carta2 = pontos2;
        vencedor2 = pontos1 > pontos2;
    } else if (escolhaJogador2 == 5) {
        strcpy (atributoComparado2, "Densidade Demográfica");
        atributo2Carta1 = densidade1;
        atributo2Carta2 = densidade2;
        vencedor2 = densidade1 < densidade2;
    } else {
        printf ("Opção inválida.\n");
    }


    //Apresentação dos resultados;
    printf ("\n"); //quebra de linha para melhor visualização
    printf ("Comparação das cartas:\n");
    printf ("\n"); //quebra de linha para melhor visualização
    printf ("Carta 1 : %s - Carta 2 : %s\n", nome1, nome2);
    printf ("Primeiro Atributo comparado: %s\n", atributoComparado1);
    printf ("Atributo Carta 1 : %.2f - Atributo Carta 2 : %.2f\n", atributo1Carta1, atributo1Carta2);
    printf ("Segundo Atributo comparado: %s\n", atributoComparado2);
    printf ("Atributo Carta 1 : %.2f - Atributo Carta 2 : %.2f\n", atributo2Carta1, atributo2Carta2);
    if (vencedor1 && vencedor2) {
        printf ("A Carta 1 venceu!\n");
    } else if (vencedor1 != vencedor2) {
        printf ("Empate!\n");
    } else {
        printf ("A Carta 2 venceu!\n");
    }
    
        

    return 0;
}
