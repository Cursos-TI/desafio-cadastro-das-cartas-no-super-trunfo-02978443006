#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas Desafio Novato
// Tema 1 - Cadastro das Cartas Desafio Aventureiro

int main() {
      
    // Cadastro das Cartas:
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //Desafio Super trunfo Novato
    //Criar varáveis
    //Densidade Populacional: 8102.47 hab/km² (INCLUIR NO DESAFIO AVENTUREIRO)
    //PIB per Capita: 56724.32 reais (INCLUIR NO DESAFIO AVENTUREIRO)
    //Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
    //Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
    //Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico), seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formate os valores de ponto flutuante com duas casas decimais.

    char estado1,estado2;
    char codigo1[20],codigo2[20];
    char cidade1[40],cidade2[40];
    int populacao1,populacao2;
    float area1,area2;
    float Pib1,Pib2;
    int pontosturistico1,pontosturistico2;
    float densidpopquociente1,densidpopquociente2;
    float percapitaquociente1,percapitaquociente2;

    // CARTA 1
    //Criar impressão de mensagem para solicitação de informações
    //Criar recebimanto de valor via scanf

    printf("digite seu Estado de 'A'a'H' :\n");
    scanf(" %c",&estado1);

    printf("codigo :\n");
    scanf("%s",codigo1);

    printf("nome da Cidade :\n");
    scanf("%s",cidade1);

    printf("populacao :\n");
    scanf("%d",&populacao1);

    printf("Area :\n");
    scanf("%f",&area1);

    printf("pib :\n");
    scanf("%f",&Pib1);

    printf("numero de pontos turisticos :\n");
    scanf("%d",&pontosturistico1);


  // Calculos
    densidpopquociente1 = (float) populacao1 / area1;
    percapitaquociente1 = (float) Pib1 / populacao1;

    // CARTA 2 
    //Criar impressão de mensagem para solicitação de informações
    //Criar recebimanto de valor via scanf

    printf("digite seu Estado de 'A'a'H':\n");
    scanf(" %c",&estado2);

    printf("codigo :\n");
    scanf("%s",codigo2);

    printf("nome da Cidade :\n");
    scanf("%s",cidade2);

    printf("populacao :\n");
    scanf("%d",&populacao2);

    printf("Area :\n");
    scanf("%f",&area2);

    printf("pib :\n");
    scanf("%f",&Pib2);

    printf("numero de pontos turisticos :\n");
    scanf("%d",&pontosturistico2);

    // Calculo
    densidpopquociente2 = (float) populacao2 / area2;
    percapitaquociente2 = (float) Pib2 / populacao2;


  //Criar impressão dos valores recebidos da Carta 1
   
    printf("Carta 1!\n");


    printf("estado: %c\n",estado1);
    printf("Codigo:%s\n",codigo1);
    printf("Cidade:%s\n",cidade1);
    printf("Populacao:%d\n",populacao1);
    printf("Area:%f km²\n",area1);
    printf("PIB:%f bilhoes de reais.\n",Pib1);
    printf("Pontos Turisticos:%d\n",pontosturistico1);
    printf ("Densidade Populacional:%.2f hab/km²\n", densidpopquociente1);
    printf("PIB per Capita:%.2f reais\n", percapitaquociente1);


    //Criar impressão dos valores recebidos da Carta 2 

    printf("Carta 2!\n");


    printf("estado: %c\n",estado2);
    printf("Codigo: %s\n",codigo2);
    printf("Cidade:%s\n",cidade2);
    printf("Populacao:%d\n",populacao2);
    printf("Area:%f km²\n",area2);
    printf("PIB:%f bilhoes de reais.\n",Pib2);
    printf("Pontos Turisticos:%d\n",pontosturistico2);
    printf ("Densidade Populacional:%.2f hab/km²\n", densidpopquociente2);
    printf("PIB per Capita:%.2f reais\n", percapitaquociente2);

    return 0;
}
