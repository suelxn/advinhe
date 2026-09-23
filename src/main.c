// Responsável apenas pela interação com o usuário (ler valores, exibir resultados, loops)

#include <stdio.h>
#include "game.h"

int main() {
    int palpite;
    int resultadoLeitura;
    int tentativas = 0;

    printf("Bem vindo ao Advinhe!\n");
    printf("Sua missão: acertar o número secreto no menor número de tentativas.\n");

    while (1) { // Enquanto o valor for positivo e inteiro, execute o código até o break (até o usuário acertar)
        printf("Insira o seu palpite: \n"); // O programa exibe o comando para o usuário
        resultadoLeitura = scanf("%d", &palpite); // Tenta ler a entrada do teclado, converter em inteiro (%d) e guardar em palpite. Em seguida, grava em resultadoLeitura a quantidade de itens lidos com sucesso (1 se leu um inteiro, ou 0 se o usuário digitou texto).
      
        if (resultadoLeitura != 1) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF); // Enquanto o caractere lido do teclado for diferente de 'Enter' (\n) E diferente do fim de arquivo (EOF), continue lendo e descartando os caracteres.
            break;
        }
        printf("passei");
        tentativas += verificar_palpite(palpite, resultadoLeitura, tentativas);

        if (palpite == NUM_SEC) {
            break;
        }
    }

    return 0;
}