#include <stdio.h>

// Fun��o que recebe um array e seu tamanho, e retorna a soma de todos os elementos do array
int soma_array(int array[], int tamanho){
	int i;
	int soma=0; // Inicializa a vari�vel soma com 0
	
	// Loop para percorrer todos os elementos do array
	for(i=0;i<tamanho;i++){
		// Adiciona cada elemento do array � vari�vel soma
		soma += array[i];
	}
	
	// Retorna a soma de todos os elementos do array
	return soma;
}

int main(){
	int i; // Vari�vel para o loop
	int tamanho; // Vari�vel para armazenar o tamanho do array
	int resultado; // Vari�vel para armazenar o resultado da soma
	
	// Solicita ao usu�rio que digite o tamanho do array
	printf("Digite o tamanho do array: \n");
	scanf("%d",&tamanho);
	
	// Declara��o do array com o tamanho fornecido pelo usu�rio
	int array[tamanho];
	
	// Solicita ao usu�rio que digite os elementos do array
	printf("Digite %d numeros:\n", tamanho);
	for(i=0;i<tamanho;i++){
		// Pede cada n�mero individualmente
		printf("numero %d:\n", i + 1);
		scanf("%d", &array[i]);
	}
	
	// Chama a fun��o soma_array para calcular a soma dos elementos do array
	resultado = soma_array(array, tamanho);
	
	// Exibe o resultado da soma para o usu�rio
	printf("A soma dos elementos do array e: %d\n", resultado);
	
	// Retorna 0 para indicar que o programa terminou corretamente
	return 0;
}
