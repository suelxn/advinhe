// Contém o código com a lógica aplicada, utilizando as funções declaradas no arquivo game.h

#include <stdio.h>
#include "game.h" // Importa a constante NUM_SEC e as declarações do header

void iniciar_jogo() {
    printf("Jogo de adivinhacao iniciado!\n");
}
void verificar_palpite(int palpite){
    if (palpite == NUM_SEC){
        printf("Parabéns! Você acertou o número secreto!\n");
    } else {
        printf("Você errou. Tente novamente.\n");
    }
}