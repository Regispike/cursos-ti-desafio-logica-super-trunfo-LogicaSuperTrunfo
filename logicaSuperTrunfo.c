#include <stdio.h>

int main () {
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


    printf("*** Desfio Super Trunfo - Nível Mestre ***: \n");

    printf("\n");

    printf("Carta1: \n");
    printf("Estado: %c\n", estado);
    scanf("%c", &estado);

    printf("Código: %s\n", codigo);
    scanf("%s", &codigo);

    printf("Nome Da Cidade: %s\n", nome_cidade);
    scanf("%s", &nome_cidade);

    printf("População: %d \n", populacao);
    scanf("%d", &populacao);

    printf("Área: %.2f Km²\n", area);
    scanf("%.2f", &area);

    printf("PIB: %.2f Bilhões\n", pib);
    scanf("%.2f", &pib);

    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos1);
    scanf("%d", &numero_pontos_turisticos1);

    printf("Densidade Populacional: %.2f hab/Km²\n", quocientedens);
    scanf("%.2f", &quocientedens);

    printf("Densidade Populacional atualizada: %lu hab/Km²\n", quocientedens);
    scanf("%lu", &quocientedens);

    printf("PIB per Capita: %.2f reais\n", quocientepib);
    scanf("%.2f", &quocientepib);

    printf("PIB per Capita atualizado: %lu reais\n", quocientepib);
    scanf("%lu", &quocientepib);

     // Calculo do Super poder A

    printf("Super Poder: %lu\n", superpoder);
    scanf("%lu", &superpoder);
    

    printf("\n");

    printf("Carta2: \n");
    printf("Estado: %c\n", estado2);
    scanf("%c", &estado2);

    printf("Código: %s\n", codigo2);
    scanf("%s", &codigo2);

    printf("Nome Da Cidade: %s\n", nome_cidade2);
    scanf("%s", &nome_cidade2);

    printf("População: %d\n", populacao2);
    scanf("%d", &populacao2);

    printf("Área: %.2f Km²\n", area);
    scanf("%.2f", &area);

    printf("PIB: %.2f Bilhões\n", pib2);
    scanf("%.2f", &pib2);

    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos2);
    scanf("%d", &numero_pontos_turisticos2);

    printf("Densidade Populacional: %.2f hab/Km²\n", quocientedens2);
    scanf("%.2f", &quocientedens2);

    printf("Densidade Populacional atualizada: %lu hab/Km²\n", quocientedens2);
    scanf("%lu", &quocientedens2);

    printf("PIB per Capita: %.2f reais\n", quocientepib2);
    scanf("%.2f", &quocientepib2);

    printf("PIB per Capita atualizado: %lu reais\n", quocientepib2);
    scanf("%lu", &quocientepib2);

    // Calculo do Super poder B9
    printf("Super Poder: %lu\n", superpoder2);
    scanf("%lu", &superpoder2);

    // Exibir resultado das coparções
    printf("\n");

    printf("Comparação de cartas: \n");
    printf("População: Carta 1 venceu: %llu\n", (inversoDensidade >= inversoDensidade2));
    printf("Área: Carta 1 venceu: %u\n", (area >= area2));
    printf("PIB: Carta 1 venceu: %u\n", (pib >= pib2));
    printf("Pontos turísticos: Carta 1 venceu: %d\n", (numero_pontos_turisticos1 >= numero_pontos_turisticos2));
    printf("Densidade populacional: Carta 2 venceu: %lu\n", (populacaoNumeroGrande >= populacaoNumeroGrande2));
    printf("PIB per capita atualizado: Carta 1 venceu: %lu\n", (quocientepib >= quocientepib2));
    printf("Super poder: Carta 1 venceu: %llu\n", (superpoder >= superpoder2));
    printf("\n");

    printf("*** Desfio Super Trunfo - Nível Novato (comparação de cartas) ***: \n");

    printf("\n");
    printf ("Comparação de Cartas (Atributo: População) \n");
    printf("Carta1 - Recife (PE): %d\n", populacao);
    printf("Carta2 - Natal (RN): %d\n", populacao2);

    if (populacao > populacao2) {
        printf("Resultado: Carta 1 %s venceu!\n", cidadeVencedora);
    } else {
        printf("Resultado: Carta 2 %s venceu!", cidadeVencedora2);
    }
    // Outros atributos...
    printf("\n");
    printf("Comparação de Cartas (Atributo: Área) \n");
    printf("Carta1 - Recife (PE): %.2f\n", area);
    printf("Carta2 - Natal (RN): %.2f\n", area2);

    if (area > area2) {
        printf("Resultado: Carta 1 %s venceu!\n", cidadeVencedora);
    } else {
        printf("Resultado: Carata 2 %s venceu!\n", cidadeVencedora2);
    }

    printf("\n");
    printf("Comparação de Cartas (Atributo: PIB) \n");
    printf("Carta1 - Recife (PE): %.2f\n", pib);
    printf("Carta2 - Natal (RN): %.2f\n", pib2);

    if (pib > pib2) {
        printf("Resultado: Carta 1 %s venceu!\n", cidadeVencedora);
    } else {
        printf("Resultado: Carta 2 %s venceu!\n", cidadeVencedora2);
    }

    printf("\n");
    printf("Comparação de Cartas (Atributo: Densidade populacional) \n");
    printf("Carta1 - Recife (PE): %.2f\n", quocientedens);
    printf("Carta2 - Natal (RN): %.2f\n", quocientedens2);

    if (quocientedens < quocientedens2) {
        printf("Resultado: Carta 1 %s venceu!\n", cidadeVencedora);
    } else {
        printf("Resultado: Carta 2 %s venceu!\n", cidadeVencedora2);
    }

}