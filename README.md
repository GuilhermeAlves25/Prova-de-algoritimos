# Quarta Prova de Algoritmos - Código e Explicação

## Nome: Guilherme Alves da Silva 
## Data: 18 de março de 2024 
## Professor: Felipe Gonçalves dos Santos

---

## Introdução

Este README apresenta a solução para as questões da quarta prova de Algoritmos. A seguir, descrevo o problema de cada questão e apresento a solução implementada, com uma explicação detalhada do código.

---

## Questão 1: Soma dos elementos do array.

### Descrição
Este programa em C solicita ao usuário que insira o tamanho e os elementos de um array de inteiros. Em seguida, calcula e exibe a soma de todos os elementos do array.

### Explicação

O código é dividido em duas partes principais:

1. Função soma_array: Calcula a soma dos elementos do array.
2. Função main: Gerencia a entrada do usuário, chama a função soma_array, e exibe o resultado.

Exemplo de Entrada e Saída

Entrada: 4 2 5 9 10
         
Saída: A soma dos elementos do array é: 26

---

## Questão 2: Multiplicação de matrizes quadradas.

## Descrição

Este programa em C realiza a multiplicação de duas matrizes quadradas de ordem n e exibe a matriz resultante. O usuário deve fornecer o tamanho da matriz e os elementos de ambas as matrizes a serem multiplicadas.

## Estrutura do Código

O código é dividido em duas partes principais:

1. *Função multiplica_matrizes*: Executa a multiplicação das matrizes.
2. *Função main*: Gerencia a entrada do usuário, chama a função multiplica_matrizes, e exibe a matriz resultante.

## Exemplo de Entrada e Saída

Entrada: 
Digite o tamanho da matriz: 2

Digite os elementos da matriz A: 1 2 3 4
Digite os elementos da matriz B: 5 6 7 8

Saída: Matriz Resultante:
       19 22
       43 50


---

## Questão 3: Credit Cards (Validação de Cartões de Crédito com Algoritmo de Luhn)

## Descrição

Este programa em C valida números de cartões de crédito usando o algoritmo de Luhn. Ele verifica a validade do número do cartão e identifica o tipo de cartão (AMEX, MASTERCARD ou VISA) com base nos primeiros dígitos e no número total de dígitos.

## Estrutura do Código

Contagem de Dígitos: 
A função num_digitos calcula a quantidade total de dígitos no número do cartão.
Extração dos Dois Primeiros Dígitos: A função dois_primeiros extrai os dois primeiros dígitos do número do cartão.

Multiplicação e Soma:
A função multiplicar aplica o algoritmo de Luhn, que envolve dobrar cada segundo dígito a partir da direita e somar os dígitos do valor obtido.
A função somar adiciona os dígitos restantes que não foram dobrados.

Validação e Identificação:
A função valido verifica se a soma total dos dígitos é um múltiplo de 10 para garantir a validade do número do cartão.
Com base nos dois primeiros dígitos e na quantidade total de dígitos, o cartão é classificado como American Express, MasterCard ou Visa.

## Exemplo de Entrada e Saída

Entrada: 378282246310005

Saída: AMEX


---

## Questão 4: Calculador de Moedas para Troco

## Descrição

Este programa calcula o número mínimo de moedas necessárias para fornecer um determinado valor de troco, utilizando moedas de 25, 10, 5 e 1 centavo. O objetivo é fornecer o troco com o menor número possível de moedas.

## Estrutura do Código

O código é composto por uma única função main, que realiza a leitura do valor do troco em centavos, calcula o número mínimo de moedas necessárias e exibe o resultado.

Exemplo de Entrada e Saída

Entrada: 55

Saída: Minimo de moedas necessarias: 3

---

## Questão 5:  jogo Scrabble (Contador de Pontos para Nomes)

## Descrição

Este programa calcula e compara a pontuação de dois nomes com base em um sistema de pontuação específico para cada letra. O sistema de pontuação é baseado em um array fixo onde cada índice corresponde a uma letra do alfabeto.

## Estrutura do Código

## calcular_pontuacao(char *palavra)

Descrição: Calcula a pontuação total de uma palavra com base em um sistema de pontos para cada letra do alfabeto.
Entrada: Uma string representando a palavra.
Saída: A pontuação total da palavra.

## main(void)
Descrição: Função principal que gerencia a interação com o usuário, calcula a pontuação das palavras e determina o vencedor.
Processo:
Solicita palavras para dois jogadores.
Calcula e compara as pontuações.
Imprime o resultado do jogo.

## fgets(char *s, int size, FILE *stream)
Descrição: Lê uma linha de entrada do usuário até o tamanho especificado ou até encontrar um caractere de nova linha.
Entrada: Um buffer para armazenar a entrada, o tamanho do buffer, e o fluxo de entrada (stdin para teclado).

## strcspn(const char *s, const char *reject)
Descrição: Encontra o índice do primeiro caractere em s que não está em reject, útil para remover caracteres indesejados como nova linha.
Entrada: A string a ser analisada e a string de caracteres a serem evitados.

## Exemplo de Entrada e Saída

Entrada: 
Palavra do Jogador 1: Question? 
Palavra do Jogador 2: Question!

Saída: Empate!

Entrada: 
Palavra do Jogador 1: red 
Palavra do Jogador 2: wheelbarrow

Saída: Jogador 2 vence!

Exemplo de Entrada: 
Palavra do Jogador 1: COMPUTER 
Palavra do Jogador 2: science

Saída: Jogador 1 vence!

---

## Questão 6: Substituição (Criptografia Simples)

## Descrição

Este programa criptografa uma palavra fornecida pelo usuário utilizando uma chave de criptografia simples baseada na substituição de letras. Cada letra do alfabeto é substituída por uma letra correspondente em uma chave de criptografia predefinida.

## Estrutura do Código

O código é composto pela função principal main, que realiza a leitura da palavra a ser criptografada, aplica a criptografia usando uma chave definida, e exibe a palavra criptografada.

Exemplo de Entrada e Saída

Entrada: HELLO
Saída: FOLLE

---

## Questão 7: César (Criptografia por Cifra de César)

## Descrição

Este programa criptografa uma palavra fornecida pelo usuário utilizando a cifra de César, que é um tipo de cifra de substituição onde cada letra do alfabeto é deslocada um determinado número de posições.

## Estrutura do Código

O código é composto pela função principal main, que realiza a leitura da palavra a ser criptografada, aplica a cifra de César usando um deslocamento fornecido pelo usuário, e exibe a palavra criptografada.

## Exemplo de Entrada e Saída

Entrada: 
Chave de criptografia: 11111 
Digite o texto: HELLO
Saída: IFMMP

Entrada: 
Chave de criptografia: 13 
Digite o texto: Hi there!
Saída: Uv gurer!

---

## Questão 8: Construindo Casas (Cálculo da Área do Terreno)

## Descrição

Este programa calcula o lado de um terreno com base em três valores fornecidos pelo usuário: as dimensões de uma casa e uma proporção. O programa continua executando até que o usuário insira um valor de 0 para qualquer um dos três valores, o que encerra o loop e termina o programa.

## Estrutura do Código

O código é composto pela função principal main, que realiza a leitura dos valores fornecidos pelo usuário, calcula a área do terreno, e exibe o lado do terreno convertido para um valor inteiro.

## Exemplo de Entrada e Saída:

Caso 1: 
Digite os valores de A, B e C (digite 0 em qualquer um para sair): 8 10 20
Saída: Lado do terreno convertido: 20

Caso 2:
Digite os valores de A, B e C (digite 0 em qualquer um para sair): 1 10 100
Saída: Lado do terreno convertido: 3

Caso 3: 
Digite os valores de A, B e C (digite 0 em qualquer um para sair): 10 3 100
Saída: Lado do terreno convertido: 5

---

## Questão 9: Bazinga! (Jogo de Pedra, Papel, Tesoura, Lagarto e Spock)

## Descrição

Este programa simula um jogo de "Pedra, Papel, Tesoura, Lagarto e Spock", onde dois jogadores fazem suas escolhas e o programa determina o vencedor ou se houve empate. O jogo pode ser jogado por várias rodadas, e o programa exibirá o resultado de cada rodada.

Caso a escolha de Sheldon vence a escolha de Raj, imprime "Bazinga!".
Se ambas as escolhas são iguais, imprime "De novo!".
Se não, imprime "Raj trapaceou!".

## Estrutura do Código

O código é composto pela função principal main, que lida com a entrada do usuário, processa as escolhas dos jogadores, e exibe o resultado de cada rodada.

## Exemplo de Entrada e Saída:

Entrada: Digite o numero de rodadas do jogo: 3

Rodada 1:
Entrada: 
Digite a escolha do jogador 1 (tesoura, papel, pedra, lagarto ou Spock): papel
Digite a escolha do jogador 2 (tesoura, papel, pedra, lagarto ou Spock): pedra
         
Saída: Resultado da Rodada #1: Bazinga!

Rodada 2:
Entrada: 
Digite a escolha do jogador 1 (tesoura, papel, pedra, lagarto ou Spock): lagarto
Digite a escolha do jogador 2 (tesoura, papel, pedra, lagarto ou Spock): tesoura
         
Saída: Resultado da Rodada #2: Raj trapaceou!

Rodada 3
entrada: 
Digite a escolha do jogador 1 (tesoura, papel, pedra, lagarto ou Spock): spock
Digite a escolha do jogador 2 (tesoura, papel, pedra, lagarto ou Spock): spock

Saída: Resultado da Rodada #3: De novo!

Fim do jogo!

