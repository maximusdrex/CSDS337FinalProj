int printf(string fmt, ...);

void loops(int x)
{
    int i;
    float j;
    for(i = x; x > 0; i = i - 1)
    {
        x = -x;
        j = x / i;
        printf("testing: %d\n", j);
    }
}

int main()
{
    int i;
    for (i = 0; i < 8; i = i + 1)
    {
        printf("Loop Iteration: %d\n", i);
        loops(i);
    }
    
    return 0;
    for (i = 0; true; i = i - 1)
    {
        return 1;
    }
}

