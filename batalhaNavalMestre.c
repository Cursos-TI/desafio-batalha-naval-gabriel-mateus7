#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};


    // For para criar uma Cruz    
    for (int i = 0; i < 5; i++) {
        tabuleiro[1][0 + i] = 1;
    }    
    for (int i = 0; i < 3; i++) {
        tabuleiro[0 + i][2] = 1;
    }


    // For para criar uma Cone
    for (int i = 0; i < 5; i++) {
        tabuleiro[3][5 + i] = 1;
    }
    for (int j = 0; j < 3; j++)
    {
       tabuleiro[2][6 + j] = 1;
    }
        tabuleiro[1][7] = 1;
    
        
    // For para criar uma Octaedro
         tabuleiro[8][7] = 1 ;

        for (int i = 0; i < 3; i++)
        {
            tabuleiro[7][6 + i] = 1;
        }
        
         tabuleiro[6][7] = 1 ;



     // Imprimir cabeçalho Apenas com as Habilidades.  Ajuda a entender a lógica das habilidades e onde elas atuam
    
    printf("\n=== TABULEIRO COM APENAS HABILIDADES ===\n");

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
      


    // Preencher vertical (coluna E → índice 4, linhas 7, 8, 9 → índices 6, 7, 8)
    for (int i = 0; i < 3; i++) {
        tabuleiro[6 + i][4] = 3;
    } 

    // Preencher horizontal (linha 2, colunas E, F, G → índices 4, 5, 6)
    for (int i = 0; i < 3; i++) {
        tabuleiro[1][4 + i] = 3;
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


    printf("\n=== TABULEIRO COMPLETO (NAVIOS + HABILIDADES) ===\n");

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
