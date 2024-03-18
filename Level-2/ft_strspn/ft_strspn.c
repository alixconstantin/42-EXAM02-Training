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