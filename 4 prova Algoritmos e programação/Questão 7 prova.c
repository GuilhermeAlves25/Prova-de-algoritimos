#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[100];
    char criptografada[100];
    size_t i; // Use size_t para evitar compara��es entre tipos diferentes
    int cripto;

    // Solicita a chave de criptografia
    printf("Chave de criptografia:\n");
    scanf("%d", &cripto);

    // Ajusta a chave para 1 se for 11111, ou reduz ao intervalo 0-25
    if (cripto == 11111) {
        cripto = 1;
    } else {
        cripto = cripto % 26;
    }

    // Solicita a palavra a ser criptografada
    printf("Digite o texto:");
    scanf(" %[^\n]", palavra); // L� uma linha inteira, incluindo espa�os

    // Criptografa a palavra
    for (i = 0; i < strlen(palavra); i++) {
        char letra = palavra[i];

        if (isalpha(letra)) {  // Verifica se � uma letra
            char base = islower(letra) ? 'a' : 'A';
            // Aplica��o da f�rmula ci = (pi + K) % 26
            criptografada[i] = (letra - base + cripto) % 26 + base;
        } else {
            criptografada[i] = letra;  // Mant�m caracteres n�o alfab�ticos inalterados
        }
    }

    criptografada[i] = '\0';  // Adiciona o terminador de string

    // Exibe a palavra criptografada
    printf("Texto cifrado: %s", criptografada);

    return 0;
}
