#include <stdio.h>

int main(){

        //iniciando inserçao das variaveis de ambas cartas; cada carta possui sua variavel para evitar que o resultado do primeiro sobescreva o segundo
    char estado1, estado2, codigo1[20], codigo2[20], nome1[20], nome2[20];
    float area1, area2, pib1, pib2;
    int populacao1, populacao2, turisticos1, turisticos2; 

    //iniciando entrada e saida de dados; carta 01
    printf("- Carta 01 -\n");
    printf("Represente seu Estado com uma letra de 'A' a 'H': ");
    scanf(" %c", &estado1); 

    printf("Represente seu Codigo com a letra de seu Estado e um numero de '01' a '04': ");
    scanf(" %s", codigo1); 

    printf("Represente o Nome de sua Cidade: ");
    scanf(" %s", nome1);

    printf("Represente o Numero de Habitantes de sua Cidade: ");
    scanf(" %d", &populacao1);

    printf("Represente o valor da Area de sua Cidade: ");
    scanf(" %f", &area1);

    printf("Represente o PIB de sua Cidade: "); 
    scanf(" %f", &pib1);

    printf("Represente o Numero de Pontos Turisticos de sua Cidade: ");
    scanf(" %d", &turisticos1); 


    //iniciando processo de impressao dos dados; carta 01
    printf("\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Numero de Habitantes: %d\n", populacao1);
    printf("Area: %f km²\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", turisticos1);


    //iniciando entrada e saida de dados; carta 02
    printf("\n- Carta 02 -\n");
    printf("Represente seu Estado com uma letra de 'A' a 'H': ");
    scanf(" %c", &estado2); 

    printf("Represente seu Codigo com a letra de seu Estado e um numero de '01' a '04': ");
    scanf(" %s", codigo2); 

    printf("Represente o Nome de sua Cidade: ");
    scanf(" %s", nome2);

    printf("Represente o Numero de Habitantes de sua Cidade: ");
    scanf(" %d", &populacao2);

    printf("Represente o valor da Area de sua Cidade: ");
    scanf(" %f", &area2);

    printf("Represente o PIB de sua Cidade: "); 
    scanf(" %f", &pib2);

    printf("Represente o Numero de Pontos Turisticos de sua Cidade: ");
    scanf(" %d", &turisticos2); 


    //iniciando processo de impressao dos dados; carta 02
    printf("\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Numero de Habitantes: %d\n", populacao2);
    printf("Area: %f km²\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", turisticos2);

    return 0;



}