#include <stdio.h>
#include <math.h>
#include "my_mat.h"
#define N 10




int main(){
printf("This is new");
int i, j;
int mat[N][N];
char x='1';


while (x !='D'){
printf("What would you like to do\n A enter matrix\n B Enter i and j\n C find shortest path from i to j\n  D print matrix \n D to exit\n");
scanf("%c", &x);
if(x=='A'){
getArr(mat);
}

if(x=='B'){
printf("\n Enter i and j ");
scanf("%d",&i);
scanf("%d", &j);
if(mat[i][j] !=0){
printf("\nThere is a path from i to j\n");
}
else{
printf("\nThere is no path\n");
}
}

if(x=='C'){
floydWarshall(mat);
printf("\n Enter i and j ");
scanf("%d",&i);
scanf("%d", &j);
printf("\n the shortest path is:%d\n ", mat[i][j]);
}

}


}
