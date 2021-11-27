#include <stdio.h>
#include "my_mat.h"


//A function that receives a matrix from the user:
void getArr(int mat[N][N]){
printf("\n Enter matrix cells");
for (int k=0; k<N; k++){
for (int l=0; l<N; l++){
scanf("%d", &mat[k][l]);
}
}
}


void printMat(int mat[N][N]){
FILE *f;
for (int i=0; i<N; i++){
for(int j=0; j<N; j++){
//printf("%d ", mat[i][j]);
f=fopen("o1.txt","w" );
fprintf(f,"%d",mat[i][j]);
if(j==N-1) {
//printf("\n");
fprintf(f,"\n");
}
}
}
fclose(f);
}

int min(int a, int b){
return (a>b) ? b : a ;

}

void floydWarshall(int arr[N][N]){
for(int k=0; k<N; k++){
for(int i=0; i<N; i++){
for(int j=0; j<N; j++){
arr[i][j]=min(arr[i][j], arr[i][k]+arr[k][j]);
if(arr[i][j]==0){
arr[i][j]=-1;
}
}
}
}
}
