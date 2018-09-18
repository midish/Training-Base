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
    matrix = (char **) malloc(3 * sizeof(char *));
    // Выделяю память под matrix[x][y]
    while (i < 3)
    {
        matrix[i] = (char *) malloc(3 * sizeof(char));
        i++;
    }
    // Присваиваю значение хранящееся в массиве из main, массиву matrix
    // Сначала для первого уровня matrix[x]
    while (x < 3)
    {
        matrix[x] = strings[x];
        x++;
        // Затем для второго уровня matrix[x][y]
        while (y < 3)
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
    char *sexystrings[3] = { "123", "456", "789" };
    // Двумерный массив будет хранит ЦИФРЫ в виде [1...9][1...9]
    char **sudokumatrix;
    // Печатаю в консоль каждую строку в sudokumatrix[i]
    while (i < 3)
    {
        sudokumatrix = sex2string(sexystrings);
        printf("%s", sudokumatrix[i]);
        i++;
    }
    return (0);
}