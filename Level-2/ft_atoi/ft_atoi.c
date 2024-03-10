/* Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str); */
#include <stdio.h>

int ft_atoi(const char *str)
{
    int result;
    int negative;
    int i;

    result = 0;
    negative = 1;
    while(str[i] == ' ' || str[i] == '\t')
        i++;
    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            negative = -negative;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        printf("%d\n", result);
        result = ((result * 10) + (str[i] - 48));
        i++;
    }
    return ( result * negative);
}


int main(void)
{
    char *str = "--+----2342-=";
    printf("%d", ft_atoi(str));

    return (0);
}