#include <stdio.h>
#include <stdlib.h>

int     ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
    {
        i++;
    }
    return (i);
}

int     main(void)
{
    char *a = "Hello ";
    char *b = "World!";
    char *c;
    int i = 0;
    int j = 0;

    c = (char *)malloc(sizeof(char *) + ft_strlen(a) + ft_strlen(b) + 1);
    while (b[j] != '\0')
    {
        if (a[i] != '\0')
        {
            c[i] = a[i];
        }
        else if (a[i] == '\0')
        {
            while (b[j] != '\0')
            {
                c[i] = b[j];
                j++;
                i++;
            }
        }
        i++;
    }
    c[i] = '\0';
    printf("%s\n", c);
    printf("%d\n", ft_strlen(c));
    return (0);
}