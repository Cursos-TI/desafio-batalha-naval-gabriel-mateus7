#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};

    // Preencher horizontal (linha 2, colunas E, F, G → índices 4, 5, 6)
    for (int i = 0; i < 3; i++) {
        tabuleiro[1][4 + i] = 3;
    }

    // Preencher vertical (coluna E → índice 4, linhas 7, 8, 9 → índices 6, 7, 8)
    for (int i = 0; i < 3; i++) {
        tabuleiro[6 + i][4] = 3;
    }

    // Preencher diagonal "deslocada" (coluna I, H, G → índice 8, 7, 6, linhas 4, 5, 6 → índices 3, 4, 5)

    for (int i = 3, j =8; i < 6; i++, j--)
    {
            tabuleiro[i][j] = 3;  
    }

    // Preencher diagonal "principal" (coluna A, B, C → índice 0, 1, 2, linhas 1, 2, 3 → índices 0, 1, 2)

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[i][i] = 3;
    }

        // Preencher Diagonal secundária: de [0][9], [1][8], [2][7]
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][9 - i] = 3;
    }


    // Imprimir cabeçalho das colunas (A a J)
    printf("   "); // Espaço para alinhar com os números das linhas
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
