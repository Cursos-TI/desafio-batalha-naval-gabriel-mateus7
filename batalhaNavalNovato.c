#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};

    // Preencher horizontal (linha 2, colunas D, E, F → índices 3, 4, 5)
    for (int i = 0; i < 3; i++) {
        tabuleiro[2][3 + i] = 3;
    }

    // Preencher vertical (coluna E → índice 4, linhas 7, 8, 9 → índices 6, 7, 8)
    for (int i = 0; i < 3; i++) {
        tabuleiro[6 + i][7] = 3;
    }

    // Imprimir cabeçalho das colunas (A a J)
    printf("   ");
    for (char letra = 'A'; letra <= 'J'; letra++) {
        printf(" %c", letra);
    }
    printf("\n");

    // Imprimir o tabuleiro com numeração das linhas
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Número da linha (1 a 10)
        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
