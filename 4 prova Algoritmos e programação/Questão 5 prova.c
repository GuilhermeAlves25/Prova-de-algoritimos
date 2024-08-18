#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Pontuação atribuída a cada letra do alfabeto
int pontos[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int calcular_pontuacao(char *palavra);

int main(void)
{
    // Buffers para armazenar as palavras dos jogadores
    char palavra_jogador1[100];
    char palavra_jogador2[100];

    // Solicita ao usuário as palavras dos dois jogadores
    printf("Palavra do Jogador 1: ");
    fgets(palavra_jogador1, sizeof(palavra_jogador1), stdin);
    palavra_jogador1[strcspn(palavra_jogador1, "\n")] = '\0'; // Remove o caractere de nova linha, se presente

    printf("Palavra do Jogador 2: ");
    fgets(palavra_jogador2, sizeof(palavra_jogador2), stdin);
    palavra_jogador2[strcspn(palavra_jogador2, "\n")] = '\0'; // Remove o caractere de nova linha, se presente

    // Calcula a pontuação de cada palavra
    int pontuacao_jogador1 = calcular_pontuacao(palavra_jogador1);
    int pontuacao_jogador2 = calcular_pontuacao(palavra_jogador2);

    // Determina o vencedor
    if (pontuacao_jogador1 > pontuacao_jogador2)
    {
        printf("Jogador 1 vence!\n");
    }
    else if (pontuacao_jogador2 > pontuacao_jogador1)
    {
        printf("Jogador 2 vence!\n");
    }
    else
    {
        printf("Empate!\n");
    }

    return 0; // Adicionado para sinalizar o término bem-sucedido do programa
}

int calcular_pontuacao(char *palavra)
{
    // Inicializa a pontuação total
    int pontuacao_total = 0;
	int i;
    // Calcula a pontuação de cada caractere na palavra
    int comprimento = strlen(palavra); // Declarada aqui
    for ( i = 0; i < comprimento; i++)
    {
        if (isupper(palavra[i]))
        {
            pontuacao_total += pontos[palavra[i] - 'A'];
        }
        else if (islower(palavra[i]))
        {
            pontuacao_total += pontos[palavra[i] - 'a'];
        }
    }

    return pontuacao_total;
}
