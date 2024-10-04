#include<stdio.h>

void main()
{
int i,j;
int mat[2][3] = {{1, 4, 0},
                {-5, 2, 7}};
printf("Matrix : \n");

for (i=0;i<2;i++) {
for (j=0;j<3;j++) {
printf("%d ", mat[i][j]);
}
printf("\n");
}


printf("\n\nTranspose Matrix : \n");

for (i=0;i<3;i++) {
for (j=0;j<2;j++) {
printf("%d ", mat[3][2]);
}
printf("\n");
}

}
