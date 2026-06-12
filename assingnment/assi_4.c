#include <stdio.h>

int prime(int);
int prime(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n, i = 0, np, pp;
    printf("Enter N: ");
    scanf("%d", &n);
    for (int j = 2;; j++)
    {
        if (j < n)
        {
            if (prime(j))
            {
                pp = j;
            }
        }
        if (j > n)
        {
            if (prime(j))
            {
                np = j;
                break;
            }
        }
    }
    printf("Previous Prime = %d\n", pp);
    printf("Next Prime = %d\n", np);
    printf("Distance = %d", np - pp);
    return 0;
}