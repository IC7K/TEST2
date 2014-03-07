#include <stdio.h>

int main(int argc, char argv[])
{
    int m;
    int n;
    int temp;
    int r;

    printf("Euclid's Algorithm: Greatest Common Divisor.\n");
    printf("Enter the first number: ");
    scanf("%d", &m);
    printf("Enter the second number: ");
    scanf("%d", &n);

    if (m < n)
    {
        temp = m;
        m = n;
        n = temp;
    }
   
    printf("Num 1: %d\n", m);
    printf("Num 2: %d\n", n);
    while (r != 0)
    {

        r = m % n;
        if (r == 0)
        {
            printf("Answer: %d\n", n);
        }
        m = n;
        n = r;
    }
    return 0;
}