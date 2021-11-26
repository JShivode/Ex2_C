#include <stdio.h>
#include <math.h>
#include "my_mat.h"
#define N 10




int main(){
  printf("www");
int i, j;
int mat[N][N];
char x='1';


while (x !='0'){
printf("What would you like to do\n A enter matrix\n B fined shortest paths matrix\n C fined shortest path from i to j\n  D print matrix \n 0 to exit\n");
scanf("%c", &x);
if(x=='A'){
getArr(mat);
}

if(x=='B'){
floydWarshall(mat);
}

if(x=='C'){
printf("\n Enter i and j ");
scanf("%d",&i);
scanf("%d", &j);
printf("\n the shortest path is:%d\n ", mat[i][j]);
}

if(x=='D'){
printMat(mat);
}
}


}
