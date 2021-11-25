#ifndef N 
#define N 3
#endif
//A function that receives a matrix from the user:
void getArr(int mat[N][N]);

//A function that prints the matrix:
void printMat(int mat[N][N]);

//returns the minnimum of 2 integers:
int min(int a, int b);

//the algorithm:
void floydWarshall(int arr[N][N]);