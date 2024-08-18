#include <stdio.h>
#include <string.h>

int main()
{
    // Declaramos uma variável 'T' que vai armazenar o número de rodadas (casos) que o jogo terá
    int T;
	int i;
    // Pedimos ao usuário para informar quantas rodadas o jogo vai ter
    printf("Digite o número de rodadas do jogo: ");
    scanf("%d", &T);
    
    // Iniciamos um loop para executar o jogo 'T' vezes
    for (i = 1; i <= T; i++) {
        // Declaramos três arrays de caracteres: 'a' e 'b' para armazenar as escolhas dos jogadores,
        // e 'c' para armazenar a frase do resultado do jogo
        char a[8], b[8], c[15];

        // Pedimos ao usuário para digitar as duas escolhas (por exemplo, "tesoura" e "papel")
        printf("Rodada %d\n", i);
        printf("Digite a escolha do jogador 1 (tesoura, papel, pedra, lagarto ou Spock): ");
        scanf("%s", a);
        printf("Digite a escolha do jogador 2 (tesoura, papel, pedra, lagarto ou Spock): ");
        scanf("%s", b);

        // Aqui estamos verificando todas as possíveis combinações em que o primeiro jogador (a) vence
        if ((strcmp(a, "tesoura") == 0 && strcmp(b, "papel") == 0) || 
            (strcmp(a, "papel") == 0 && strcmp(b, "pedra") == 0) || 
            (strcmp(a, "pedra") == 0 && strcmp(b, "lagarto") == 0) || 
            (strcmp(a, "lagarto") == 0 && strcmp(b, "Spock") == 0) || 
            (strcmp(a, "Spock") == 0 && strcmp(b, "tesoura") == 0) || 
            (strcmp(a, "tesoura") == 0 && strcmp(b, "lagarto") == 0) || 
            (strcmp(a, "lagarto") == 0 && strcmp(b, "papel") == 0) || 
            (strcmp(a, "papel") == 0 && strcmp(b, "Spock") == 0) || 
            (strcmp(a, "Spock") == 0 && strcmp(b, "pedra") == 0) || 
            (strcmp(a, "pedra") == 0 && strcmp(b, "tesoura") == 0)) {
            // Se 'a' vence, armazenamos a frase "Bazinga!" em 'c'
            strcpy(c, "Bazinga!");
        } 
        // Se 'a' e 'b' são iguais, significa que houve empate
        else if (strcmp(a, b) == 0) {
            // Se foi empate, armazenamos a frase "De novo!" em 'c'
            strcpy(c, "De novo!");
        } 
        // Se nenhuma das condições acima foi verdadeira, então 'b' venceu
        else {
            // Se 'b' venceu, armazenamos a frase "Raj trapaceou!" em 'c'
            strcpy(c, "Raj trapaceou!");
        }

        // Exibimos o resultado do caso atual, incluindo o número do caso e a frase armazenada em 'c'
        printf("Resultado da Rodada #%d: %s\n\n", i, c);
    }

    printf("Fim do jogo!\n");

    return 0; // O programa termina aqui
}
