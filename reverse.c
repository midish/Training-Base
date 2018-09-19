#include <stdio.h>
#include <stdlib.h>

char    *reverse(char *str)
{
    char *revstr;
    int i = 0;
    int len = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    revstr = (char *)malloc(i + 1);
    i = i - 1;
    while (i >= 0)
    {
        revstr[len] = str[i];
        len++;
        i--;
    }
    revstr[len] = '\0';
    // free(revstr);
    return (revstr);
}

// int     main(void)
// {
//     char *str1 = "Hello World!";
//     char *revstr1 = NULL;
//     revstr1 = reverse(str1);
//     printf("%s", revstr1);
//     return (0);
// }

int     main(int argc, char **argv)
{
    char *rev = NULL;
    if (argc = 2)
    {
        rev = reverse(argv[1]);
        printf("%s", rev);
    }
    else
    {
        printf("warning: vvedite 1 argyment\n");
    }
    return (0);
}