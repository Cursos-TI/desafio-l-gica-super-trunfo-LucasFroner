#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

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
        int escolhaJogador;
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
        printf("Estado: %c\n", estado1);
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
                printf ("Escolha o atributo que deseja comparar:\n");
                printf ("1. População\n");
                printf ("2. Área\n");
                printf ("3. PIB\n");
                printf ("4. Número de Pontos Turísticos\n");
                printf ("5. Densidade Demográfica\n");
                scanf ("%d", &escolhaJogador);
                break;
            case 2:
                printf ("A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n");
                break;
            case 3:
                printf ("Você saiu do jogo.\n");
                break;        
        }
    
    
        //Comparação das cartas;
        char atributoComparado [50];
        unsigned long int atributoCarta1;
        unsigned long int atributoCarta2;
        char mensagemVencedor [100];
    
    
    
        if (escolhaJogador == 1) {
            strcpy (atributoComparado, "População");
            atributoCarta1 = populacao1;
            atributoCarta2 = populacao2;
            if (populacao1 > populacao2) {
                strcpy (mensagemVencedor, "A carta vencedora foi: Carta 1.\n");
            } else if (populacao2 > populacao1) {
                strcpy (mensagemVencedor, "A carta vencedora foi: Carta 2.\n");
            } else {
                strcpy (mensagemVencedor, "Empate.\n");
            }
        } else if (escolhaJogador == 2) {
            strcpy (atributoComparado, "Área");
            atributoCarta1 = area1;
            atributoCarta2 = area2;
            if (area1 > area2) {
                strcpy (mensagemVencedor, "A carta vencedora foi: Carta 1.\n");
            } else if (area2 > area1) {
                strcpy (mensagemVencedor, "A carta vencedora foi: Carta 2.\n");
            } else {
                strcpy (mensagemVencedor, "Empate.\n");
            }
        } else if (escolhaJogador == 3) {
            strcpy (atributoComparado, "Pib");
            atributoCarta1 = pib1;
            atributoCarta2 = pib2;
            if (pib1 > pib2) {
                strcpy (mensagemVencedor, "A carta vencedora foi: Carta 1.\n");
            } else if (pib2 > pib1) {
                strcpy (mensagemVencedor, "A carta vencedora foi: Carta 2.\n");
            } else {
                strcpy (mensagemVencedor, "Empate.\n");
            }
        } else if (escolhaJogador == 4) {
            strcpy (atributoComparado, "Pontos Turísticos");
            atributoCarta1 = pontos1;
            atributoCarta2 = pontos2;
            if (pontos1 > pontos2) {
                strcpy (mensagemVencedor, "A carta vencedora foi: Carta 1.\n");
            } else if (pontos2 > pontos1) {
                strcpy (mensagemVencedor, "A carta vencedora foi: Carta 2.\n");
            } else {
                strcpy (mensagemVencedor, "Empate.\n");
            }
        } else if (escolhaJogador == 5) {
            strcpy (atributoComparado, "Densidade Demográfica");
            atributoCarta1 = densidade1;
            atributoCarta2 = densidade2;
            if (densidade1 > densidade2) {
                strcpy (mensagemVencedor, "A carta vencedora foi: Carta 2.\n");
            } else if (densidade2 > densidade1) {
                strcpy (mensagemVencedor, "A carta vencedora foi: Carta 1.\n");
            } else {
                strcpy (mensagemVencedor, "Empate.\n");
            }
        } else {
            printf ("Opção inválida.\n");
        }
     
    
        //Apresentação dos resultados;
        printf ("\n"); //quebra de linha para melhor visualização
        printf ("Comparação das cartas:\n");
        printf ("\n"); //quebra de linha para melhor visualização
        printf ("Carta 1 : %s - Carta 2 : %s\n", nome1, nome2);
        printf ("Atributo comparado: %s\n", atributoComparado);
        printf ("Atributo Carta 1 : %d - Atributo Carta 2 : %d\n", atributoCarta1, atributoCarta2);
        printf (mensagemVencedor);
        
        

    return 0;
}
