/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char	*ft_strdup(char *src);
*/
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		str_size;
	char	*new_str;
	int		i;

	if (!src)
		return (NULL);
	str_size = ft_strlen(src);
	new_str = (char *)malloc((str_size * sizeof(char)) + 1);
	if (!new_str)
	{
		free(new_str);
		return (NULL);
	}
    i = 0;
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

int	main(void)
{
    char *test1 = "Hello_World";
    char *test2 = ft_strdup(test1);

    printf("%s", test2);

	return (0);
}