// Responsável apenas pela interação com o usuário (ler valores, exibir resultados)

#include <stdio.h>
#include "game.h"

int main() {
    int palpite;

    printf("Bem vindo ao Advinhe!\n");
    printf("Digite o seu palpite: \n");
    scanf("%d", &palpite);

    verificar_palpite(palpite);

    return 0;
}