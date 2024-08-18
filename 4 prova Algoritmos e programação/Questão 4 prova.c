#include <stdio.h>

int main() {
    // Declara��o de vari�veis
    int centavos; // Armazena o valor do troco em centavos
    int moedas = 0; // Contador para o n�mero total de moedas necess�rias

	
    // Solicita ao usu�rio que insira o valor do troco em centavos
    printf("Troco devido (em centavos): ");
    scanf("%d", &centavos); // L� o valor inserido pelo usu�rio

    // Calcula o n�mero de moedas de 25 centavos necess�rias
    while (centavos >= 25) {
        centavos -= 25; // Subtrai 25 centavos do valor total
        moedas++; // Incrementa o contador de moedas totais
      
    }

    // Calcula o n�mero de moedas de 10 centavos necess�rias
    while (centavos >= 10) {
        centavos -= 10; // Subtrai 10 centavos do valor total
        moedas++; // Incrementa o contador de moedas totais
     
    }

    // Calcula o n�mero de moedas de 5 centavos necess�rias
    while (centavos >= 5) {
        centavos -= 5; // Subtrai 5 centavos do valor total
        moedas++; // Incrementa o contador de moedas totais
       
    }

    // Calcula o n�mero de moedas de 1 centavo necess�rias
    while (centavos >= 1) {
        centavos -= 1; // Subtrai 1 centavo do valor total
        moedas++; // Incrementa o contador de moedas totais
      
    }

    // Exibe o n�mero total de moedas necess�rias
    printf("Minimo de moedas necessarias: %d\n", moedas);
	

	
    // Finaliza o programa
    return 0;
}
