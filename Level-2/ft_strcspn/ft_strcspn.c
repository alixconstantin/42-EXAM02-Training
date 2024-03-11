/*
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);
*/



#include <stddef.h>
#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while(s[i])
    {
        while(reject[j])
        {
            if(reject[j] ==  s[i])
                return(i);
            j++;
        }
        j = 0;
        i++;
    }
    return(i);
}

int main() {
    const char *s = "exemple de chaîne";
    const char *reject = "dz";
    size_t result;

    result = ft_strcspn(s, reject);
    printf("Le premier caractère de '%s' trouvé dans '%s' est à l'indice %zu.\n", s, reject, result);

    return 0;
}