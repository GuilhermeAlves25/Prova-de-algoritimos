#include <stdio.h>

// Função que recebe um array e seu tamanho, e retorna a soma de todos os elementos do array
int soma_array(int array[], int tamanho){
	int i;
	int soma=0; // Inicializa a variável soma com 0
	
	// Loop para percorrer todos os elementos do array
	for(i=0;i<tamanho;i++){
		// Adiciona cada elemento do array à variável soma
		soma += array[i];
	}
	
	// Retorna a soma de todos os elementos do array
	return soma;
}

int main(){
	int i; // Variável para o loop
	int tamanho; // Variável para armazenar o tamanho do array
	int resultado; // Variável para armazenar o resultado da soma
	
	// Solicita ao usuário que digite o tamanho do array
	printf("Digite o tamanho do array: \n");
	scanf("%d",&tamanho);
	
	// Declaração do array com o tamanho fornecido pelo usuário
	int array[tamanho];
	
	// Solicita ao usuário que digite os elementos do array
	printf("Digite %d numeros:\n", tamanho);
	for(i=0;i<tamanho;i++){
		// Pede cada número individualmente
		printf("numero %d:\n", i + 1);
		scanf("%d", &array[i]);
	}
	
	// Chama a função soma_array para calcular a soma dos elementos do array
	resultado = soma_array(array, tamanho);
	
	// Exibe o resultado da soma para o usuário
	printf("A soma dos elementos do array e: %d\n", resultado);
	
	// Retorna 0 para indicar que o programa terminou corretamente
	return 0;
}
