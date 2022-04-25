int desordem(int vec[], int size)
{
    unsigned int soma = 0;
    for (int i = 0; i <= size - 2; i++)
    {
        if (vec[i] > vec[i+1])
        {
            return soma++;
        }
    }
    return soma;
}