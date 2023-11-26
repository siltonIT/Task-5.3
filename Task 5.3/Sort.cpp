#include "Sort.h"

void sort_matrix(int** matrix, const int ROW_LEN, const int COLUMN_LEN)
{
    int delta = 0;
    int max_val = 0;
    int ind_max = 0;

    for (int i = COLUMN_LEN; i > 1; --i)
    {
        max_val = **matrix;
        ind_max = 0;

        for (int n = 0; n < COLUMN_LEN - delta; ++n)
        {
            if (max_val < *(*(matrix + n)))
            {
                max_val = *(*(matrix + n));
                ind_max = n;
            }
        }

        ++delta;
        swap(matrix, ind_max, COLUMN_LEN - delta, ROW_LEN);
    }
}

void swap(int** matrix, int ind_1, int ind_2, const int ROW_LEN)
{
    int swap;

    for (int i = 0; i < ROW_LEN; ++i)
    {
        swap = matrix[ind_1][i];
        matrix[ind_1][i] = matrix[ind_2][i];
        matrix[ind_2][i] = swap;
    }
}
