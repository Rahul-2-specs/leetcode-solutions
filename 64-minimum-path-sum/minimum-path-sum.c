#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

int up(int row, int col, int r, int c, int** grid, int dp[201][201]) {
    if (row >= r || col >= c) return INT_MAX;

    if (row == r - 1 && col == c - 1)
        return grid[row][col];

    if (dp[row][col] != -1)
        return dp[row][col];

    return dp[row][col] = grid[row][col] + fmin(
        up(row + 1, col, r, c, grid, dp),
        up(row, col + 1, r, c, grid, dp)
    );
}

int minPathSum(int** grid, int m, int* n) {
    int dp[201][201];
    int c = *n;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < c; j++)
            dp[i][j] = -1;

    return up(0, 0, m, c, grid, dp);
}