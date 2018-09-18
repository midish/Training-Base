#include <stdio.h>
#include <stdlib.h>

// Функция для определения длины строки
int     ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
    {
        i++;
    }
    return (i);
}

// Функция принимает две строки и соединяет их в третью
// Возвращаю указатель типа char, принимаю два указателя на тип char
char    *sexstring(char *str1, char *str2)  
{
    // Место соединения двух строк
    char *dest;  
    int i = 0;
    int j = 0;

    // Выделяю память для строки типа чар + размер строки1 + размер строки2 + 1 для '\0'
    dest = (char *)malloc(sizeof(char *) + ft_strlen(str1) + ft_strlen(str2) + 1); 
    while (str2[j] != '\0')
    {
        if (str1[i] != '\0')
        {
            dest[i] = str1[i];
        }
        else if (str1[i] == '\0')
        {
            while (str2[j] != '\0')
            {
                dest[i] = str2[j];
                j++;
                i++;
            }
        }
        i++;
    }
    dest[i] = '\0';
    // Возвращаю полученный результат, указатель на строку dest
    return (dest);  
}

int     main(int argc, char **argv)
{
    if (argc == 3)
    {
        printf("%s\n", sexstring(argv[1], argv[2]));
    }
    else
    {
        printf("Vvedeno ne korrectone chislo argumentov!\n");
    }
    return (0);
}