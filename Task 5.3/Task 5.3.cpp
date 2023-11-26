#include "Main.h"

int main()
{
    const int ROW_LEN = 3;
    const int COLUMN_LEN = 5;
    int matrix[COLUMN_LEN][ROW_LEN];

    int* par[COLUMN_LEN];

    for (int i = 0; i < COLUMN_LEN; ++i)
    {
        par[i] = &matrix[i][0];
    }

    fill_matrix(par, ROW_LEN, COLUMN_LEN);

    sort_matrix(par, ROW_LEN, COLUMN_LEN);

    write_matrix(par, ROW_LEN, COLUMN_LEN);
}
