int magico(int a[20][20], int n)
{
    int soma = 0;
    for(int i = 0; i < n; i++)
    {
        soma += a[i][0];
    }
    // Calcular colunas e linhas
    int somaColuna = 0, somaLinha = 0;
    for(int li = 0; li < n; li++)
    {
        for(int col = 0; col < n; col++)
        {
            somaLinha += a[li][col];
            somaColuna += a[col][li];   // Podemos transpor a matriz para somar ambos ao mesmo tempo
        }
        if((somaLinha != soma) || (somaColuna != soma)) return 0;
        somaColuna = 0;
        somaLinha = 0;
    }
    // Calcular diagonais
    int somaDiagonal1 = 0, somaDiagonal2 = 0;
    for(int i = 0; i < n; i++)
    {
        somaDiagonal1 += a[i][i];
        somaDiagonal2 += a[i][n - 1 - i];
    }
    if((somaDiagonal1 != soma) || (somaDiagonal2 != soma)) return 0;

    return 1;

}
