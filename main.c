#include <stdio.h>
#include <math.h>
#include "my_mat.h"
#define N 10

int main(){
int i, j;
int mat[N][N];
char x='1';

while (x !='D'){
scanf("%c", &x);
if(x=='A'){
getArr(mat);
}

if(x=='B'){
scanf("%d",&i);
scanf("%d", &j);
if(mat[i][j] >0){
printf("True\n");
}
else{
printf("False\n");
}
}

if(x=='C'){
floydWarshall(mat);
scanf("%d",&i);
scanf("%d", &j);
printf("%d\n", mat[i][j]);
}
}
}
