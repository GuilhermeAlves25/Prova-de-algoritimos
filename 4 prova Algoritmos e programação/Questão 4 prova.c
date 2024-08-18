#include <stdio.h>

int main() {
    // Declaração de variáveis
    int centavos; // Armazena o valor do troco em centavos
    int moedas = 0; // Contador para o número total de moedas necessárias

	
    // Solicita ao usuário que insira o valor do troco em centavos
    printf("Troco devido (em centavos): ");
    scanf("%d", &centavos); // Lê o valor inserido pelo usuário

    // Calcula o número de moedas de 25 centavos necessárias
    while (centavos >= 25) {
        centavos -= 25; // Subtrai 25 centavos do valor total
        moedas++; // Incrementa o contador de moedas totais
      
    }

    // Calcula o número de moedas de 10 centavos necessárias
    while (centavos >= 10) {
        centavos -= 10; // Subtrai 10 centavos do valor total
        moedas++; // Incrementa o contador de moedas totais
     
    }

    // Calcula o número de moedas de 5 centavos necessárias
    while (centavos >= 5) {
        centavos -= 5; // Subtrai 5 centavos do valor total
        moedas++; // Incrementa o contador de moedas totais
       
    }

    // Calcula o número de moedas de 1 centavo necessárias
    while (centavos >= 1) {
        centavos -= 1; // Subtrai 1 centavo do valor total
        moedas++; // Incrementa o contador de moedas totais
      
    }

    // Exibe o número total de moedas necessárias
    printf("Minimo de moedas necessarias: %d\n", moedas);
	

	
    // Finaliza o programa
    return 0;
}
