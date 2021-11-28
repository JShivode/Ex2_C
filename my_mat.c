#include <stdio.h>
#include "my_mat.h"
#define N 10

void getArr(int mat[N][N]){
for (int k=0; k<N; k++){
for (int l=0; l<N; l++){
scanf("%d", &mat[k][l]);
}
}
}

int min(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }
    return (a > b) ? b : a;
}

void floydWarshall(int mat[N][N])
{
    for (size_t k = 0; k < N; k++)
    {
        for (size_t i = 0; i < N; i++)
        {
            for (size_t j = 0; j < N; j++)
            {
                if (i == j)
                {
                    mat[i][j] = 0;
                }
                else if (i == k || j == k ){
                    continue;
                }
                else{
                    int result = mat[i][k] + mat[k][j];
                    if (mat[i][k] == 0 || mat[k][j] == 0)
                    {
                        result = 0;
                    }
                    mat[i][j] = min(mat[i][j], result);
                }
            }
        }
    }
}
