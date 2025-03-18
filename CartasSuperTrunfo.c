#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //Desafio Super trunfo Novato
    //Criar varáveis

    char estado1,estado2;
    char codigo1[20],codigo2[20];
    char cidade1[40],cidade2[40];
    int populacao1,populacao2;
    float area1,area2;
    float Pib1,Pib2;
    int pontosturistico1,pontosturistico2;

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

  //Criar impressão dos valores recebidos da Carta 1
   
    printf("Carta 1!\n");


    printf("estado: %c\n",estado1);
    printf("Codigo:%s\n",codigo1);
    printf("Cidade:%s\n",cidade1);
    printf("Populacao:%d\n",&populacao1);
    printf("Area:%f km²\n",area1);
    printf("PIB:%f bilhoes de reais.\n",Pib1);
    printf("Pontos Turisticos:%d\n",pontosturistico1);

    //Criar impressão dos valores recebidos da Carta 2 

    printf("Carta 2!\n");


    printf("estado: %c\n",estado2);
    printf("Codigo: %s\n",codigo2);
    printf("Cidade:%s\n",cidade2);
    printf("Populacao:%d\n",&populacao2);
    printf("Area:%f km²\n",area2);
    printf("PIB:%f bilhoes de reais.\n",Pib2);
    printf("Pontos Turisticos:%d\n",pontosturistico2);

    return 0;
}
