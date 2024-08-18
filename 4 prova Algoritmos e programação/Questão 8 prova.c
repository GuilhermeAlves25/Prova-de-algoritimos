#include <stdio.h>
#include <math.h>

int main() {
    // Declarando três variáveis inteiras A, B, C para armazenar os valores de entrada
    int A, B, C;

    // Iniciando um loop infinito para permitir várias entradas do usuário
    while (1) {
        // Pedindo ao usuário para digitar três valores inteiros (A, B e C)
        printf("Digite os valores de A, B e C (digite 0 em qualquer um para sair): ");
        scanf("%d %d %d", &A, &B, &C);
        
        // Se qualquer um dos valores A, B ou C for 0, o loop será interrompido e o programa termina
        if (A == 0 || B == 0 || C == 0) break; 
          
        // Calculando a área da casa multiplicando A por B
        int areaCasa = A * B;

        // Calculando a área do terreno usando a proporção C/100.0
        double areaTerreno = areaCasa / (C / 100.0);

        // Calculando o lado do terreno, que é a raiz quadrada da área do terreno
        double ladoTerreno = sqrt(areaTerreno);

        // Convertendo o lado do terreno para um valor inteiro
        int ladoconvertido = (int)ladoTerreno;

        // Exibindo o lado do terreno arredondado
        printf("Lado do terreno convertido: %d\n", ladoconvertido);
    }

    // Retornando 0 para indicar que o programa terminou sem erros
    return 0;
}
