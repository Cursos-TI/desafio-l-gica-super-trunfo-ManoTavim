#include <stdio.h>

int main (){
    char estado;
    char codigo[10];
    char nome[50];
    int populacao;
    int area;
    int densidade = populacao / area;
    float pib;
    float pibper = pib / (float)populacao;
    int ponto_turistico;
    

    char estado2;
    char codigo2[10];
    char nome2[50];
    int populacao2;
    int area2;
    int densidade2 = populacao2 / area2;
    float pib2;
    float pibper2 = pib2 / (float)populacao2;
    int ponto_turistico2;
    
    

    printf("**Carta 0** \n");
    printf("Insira o estado (de A a H): \n");
    scanf(" %c", &estado);

    printf("insira o Código da carta: \n");
    scanf("%s", codigo);

    printf("Insira o nome da cidade: \n");
    scanf("%s", nome);

    printf("Insira o numero de população da cidade escolhida: \n");
    scanf("%d", &populacao);

    printf("insira a área da cidade escolhida: \n");
    scanf("%d", &area);

    printf("Insira o pib da cidade escolhida: \n");
    scanf("%f", &pib);

    printf("insira a quantidade de pontos turísticos: \n");
    scanf("%d", &ponto_turistico);



    printf("**Carta 1** \n");
    printf("Insira o estado (de A a H): \n");
    scanf(" %c", &estado2);

    printf("insira o Código da carta2: \n");
    scanf("%s", codigo2);

    printf("Insira o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Insira o numero de população da cidade escolhida: \n");
    scanf("%d", &populacao2);

    printf("insira a área da cidade escolhida: \n");
    scanf("%d", &area2);

    printf("Insira o pib da cidade escolhida: \n");
    scanf("%f", &pib2);

    printf("insira a quantidade de pontos turísticos: \n");
    scanf("%d", &ponto_turistico2);


    printf("**Carta 0** \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %d km2 \n", area);
    printf("Densidade Populacional: %d hab/km2 \n", densidade);
    printf("PIB: %.2f Bilhões de reais \n", pib);
    printf("PiB Per Capta: %.2f reais\n", pibper);
    printf("Número de pontos turísticos: %d \n", ponto_turistico);

    printf("**Carta 1** \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %d km2 \n", area2);
    printf("Densidade Populacional: %d hab/km2 \n", densidade2);
    printf("PIB: %.2f Bilhões de reais \n", pib2);
    printf("PiB Per Capta: %.2f reais\n", pibper2);
    printf("Número de pontos turísticos: %d \n", ponto_turistico2);

    printf("**Comparação entre as cartas!**\n");
    printf("Atributo escolhido: Populacao \n");
    if (populacao > populacao2) {
        printf("Carta 0 (%s) é a vencedora! \n", nome);
    } else if (populacao < populacao2) {
        printf("Carta 1 (%s) é a vencedora! \n", nome2);
    } else {
        printf("Empate! \n");
    }
    return 0;
}