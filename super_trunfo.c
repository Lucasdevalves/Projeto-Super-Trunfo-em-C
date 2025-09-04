#include <stdio.h>

int main() {

    //delcaração de variáveis
    long long int populacao1, populacao2, nmrPntTuristico1, nmrPntTuristico2;
    char nomeCidade1[30], nomeCidade2[30];
    char letraEstado1, letraEstado2;
    char codigoCarta1[5], codigoCarta2[5];
    float area1, area2, pib1, pib2;

//primeira carta-------------------------------------------------------------------------
    printf("----Carta 01----\n");
    
    printf("\nDigite a letra do Estado: ");
        scanf(" %c", &letraEstado1);//com espaco antes do %c
   
    printf("\nDigite o Código da carta (com letra do estado e número de 01 a 04. ex: A01): ");
        scanf("%s", codigoCarta1);
    
    printf("\nDigite nome da cidade (ex: RioDeJaneiro): ");
        scanf("%s", nomeCidade1);

    printf("\nDigite o número da população: ");
        scanf("%lld", &populacao1);

    printf("\nDigite a área em km (ex: 126.80): ");
        scanf("%f", &area1); 

    printf("\nDigite o PIB da sua cidade (ex: 1234.56): ");
        scanf("%f", &pib1);

    printf("\nDigite o número de pontos túristicos: ");
        scanf("%lld", &nmrPntTuristico1);

    

//Segunda Carta----------------------------------------------------------------------------
        printf("\n\n----Carta 02----\n");
    
    printf("\nDigite a letra do Estado: ");
        scanf(" %c", &letraEstado2);//com espaço antes do %c sempre
   
    printf("\nDigite o Código da carta (com letra do estado e número de 01 a 04. ex: A01): ");
        scanf("%s", codigoCarta2);
    
    printf("\nDigite nome da cidade (ex: RioDeJaneiro): ");
        scanf("%s", nomeCidade2);

    printf("\nDigite o número da população: ");
        scanf("%lld", &populacao2);

    printf("\nDigite a área em km (ex: 126.80): ");
        scanf("%f", &area2); 

    printf("\nDigite o PIB da sua cidade (ex: 1234.56): ");
        scanf("%f", &pib2);

    printf("\nDigite o número de pontos túristicos: ");
        scanf("%lld", &nmrPntTuristico2);

        //Aqui vai mostrar os dados da carta 1
        printf("\n------CARTA 01------\n");
        printf("Letra Estado: %c", letraEstado1);
        printf("\nCódigo Carta: %s", codigoCarta1);
        printf("\nNome da Cidade: %s", nomeCidade1);
        printf("\nPopulação: %lld", populacao1);
        printf("\nÁrea da Cidade: %.2fkm", area1);
        printf("\nPIB: $%.2f", pib1);
        printf("\nNúmero de Pontos Turísticos: %lld\n", nmrPntTuristico1);
        printf("-------------------------------");

        //Aqui mostrará os dados da carta 2
        printf("\n------CARTA 02------\n");
        printf("Letra Estado: %c", letraEstado2);
        printf("\nCódigo Carta: %s", codigoCarta2);
        printf("\nNome da Cidade: %s", nomeCidade2);
        printf("\nPopulação: %lld", populacao2);
        printf("\nÁrea da Cidade: %.2fkm", area2);
        printf("\nPIB: $%.2f", pib2);
        printf("\nNúmero de Pontos Turísticos: %lld\n", nmrPntTuristico2);
        printf("-------------------------------");


return 0;

}