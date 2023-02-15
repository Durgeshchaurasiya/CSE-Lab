#include <stdio.h>
#include <stdbool.h>

#define size 9

bool check_row(int grid[size][size], int row);
bool check_column(int grid[size][size], int column);
bool check_subgrid(int grid[size][size], int start_row, int start_col);
bool is_valid(int grid[size][size]);

int main() 
{
    int grid[size][size];

    printf("Enter the Sudoku Grid (use 0 to represent an empty cell) : \n");

    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) 
        {
            scanf("%d", &grid[i][j]);
        }
    }

    if (is_valid(grid)) 
    {
        printf("The Sudoku Grid is Valid.\n");
    } 
    else 
    {
        printf("The Sudoku Grid is Not Valid.\n");
    }

    return 0;
}

bool check_row(int grid[size][size], int row) {
    int count[size + 1] = {0};

    for (int i = 0; i < size; i++) 
    {
        if (grid[row][i] != 0) 
        {
            if (++count[grid[row][i]] > 1) 
            {
                return false;
            }
        }
    }

    return true;
}

bool check_column(int grid[size][size], int column) 
{
    int count[size + 1] = {0};

    for (int i = 0; i < size; i++) 
    {
        if (grid[i][column] != 0) 
        {
            if (++count[grid[i][column]] > 1) 
            {
                return false;
            }
        }
    }

    return true;
}

bool check_subgrid(int grid[size][size], int start_row, int start_col) 
{
    int count[size + 1] = {0};

    for (int i = start_row; i < start_row + 3; i++) 
    {
        for (int j = start_col; j < start_col + 3; j++) 
        {
            if (grid[i][j] != 0) 
            {
                if (++count[grid[i][j]] > 1) 
                {
                    return false;
                }
            }
        }
    }

    return true;
}

bool is_valid(int grid[size][size]) 
{
    for (int i = 0; i < size; i++) 
    {
        if (!check_row(grid, i)) 
        {
            return false;
        }
    }

    for (int j = 0; j < size; j++) 
    {
        if (!check_column(grid, j)) 
        {
            return false;
        }
    }

    for (int i = 0; i < size; i += 3) 
    {
        for (int j = 0; j < size; j += 3) 
        {
            if (!check_subgrid(grid, i, j)) 
            {
                return false;
            }
        }
    }

    return true;
}
