#include "stdio.h"

void    ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a = 42;
    int x = 5;

    ft_swap(&a, &x);
    printf("%d\n", x);
}
