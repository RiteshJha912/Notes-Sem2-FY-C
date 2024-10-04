#include<stdio.h>
void main(){
int n,i;

printf("Enter the size of the Array: ");
scanf("%d", &n);
int num[n];

for(i=0;i<n;i++){
printf("Enter The Number : ");
scanf("%d", &num[i]);
}

for(i=n-1;i>=0;i--){
printf("\n[%d]", num[i]);
}
}
