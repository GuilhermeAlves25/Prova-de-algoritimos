#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Funções declaradas antes de serem usadas no programa principal
int num_digitos(long long num_cartao);
int dois_primeiros(long long num_cartao, int numero_de_digitos);
int multiplicar(long long num_cartao);
int somar(long long num_cartao);
void valido(int resultado_algoritmo, int dois_primeiros_digitos, int numero_de_digitos);

int main(void) {
    // Array de caracteres para armazenar o número do cartão como string
    char input[20];
    long long num_cartao;

    // Solicita ao usuário que insira o número do cartão
    printf("Numero:\n");
    fgets(input, sizeof(input), stdin); // Lê a entrada do usuário como string para evitar problemas com tipos de dados


    num_cartao = atoll(input); // Converte a string para um número do tipo long long

    // Verifica se o número do cartão é inválido (número negativo ou zero)
    if (num_cartao <= 0) {
        printf("INVALIDO\n");
        return 1; // Encerra o programa com um código de erro
    }

    // Calcula o número de dígitos no cartão
    int numero_de_digitos = num_digitos(num_cartao);

    // Obtém os dois primeiros dígitos do número do cartão
    int dois_primeiros_digitos = dois_primeiros(num_cartao, numero_de_digitos);

    // Executa a multiplicação dos dígitos conforme o algoritmo de Luhn
    int multiplicacao = multiplicar(num_cartao);

    // Soma os dígitos não multiplicados
    int soma = somar(num_cartao);

    // Soma os resultados da multiplicação e soma dos dígitos
    int resultado_algoritmo = multiplicacao + soma;

    // Verifica se o número do cartão é válido e qual o tipo do cartão
    valido(resultado_algoritmo, dois_primeiros_digitos, numero_de_digitos);

    return 0; // Encerra o programa com sucesso
}

// Função para contar o número de dígitos no número do cartão
int num_digitos(long long num_cartao) {
    int num_digitos = 0;

    // Conta o número de dígitos dividindo o número por 10 repetidamente
    while (num_cartao > 0) {
        num_cartao /= 10;
        num_digitos++;
    }

    return num_digitos; // Retorna o número de dígitos
}

// Função para obter os dois primeiros dígitos do número do cartão
int dois_primeiros(long long num_cartao, int numero_de_digitos) {
    // Divide o número por 10 elevado ao número de dígitos menos 2
    return num_cartao / pow(10, numero_de_digitos - 2);
}

// Função para multiplicar certos dígitos conforme o algoritmo de Luhn
int multiplicar(long long num_cartao) {
    int multiplicacao = 0;

    // Percorre o número do cartão, multiplicando os dígitos alternadamente
    while (num_cartao > 0) {
        num_cartao /= 10; // Ignora o dígito ímpar (começando da direita)
        int operacao = (num_cartao % 10) * 2; // Multiplica o dígito por 2

        // Se o resultado da multiplicação for maior que 9, soma os dígitos
        if (operacao > 9) {
            operacao = (operacao % 10) + (operacao / 10);
        }

        multiplicacao += operacao; // Soma o resultado à multiplicação total
        num_cartao /= 10; // Avança para o próximo dígito
    }

    return multiplicacao; // Retorna a soma da multiplicação dos dígitos
}

// Função para somar os dígitos não multiplicados conforme o algoritmo de Luhn
int somar(long long num_cartao) {
    int soma = 0;

    // Percorre o número do cartão, somando os dígitos não multiplicados
    while (num_cartao > 0) {
        soma += (num_cartao % 10); // Soma o dígito ao total
        num_cartao /= 100; // Pula dois dígitos (um foi ignorado no loop anterior)
    }

    return soma; // Retorna a soma dos dígitos
}

// Função para verificar se o cartão é válido e qual o tipo do cartão
void valido(int resultado_algoritmo, int dois_primeiros_digitos, int numero_de_digitos) {
    // Verifica se a soma final do algoritmo de Luhn é divisível por 10
    if (resultado_algoritmo % 10 == 0) {
        // Verifica se o cartão é um AMEX
        if ((dois_primeiros_digitos == 34 || dois_primeiros_digitos == 37) && (numero_de_digitos == 15)) {
            printf("AMEX\n");
        }
        // Verifica se o cartão é um MASTERCARD
        else if ((dois_primeiros_digitos >= 51 && dois_primeiros_digitos <= 55) && (numero_de_digitos == 16)) {
            printf("MASTERCARD\n");
        }
        // Verifica se o cartão é um VISA
        else if ((dois_primeiros_digitos >= 40 && dois_primeiros_digitos <= 49) && (numero_de_digitos >= 13 && numero_de_digitos <= 16)) {
            printf("VISA\n");
        }
        // Se não for nenhum dos cartões acima, é inválido
        else {
            printf("INVALIDO\n");
        }
    } 
    // Se o algoritmo de Luhn falhar, o cartão é inválido
    else {
        printf("INVALIDO\n");
    }
}
