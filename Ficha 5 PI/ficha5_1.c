void range(int vec[], unsigned size, int inicio, int incr)
{
    vec[0] = inicio;
    int s;
    s = size;
    for(int i = 1; i < s; i++)
    {
        vec[i] = vec[i-1] +incr;
    }
}
