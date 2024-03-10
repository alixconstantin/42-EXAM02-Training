#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    while(str[i])
        i++;
    return(i);
}

int main(int argc, char **argv)
{
    int i;
    char    *str;

    if (argc == 2)
    {
        i = 0;
       while(argv[1][i] == ' ' || argv[1][i] == '\t')
        i++;
       while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
       {
            write(1, &argv[1][i], 1);
            i++;
       }
    }
    write(1, "\n", 1);
    return (0);
}