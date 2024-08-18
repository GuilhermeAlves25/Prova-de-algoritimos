#include <stdio.h>
#include <math.h>

int main() {
    // Declarando tr�s vari�veis inteiras A, B, C para armazenar os valores de entrada
    int A, B, C;

    // Iniciando um loop infinito para permitir v�rias entradas do usu�rio
    while (1) {
        // Pedindo ao usu�rio para digitar tr�s valores inteiros (A, B e C)
        printf("Digite os valores de A, B e C (digite 0 em qualquer um para sair): ");
        scanf("%d %d %d", &A, &B, &C);
        
        // Se qualquer um dos valores A, B ou C for 0, o loop ser� interrompido e o programa termina
        if (A == 0 || B == 0 || C == 0) break; 
          
        // Calculando a �rea da casa multiplicando A por B
        int areaCasa = A * B;

        // Calculando a �rea do terreno usando a propor��o C/100.0
        double areaTerreno = areaCasa / (C / 100.0);

        // Calculando o lado do terreno, que � a raiz quadrada da �rea do terreno
        double ladoTerreno = sqrt(areaTerreno);

        // Convertendo o lado do terreno para um valor inteiro
        int ladoconvertido = (int)ladoTerreno;

        // Exibindo o lado do terreno arredondado
        printf("Lado do terreno convertido: %d\n", ladoconvertido);
    }

    // Retornando 0 para indicar que o programa terminou sem erros
    return 0;
}
