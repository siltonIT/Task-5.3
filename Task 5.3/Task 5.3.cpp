#include "Main.h"

int main()
{
    const int ROW_LEN = 10;
    const int COLUMN_LEN = 7;
    int matrix[COLUMN_LEN][ROW_LEN];

    int* par[COLUMN_LEN];

    for (int i = 0; i < COLUMN_LEN; ++i)
    {
        par[i] = &matrix[i][0];
    }

    fill_matrix(par, ROW_LEN, COLUMN_LEN);

    cout << "Not sort matrix:" << endl;
    write_matrix(par, ROW_LEN, COLUMN_LEN);

    sort_matrix(par, ROW_LEN, COLUMN_LEN);

    cout << "Sort matrix:" << endl;
    write_matrix(par, ROW_LEN, COLUMN_LEN);
}
