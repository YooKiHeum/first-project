#include <stdio.h>

int Factorial(int ans)
{
    if (ans == 0)
        return 1;
    else
        return ans * Factorial(ans-1);
}

int main()
{
    int N;
    scanf("%d", &N);
    
    printf("%d \n", Factorial(N));
    
    return 0;
}