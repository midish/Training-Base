// Подготовка к написанию полноценной программы sudoku.c 
// LET'S GO!

#include <stdlib.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
    int i = 0;
    
    while (*str != '\0')
    {
        i++;
    }
    return (i);
}

// Функция будет принимать двухмерный массив строк и возращать двухмерный char массив в виде array[9][9]
char     **sex2string(char **strings)
{
    char **matrix = NULL;
    int i = 0;
    int x = 0;
    int y = 0;

    matrix = (char **) malloc(3 * sizeof(char *));
    while (i < 3)
    {
        matrix[i] = (char *) malloc(3 * sizeof(char));
        i++;
    }
    while (x < 3)
    {
        matrix[x] = strings[x];
        x++;
        while (y < 3)
        {
            matrix[x][y] = strings[x][y];
            y++;
        }
    }
    return (matrix);
}

// argv[0] = имени программы, поэтому я буду его игнорировать
int     main(void)
{
    int i = 0;
    char *sexystrings[3] = { "123", "456", "789"};
    char **sudokumatrix; // Двухмерный массив будет хранит ЦИФРЫ в виде [1...9][1...9]

    while (i < 3)
    {
        sudokumatrix = sex2string(sexystrings);
        printf("%s", sudokumatrix[i]);
        i++;
    }
    return (0);
}