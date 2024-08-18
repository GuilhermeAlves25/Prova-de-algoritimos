#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Fun��es declaradas antes de serem usadas no programa principal
int num_digitos(long long num_cartao);
int dois_primeiros(long long num_cartao, int numero_de_digitos);
int multiplicar(long long num_cartao);
int somar(long long num_cartao);
void valido(int resultado_algoritmo, int dois_primeiros_digitos, int numero_de_digitos);

int main(void) {
    // Array de caracteres para armazenar o n�mero do cart�o como string
    char input[20];
    long long num_cartao;

    // Solicita ao usu�rio que insira o n�mero do cart�o
    printf("Numero:\n");
    fgets(input, sizeof(input), stdin); // L� a entrada do usu�rio como string para evitar problemas com tipos de dados


    num_cartao = atoll(input); // Converte a string para um n�mero do tipo long long

    // Verifica se o n�mero do cart�o � inv�lido (n�mero negativo ou zero)
    if (num_cartao <= 0) {
        printf("INVALIDO\n");
        return 1; // Encerra o programa com um c�digo de erro
    }

    // Calcula o n�mero de d�gitos no cart�o
    int numero_de_digitos = num_digitos(num_cartao);

    // Obt�m os dois primeiros d�gitos do n�mero do cart�o
    int dois_primeiros_digitos = dois_primeiros(num_cartao, numero_de_digitos);

    // Executa a multiplica��o dos d�gitos conforme o algoritmo de Luhn
    int multiplicacao = multiplicar(num_cartao);

    // Soma os d�gitos n�o multiplicados
    int soma = somar(num_cartao);

    // Soma os resultados da multiplica��o e soma dos d�gitos
    int resultado_algoritmo = multiplicacao + soma;

    // Verifica se o n�mero do cart�o � v�lido e qual o tipo do cart�o
    valido(resultado_algoritmo, dois_primeiros_digitos, numero_de_digitos);

    return 0; // Encerra o programa com sucesso
}

// Fun��o para contar o n�mero de d�gitos no n�mero do cart�o
int num_digitos(long long num_cartao) {
    int num_digitos = 0;

    // Conta o n�mero de d�gitos dividindo o n�mero por 10 repetidamente
    while (num_cartao > 0) {
        num_cartao /= 10;
        num_digitos++;
    }

    return num_digitos; // Retorna o n�mero de d�gitos
}

// Fun��o para obter os dois primeiros d�gitos do n�mero do cart�o
int dois_primeiros(long long num_cartao, int numero_de_digitos) {
    // Divide o n�mero por 10 elevado ao n�mero de d�gitos menos 2
    return num_cartao / pow(10, numero_de_digitos - 2);
}

// Fun��o para multiplicar certos d�gitos conforme o algoritmo de Luhn
int multiplicar(long long num_cartao) {
    int multiplicacao = 0;

    // Percorre o n�mero do cart�o, multiplicando os d�gitos alternadamente
    while (num_cartao > 0) {
        num_cartao /= 10; // Ignora o d�gito �mpar (come�ando da direita)
        int operacao = (num_cartao % 10) * 2; // Multiplica o d�gito por 2

        // Se o resultado da multiplica��o for maior que 9, soma os d�gitos
        if (operacao > 9) {
            operacao = (operacao % 10) + (operacao / 10);
        }

        multiplicacao += operacao; // Soma o resultado � multiplica��o total
        num_cartao /= 10; // Avan�a para o pr�ximo d�gito
    }

    return multiplicacao; // Retorna a soma da multiplica��o dos d�gitos
}

// Fun��o para somar os d�gitos n�o multiplicados conforme o algoritmo de Luhn
int somar(long long num_cartao) {
    int soma = 0;

    // Percorre o n�mero do cart�o, somando os d�gitos n�o multiplicados
    while (num_cartao > 0) {
        soma += (num_cartao % 10); // Soma o d�gito ao total
        num_cartao /= 100; // Pula dois d�gitos (um foi ignorado no loop anterior)
    }

    return soma; // Retorna a soma dos d�gitos
}

// Fun��o para verificar se o cart�o � v�lido e qual o tipo do cart�o
void valido(int resultado_algoritmo, int dois_primeiros_digitos, int numero_de_digitos) {
    // Verifica se a soma final do algoritmo de Luhn � divis�vel por 10
    if (resultado_algoritmo % 10 == 0) {
        // Verifica se o cart�o � um AMEX
        if ((dois_primeiros_digitos == 34 || dois_primeiros_digitos == 37) && (numero_de_digitos == 15)) {
            printf("AMEX\n");
        }
        // Verifica se o cart�o � um MASTERCARD
        else if ((dois_primeiros_digitos >= 51 && dois_primeiros_digitos <= 55) && (numero_de_digitos == 16)) {
            printf("MASTERCARD\n");
        }
        // Verifica se o cart�o � um VISA
        else if ((dois_primeiros_digitos >= 40 && dois_primeiros_digitos <= 49) && (numero_de_digitos >= 13 && numero_de_digitos <= 16)) {
            printf("VISA\n");
        }
        // Se n�o for nenhum dos cart�es acima, � inv�lido
        else {
            printf("INVALIDO\n");
        }
    } 
    // Se o algoritmo de Luhn falhar, o cart�o � inv�lido
    else {
        printf("INVALIDO\n");
    }
}
