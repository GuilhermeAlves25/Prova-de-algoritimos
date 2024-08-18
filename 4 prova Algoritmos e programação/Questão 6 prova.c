#include <stdio.h>
#include <string.h> // Inclui a biblioteca para manipulação de strings

int main() {
    
    // Declaração dos arrays que representam a chave de criptografia e o alfabeto
    char chave[] = {'N','Q','X','P','O','M','A','F','T','R','H','L','Z','G','E','C','Y','J','I','U','W','S','K','D','V','B'};
    char alfabeto[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    // Declaração de variáveis para armazenar a palavra a ser criptografada e a palavra criptografada
    char palavra[100];
    char incriptada[100];
    
    int i, j; // Variáveis para os loops

    // Inicializa o array 'incriptada' com '\0' para garantir que esteja vazio
    memset(incriptada, '\0', sizeof(incriptada));

    // Pede ao usuário para digitar uma palavra que será criptografada
    printf("Digite uma palavra para ser criptografada:\n");
    scanf("%s", palavra); // Lê a palavra digitada pelo usuário

    // Loop para percorrer cada letra da palavra digitada
    for (i = 0; i < strlen(palavra); i++) {
        char letra = tolower(palavra[i]); // Converte a letra para minúscula para comparar com o alfabeto
        int encontrado = 0; // Flag para verificar se a letra foi encontrada no alfabeto

        // Loop para comparar a letra da palavra com as letras do alfabeto
        for (j = 0; j < 26; j++) {
            if (letra == alfabeto[j]) { // Se a letra for encontrada no alfabeto
                incriptada[i] = chave[j]; // Substitui pela letra correspondente na chave
                encontrado = 1; // Marca que a letra foi encontrada
                break; // Sai do loop pois a letra já foi criptografada
            }
        }

        // Se a letra não for encontrada no alfabeto (por exemplo, caracteres especiais)
        if (!encontrado) {
            incriptada[i] = palavra[i]; // Mantém a letra original
        }
    }

    incriptada[i] = '\0'; // Adiciona o caractere nulo ao final da string criptografada

    // Exibe a palavra criptografada
    printf("Palavra digitada criptografada: %s\n", incriptada);
    
    return 0; // Finaliza o programa
}
