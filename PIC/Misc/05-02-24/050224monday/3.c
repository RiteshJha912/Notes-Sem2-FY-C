#include<stdio.h>

void main()
{
int matrix[3][2] = {{1, 2}, {4, 5}, {7, 8}};
printf("Matrix:\n");
for (int i=0;i<3;i++) {
    for (int j=0;j<2;j++) {
        printf("%d", matrix[i][j]);
    }
printf("\n");
}

}
