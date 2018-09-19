// Подготовка к написанию полноценной программы sudoku.c 
// LET'S GO!
// Комментарии в целом предназначены для судоку

#include <stdlib.h>
#include <stdio.h>

// Функция будет принимать двумерный массив строк и возращать двумерный char массив в виде array[9][9]
char     **sex2string(char **strings)
{
    char **matrix = NULL;
    int i = 0;
    int x = 0;
    int y = 0;
    
    // Выделяю память под matrix[x]
    matrix = (char **) malloc(9 * sizeof(char *));
    // Выделяю память под matrix[x][y]
    while (i < 9)
    {
        matrix[i] = (char *) malloc(9 * sizeof(char));
        i++;
    }
    // Присваиваю значение хранящееся в массиве из main, массиву matrix
    // Сначала для первого уровня matrix[x]
    while (x < 9)
    {
        matrix[x] = strings[x];
        x++;
        // Затем для второго уровня matrix[x][y]
        while (y < 9)
        {
            matrix[x][y] = strings[x][y];
            y++;
        }
    }
    // Возвращаю указатель на массив обратно в main
    return (matrix);
}

// argv[0] == имени программы, поэтому я буду его игнорировать
int     main(void)
{
    int i = 0;
    char *sexystrings[9] = { "123", "456", "789", "123", "456", "789", "123", "456", "789" };
    // Двумерный массив будет хранит ЦИФРЫ в виде [1...9][1...9]
    char **sudokumatrix;
    // Печатаю в консоль каждую строку в sudokumatrix[i]
    sudokumatrix = sex2string(sexystrings);
    while (i < 9)
    {
        printf("%s\n", sudokumatrix[i]);
        i++;
    }
    return (0);
}