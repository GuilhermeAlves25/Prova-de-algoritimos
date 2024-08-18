#include <stdio.h>
#include <string.h> // Inclui a biblioteca para manipula��o de strings

int main() {
    
    // Declara��o dos arrays que representam a chave de criptografia e o alfabeto
    char chave[] = {'N','Q','X','P','O','M','A','F','T','R','H','L','Z','G','E','C','Y','J','I','U','W','S','K','D','V','B'};
    char alfabeto[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    // Declara��o de vari�veis para armazenar a palavra a ser criptografada e a palavra criptografada
    char palavra[100];
    char incriptada[100];
    
    int i, j; // Vari�veis para os loops

    // Inicializa o array 'incriptada' com '\0' para garantir que esteja vazio
    memset(incriptada, '\0', sizeof(incriptada));

    // Pede ao usu�rio para digitar uma palavra que ser� criptografada
    printf("Digite uma palavra para ser criptografada:\n");
    scanf("%s", palavra); // L� a palavra digitada pelo usu�rio

    // Loop para percorrer cada letra da palavra digitada
    for (i = 0; i < strlen(palavra); i++) {
        char letra = tolower(palavra[i]); // Converte a letra para min�scula para comparar com o alfabeto
        int encontrado = 0; // Flag para verificar se a letra foi encontrada no alfabeto

        // Loop para comparar a letra da palavra com as letras do alfabeto
        for (j = 0; j < 26; j++) {
            if (letra == alfabeto[j]) { // Se a letra for encontrada no alfabeto
                incriptada[i] = chave[j]; // Substitui pela letra correspondente na chave
                encontrado = 1; // Marca que a letra foi encontrada
                break; // Sai do loop pois a letra j� foi criptografada
            }
        }

        // Se a letra n�o for encontrada no alfabeto (por exemplo, caracteres especiais)
        if (!encontrado) {
            incriptada[i] = palavra[i]; // Mant�m a letra original
        }
    }

    incriptada[i] = '\0'; // Adiciona o caractere nulo ao final da string criptografada

    // Exibe a palavra criptografada
    printf("Palavra digitada criptografada: %s\n", incriptada);
    
    return 0; // Finaliza o programa
}
