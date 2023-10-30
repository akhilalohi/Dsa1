#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Prime factors of %d are: ", n);
    for (i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
    }

    return 0;
}
