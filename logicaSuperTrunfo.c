#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char pais [8] = "Brasil1";
    char estado = 'A';
    char codigo [6] = "A01";
    char nome_cidade[10] = "Recife";
    int populacao = 1488920;
    float area = 218.843;
    float pib = 54970305.43;
    int numero_pontos_turisticos1 = 10;
    float quocientedens = (float) populacao / area;
    float quocientepib = (float) pib / populacao;
    unsigned long int populacaoNumeroGrande = 1488920000;
    float inversoDensidade = (float) 1 / 1488920000;
    float superpoder = (float) populacaoNumeroGrande + area + pib + numero_pontos_turisticos1 + quocientepib + inversoDensidade;
    char cidadeVencedora[9] = "(Recife)";

    char pais2 [9] = "Brasil2";
    char estado2 = 'B';
    char codigo2 [6] = "B02";
    char nome_cidade2[10] = "Natal";
    int populacao2 = 751300;
    float area2 = 167.401;
    float pib2 = 24186261.54;
    int numero_pontos_turisticos2 = 15;
    float quocientedens2 = (float) populacao2 / area2;
    float quocientepib2 = (float) pib2 / populacao2;
    unsigned long int populacaoNumeroGrande2 = 751300000;
    float inversoDensidade2 = (float) 1 / 751300000;
    float superpoder2 = (float) populacaoNumeroGrande2 + area2 + pib2 + numero_pontos_turisticos2 + quocientepib2 + inversoDensidade2;
    char cidadeVencedora2[8] = "(Natal)";

    int atributo, atributo2;
    printf("*** Desafio Super Trunfo - Aventureiro ***\n");
    printf("Escolha o atributo:\n");
    printf("1. País\n");
    printf("2. População:\n");
    printf("3. Área:\n");
    printf("4. PIB:\n");
    printf("5. Número de Pontos Turísticos:\n");
    printf("6. Densidade Demográfica:\n");
    scanf("%d", &atributo);

    switch (atributo)
    {
    case 1:
        printf("País: %s\n", pais);
        break;
    case 2:
        printf("Brasil 1 população: %d\n", populacao);
        printf("Brasil 2 população: %d\n", populacao2);
        break;
    case 3:
        printf("Brasil 1 área: %.2f\n", area);
        printf("Brasil 2 área: %.2f\n", area2);
        break;
    case 4:
        printf("Brasil 1 PIB: %.2f\n", pib);
        printf("Brasil 2 PIB: %.2f\n", pib2);
        break;
    case 5:
        printf("Brasil 1 pontos turísticos: %d\n", numero_pontos_turisticos1);
        printf("Brasil 2 pontos turísticos: %d\n", numero_pontos_turisticos2);
        break;
    case 6:
        printf("Brasil 1 desidade demográfica: %.2f\n", quocientedens);
        printf("Brasil 2 desidade demográfica: %.2f\n", quocientedens2);
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    switch (atributo2)
    {
    case 1:
        printf("País: %s\n", pais2);
        break;
    case 2:
        printf("Brasil 2 população: %d\n", populacao2);
        break;
    case 3:
        printf("Brasil 2 área: %.2f\n", area2);
        break;
    case 4:
        printf("Brasil 2 PIB: %.2f\n", pib2);
        break;
    case 5:
        printf("Brasil 2 pontos turísticos: %d\n", numero_pontos_turisticos2);
        break;
    case 6:
        printf("Brasil 2 desidade demográfica: %f\n", quocientedens2);
        break;
    }

    if (atributo == atributo2)
    {
        printf ("### O jogo empatou! ###\n");
    } else if ((populacao > populacao2) &&
                (area > area2) &&
                (pib > pib2) ||
                (numero_pontos_turisticos1 > numero_pontos_turisticos2) ||
                (quocientedens < quocientedens2))
    {
        printf("O Brasil 1 VENCEU este atributo!\n");
    } else {
        printf("O Brasil 1 PERDEU neste atributo!\n");
    }

    if (pais > pais2) {
        printf("Carta 1 venceu!\n");
    } else if (pais < pais2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Houve um empate!\n");
    }
    return 0;


}novo commit