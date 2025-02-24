#include <stdio.h>

/* Essa função/projeto é um cadastro de duas cartas no estilo Super Trunfo com o tema: Países. 
Dessa forma, o objetivo será cadastrar-se algumas de suas características e depois 
apresentá-las e calculará automaticamente, ao final, a Densidade Populacional e o PIB per Capita.
Existirá comparações entre as propriedades e a criação do Super Poder. Esse último,
será a soma dos valores das outras propriedades.*/

int main(){

    //OBS: E usarei CamelCase.

    /*Parâmetros:
        -> char estado: Nome do Estado do país em questâo;
        -> char[] codigoDaCarta: É a junçao da letra do Estado cadastrado com um número de 01 a 04. 
           Ex.: A01;
        -> char[] nomeDaCidade: Nome da cidade do País;
        -> unsigned long int populacao: Número da população da Cidade;
        -> float areaEmKm2: Número da extensão territorial da Cidade em quilômetros quadrados (km²);
        -> float pib: Número do PIB(Produto Interno Bruto) da Cidade;
        -> int numeroDePontosTuristicos: Número de pontos turísticos da Cidade.
        -> float pibPerCapita: Resultado da divisão entre PIB pela populacao da Cidade.
        -> float densidadePopulacional: Resultado da divisão entre a populacao e a areaEmKm2 da Cidade.
        -> float superPoder: Soma dos valores das propriedades anteriores. 

    Retornos:
        Retornará os dados cadastrados de: Estado, Código da Carta, Nome da Cidade, População,
        Área, Densidade Populaciona, PIB, PIB per Capita, Número de Pontos Turísticos e Super Poder. Como também,
        as comparações entre as propriedades.

        obs: Na comparação a densidade ganhadora é a menor e no calculo do Super Poder o seu valor é invertido.
        Assim:
            Carta 1:
            Estado: A
            Código da Carta: A01
            Nome da Cidade: São Paulo
            População: 12325000
            Área: 1521.11 km²
            Densidade Populacional: 8101.19 pessoas/km²
            PIB: 699.28 bilhões de reais
            PIB per Capita: 56749 reais
            Número de Pontos Turísticos: 50
            Super Poder: 12392110.00

            Carta 2:
            Estado: B
            Código: B02
            Nome da Cidade: Rio de Janeiro
            População: 6748000
            Área: 1200.25 km²
            PIB: 300.50 bilhões de reais
            Número de Pontos Turísticos: 30
            Densidade Populacional: 5622.24 hab/km²
            PIB per Capita: 44532.91 reais

            Comparações:
            População: Carta 1 venceu (1)
            Área: Carta 1 venceu (1)
            PIB: Carta 1 venceu (1)
            Pontos Turísticos: Carta 1 venceu (1)
            Densidade Populacional: Carta 2 venceu (0)
            PIB per Capita: Carta 1 venceu (1)
            Super Poder: Carta 1 venceu (1)
            Número de Pontos Turísticos: 30  
    */
    //criação das variáveis da primeira carta:
    char estado1;
    char codigoDaCarta1[5];
    char nomeDaCidade1[50];
    unsigned long int populacao1;
    int numeroDePontosTuristicos1;
    float areaEmKm21, pib1, pibPerCapita1, densidadePopulacional1, superPoder1;

    printf("\n\n------------------ Super Trunfo: Cadastros ------------------\n\n");

    //Entradas de dados da Carta 1

    printf("\n                   ---------------------");
    printf("\n                   | Cadastro: Carta 1 |");
    printf("\n                   ---------------------\n");

    printf("\nDigite a letra inicial do Estado: ");
   
    scanf("%c", &estado1);
    
    printf("Digite o Código da Carta, A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigoDaCarta1);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %49[^\n]", nomeDaCidade1);
    
    printf("Digite o valor da Populacão da referida Cidade: ");
    scanf("%lu", &populacao1);
    
    printf("Digite o valor da Área territorial da referida Cidade: ");
    scanf("%f", &areaEmKm21);
    
    printf("Digite o valor do PIB da referida Cidade (em bilhões): ");
    scanf("%f", &pib1);
 
    printf("Digite o Número de Pontos Turísticos da referida Cidade: ");
    scanf("%d", &numeroDePontosTuristicos1);

    // Calculo automático do PIB Per Capita e da Densidade Populacional.
    pibPerCapita1 =  (pib1*1000000000) / (float) populacao1;
    densidadePopulacional1 = (float) populacao1 / areaEmKm21;

    //Super Poder
    superPoder1 = (float) populacao1 + areaEmKm21 + pib1 + (float) numeroDePontosTuristicos1 + (1/densidadePopulacional1) + pibPerCapita1;
    

    //Confirmação de sucesso caso a carta sejá cadastrada sem eventuais erros.
    printf("\n             -----------------------------------\n");
    printf("             | Cadastro realizado com sucesso! |\n");
    printf("             -----------------------------------");

    printf("\n\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");


    //criação das variáveis da segunda carta:
    char estado2;
    char codigoDaCarta2[5];
    char nomeDaCidade2[50];
    unsigned long int populacao2;
    int numeroDePontosTuristicos2;
    float areaEmKm22, pib2, pibPerCapita2, densidadePopulacional2, superPoder2;


    //Entradas de dados da Carta 2
    printf("\n                   ---------------------");
    printf("\n                   | Cadastro: Carta 2 |");
    printf("\n                   ---------------------\n");

    
    printf("\n\nDigite a letra inicial do Estado: ");
   
    scanf(" %c", &estado2);
    

    printf("Digite o Código da Carta, A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigoDaCarta2);
    

    printf("Digite o Nome da Cidade: ");
    scanf(" %49[^\n]", nomeDaCidade2);
    

    printf("Digite o valor da Populacão da referida Cidade: ");
    scanf("%lu", &populacao2);
    

    printf("Digite o valor da Área territorial da referida Cidade: ");
    scanf("%f", &areaEmKm22);
    

    printf("Digite o valor do PIB da referida Cidade (em bilhões): ");
    scanf("%f", &pib2);
 

    printf("Digite o Número de Pontos Turísticos da referida Cidade: ");
    scanf("%d", &numeroDePontosTuristicos2);

    // Calculo automático do PIB Per Capita e da Densidade Populacional.
    pibPerCapita2 =  (pib2*1000000000) / ((float) populacao2);

    densidadePopulacional2 = ((float) populacao2) / areaEmKm22;

    //Super Poder
    superPoder2 = ((float) populacao2) + areaEmKm22 + pib2 + ((float) numeroDePontosTuristicos2) + (1/densidadePopulacional2) + pibPerCapita2;

    //Confirmação de sucesso caso a carta sejá cadastrada sem eventuais erros.
    printf("\n             -----------------------------------\n");
    printf("             | Cadastro realizado com sucesso! |\n");
    printf("             -----------------------------------");

    printf("\n\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

    //Saídas de dados.
    printf("\n\n            --------------------------------------\n");
    printf("            | Mostrando as cartas cadastradas... |\n");
    printf("            --------------------------------------\n");

    //Dados da carta 1.
    printf("\n************************** Carta 1 *************************");
    printf("\nEstado: %c", estado1);
    printf("\nCódido da Carta: %s", codigoDaCarta1);
    printf("\nNome da Cidade: %s", nomeDaCidade1);
    printf("\nPopulação: %lu", populacao1);
    printf("\nÁrea: %.2f km²", areaEmKm21);
    printf("\nPIB: %.2f bilhões de reais", pib1);
    printf("\nNúmero de Pontos Turísticos: %d",  numeroDePontosTuristicos1);
    printf("\nDensidade Populacional: %.2f pessoas/km²", densidadePopulacional1);
    printf("\nPIB per Capita: %.2f reais", pibPerCapita1);
    printf("\nSuper Poder: %.2f\n", superPoder1);

    //Dados da Carta 2.
    printf("\n************************** Carta 2 *************************");
    printf("\nEstado: %c", estado2);
    printf("\nCódido da Carta: %s", codigoDaCarta2);
    printf("\nNome da Cidade: %s", nomeDaCidade2);
    printf("\nPopulação: %lu", populacao2);
    printf("\nÁrea: %.2f km²", areaEmKm22);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nNúmero de Pontos Turísticos: %d",  numeroDePontosTuristicos2);
    printf("\nDensidade Populacional: %.2f pessoas/km²", densidadePopulacional2);
    printf("\nPIB per Capita: %.2f reais", pibPerCapita2);
    printf("\nSuper Poder: %.2f\n", superPoder2);

    // Comparaçoes entre os valores.
    //obs: A densidadePopulacional ganhará se for menor e não maior na comparação. 
    //É feita duas comparações, uma delas se o resultado da segunda comparação 
    //for 0, quer dizer que a carta 1 ganhou, mas é retornado 0, assim eu somo +1 e imprimo a "Carta 1(0+1) venceu, se não,
    //a carta 2 vence e imprimo "Carta 2(1+1) venceu", já que na outra
    //comparação é somente para dizer qual carta ganhou, no valor 1 se for a carta 1 e 0 se for carta 2, mas para eu não criar uma 
    //variável para armazenar quem ganhou, já que os valores estão invertidos => 1 se for 1, 0 se for 2, fiz isso.
    printf("\n======================= Comparações =======================\n\n");
    printf("Comparações das Cartas:\n");
    printf("População: Carta %d venceu (%d)\n",(0 ==(populacao1 > populacao2))+1, populacao1 > populacao2);
    printf("Área em Km²: Carta %d venceu (%d)\n", (0 == (areaEmKm21 > areaEmKm22))+1, areaEmKm21 > areaEmKm22);
    printf("PIB: Carta %d venceu (%d)\n", (0 == (pib1 > pib2))+1, pib1 > pib2);
    printf("Número de Pontos Turísticos: Carta %d venceu (%d)\n", (0 == (numeroDePontosTuristicos1 >numeroDePontosTuristicos2))+1,
    numeroDePontosTuristicos1 > numeroDePontosTuristicos2 );
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (0 == (densidadePopulacional1 < densidadePopulacional2))+1,
    densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (0 == (pibPerCapita1 > pibPerCapita2))+1, pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta %d venceu (%d)\n\n\n", (0 == (superPoder1 > superPoder2))+1, superPoder1 > superPoder2);

    return 0;
    
}
