#include <stdio.h>

// Código-fonte em C para o cadastramento de duas cartas p/o jogo Super Trunfo Países.

int main() {
    // Começo do código-fonte, abaixo estão cada variável com um valor inicial atribuído p/evitar qualquer lixo na memória.
    char estado1 = '\0', estado2 = '\0'; // Uso char para armazenar um caractere.
    char codigo1[4] = "", codigo2[4] = ""; // USo char + a quantidade de caracteres da variável entre [].
    char cidade1[50] = "", cidade2[50] = "";
    int populacao1 = 0, populacao2 = 0; // Uso int para armazenar números inteiros.
    float area1 = 0.0, area2 = 0.0; // Uso float para armazenar números com casas decimais.
    float pib1 = 0.0, pib2 = 0.0;
    int pturisticos1 = 0, pturisticos2 = 0;

    /* Entradas de dados para a primeira carta, sendo que para cada scanf devo colocar um printf
     para que o usuário saiba o que informar, além disso, para cada variável, insiro um controle de caractere que coemça com %
     e para cada uma delas insiro uma letra "&" */

    printf("Digite a letra do estado da primeira carta (A-H):\n"); 
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta (ex: A01, B03):\n");
    scanf("%3s", codigo1); //  Utilizo o controle %3s para permitir a entrada de somente 3 caracteres.
    printf("Digite o nome da cidade da primeira carta (ex: MANAUS):\n");
    scanf(" %[^\n]", cidade1); // Utilizo ^\n para permitir a entrada de nomes com espaço.
    printf("Digite a população da cidade da primeira carta (ex: 10000):\n");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade da primeira carta (km²) (ex: 100.50):\n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da primeira carta (ex: 100.00):\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da primeira carta (ex: 10):\n");
    scanf("%d", &pturisticos1);

    // Aqui as entradas de dados para a segunda carta, seguindo as mesmas regras anteriores.

    printf("Digite a letra do estado da segunda carta (A-H):\n"); 
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta (ex: A01, B03):\n");
    scanf("%3s", codigo2);
    printf("Digite o nome da cidade da segunda carta (ex: MANAUS):\n");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população da cidade da segunda carta (ex: 10000):\n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade da segunda carta (km²) (ex: 100.50):\n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da segunda carta (ex: 100.00):\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da segunda carta (ex: 10):\n");
    scanf("%d", &pturisticos2);

    // Saída de dados da primeira carta

    printf("\nCARTA 1\n");
    printf("Estado: %c\n", estado1); 
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1); // Utilizo o controle %.2f para 2 casas decimais após a vírgula.
    printf("PIB: R$ %.2f \n", pib1);
    printf("Pontos Turísticos: %d\n", pturisticos1);

    // Saída de dados da segunda carta

    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f \n", pib2);
    printf("Pontos Turísticos: %d\n", pturisticos2);

    return 0; 
}
