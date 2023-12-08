#include "user_interface.h"

//Функция заполняет матрицу рандомными значениями
void fill_matrix(int** matrix, const int ROW_LEN, const int COLUMN_LEN)
{
    const int MIN_BORDER = 10;
    const int MAX_BORDER = -10;

    for (int i = 0; i < COLUMN_LEN; ++i)
    {
        for (int n = 0; n < ROW_LEN; ++n)
        {
            matrix[i][n] = MIN_BORDER + rand() % (MAX_BORDER - MIN_BORDER + 1);
        }
    }
}

//Функция вывода матрицы 
void write_matrix(int** matrix, const int ROW_LEN, const int COLUMN_LEN)
{
    for (int i = 0; i < COLUMN_LEN; ++i)
    {
        for (int n = 0; n < ROW_LEN; ++n)
        {
            cout << matrix[i][n] << ' ';
        }

        cout << endl;
    }
}