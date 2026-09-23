// Contém o código com a lógica aplicada, utilizando as funções declaradas no arquivo game.h

#include <stdio.h>
#include "game.h" // Importa a constante NUM_SEC e as declarações do header

void iniciar_jogo() {
    printf("Jogo de adivinhacao iniciado!\n");
}

int verificar_palpite(int palpite, int resultadoLeitura, int tentativas) {
    if (resultadoLeitura != 1 || palpite <= 0) {
        printf("Palpite inválido. Insira um número inteiro e positivo.\n\n");
    }
    else if (palpite == NUM_SEC) {
        int x = tentativas + 1;
        printf("\n Tentativa número:%d\n", x);
        printf("Parabéns! Você acertou o número secreto!\n\n");
        return x;
    }
    else if (palpite < NUM_SEC) {
        int x = tentativas + 1;
        printf("Tentativa número:%d\n", x);
        printf("Você errou. Tente novamente.\n");
        printf("Dica: O número secreto é maior que o seu palpite.\n\n");
        return x;
    }
    else if (palpite > NUM_SEC) {
        int x = tentativas + 1;
        printf("Tentativa número:%d\n", x);
        printf("Você errou. Tente novamente.\n");
        printf("Dica: O número secreto é menor que o seu palpite.\n\n");
        return x;
    }
}


// RF10 - O sistema deve contabilizar cada palpite válido enviado pelo usuário.
// RN03: Cada palpite válido deve incrementar o contador em +1.  
// RN04: O palpite que resulta no acerto também é contabilizado como tentativa válida. 