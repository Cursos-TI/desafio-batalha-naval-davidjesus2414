#include <stdio.h>



int main()
{
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.



    // DECLARAÇAO DAS VARIAVEIS
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0}; // Formato do Tabuleiro
    int cone [5][5] = {{0, 0, 1, 0, 0},{0, 1, 1, 1, 0},{1, 1, 1, 1, 1},{0, 0, 0, 0, 0},{0, 0, 0, 0, 0}}; // Habilidade
    int cruz [5][5] = {{0, 0, 1, 0, 0},{1, 1, 1, 1, 1},{0, 0, 1, 0, 0},{0, 0, 0, 0, 0},{0, 0, 0, 0, 0}}; // Habilidade
    int octaedro [5][5] = {{0, 0, 1, 0, 0},{0, 1, 1, 1, 0},{0, 0, 1, 0, 0},{0, 0, 0, 0, 0},{0, 0, 0, 0, 0}}; // Habilidade
    int linhaInicialC = 6,colunaInicialC = 3;
    int linhaInicialCr = 0,colunaInicialCr = 1;
    int linhaInicialO = 3,colunaInicialO = 6;
    
    // Navio Horizontal
    for (int n = 4; n < 7; n++)
    {
        tabuleiro[5][n] = 3;
    }
    // Navio Vertical
    for (int n = 3; n < 6; n++)
    {
        tabuleiro[n][2] = 3;
    }
    // Navio Diagonal
    for (int n = 1; n < 4; n++){

        tabuleiro[n][8-n] = 3;
    
    }
    // Navio Diagonal
    for (int n = 7; n < 10; n++){

        tabuleiro[n][n-7] = 3;
    }

    // Habilidade Cone
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
        if (cone[i][j] == 1)

        {
            tabuleiro[linhaInicialC + i][colunaInicialC + j] = 1; // Posicionamento Inicial da Habilidade Cone
        }
        
    }
} 
    // Habilidade Cruz
     for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
        if (cruz[i][j] == 1)

        {
            tabuleiro[linhaInicialCr + i][colunaInicialCr + j] = 1; // Posicionamento Inicial da Habilidade Cruz
        }
        
    }
}
    // Habilidade Octaedro
     for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
        if (octaedro[i][j] == 1)

        {
            tabuleiro[linhaInicialO + i][colunaInicialO + j] = 1; // Posicionamento Inicial da Habilidade Octaedro
        }
        
    }
}  

    
    
   
// Declarando a Imagem do Tabuleiro
    printf("======== TABULEIRO BATALHA NAVAL ========\n\n");
    printf("   ");
    for (int i = 0; i < 10; i++)
    {
        printf("%c ", linha[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%2d ", i + 1);

        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    
   

    return 0;
}
