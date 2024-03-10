#include <unistd.h>

void    ft_putchar_n(char c, int n)
{
    while(n > 0)
    {
        write(1, &c, 1);
        n--;
    }
}


#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int repeat;

    i = 0;
    if(argc == 2)
    {
        while(argv[1][i])
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                repeat = (argv[1][i] - 'a') + 1;
            if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                repeat = (argv[1][i] - 'A') + 1;
            ft_putchar_n(argv[1][i], repeat);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

// A chaque lettre