#include<stdio.h>
void main(){
int n,i,j,a,inp;
int pos = 0;

printf("Enter the size of the Array: ");
scanf("%d", &n);
int num[n];

for(i=0;i<n;i++){
printf("Enter The Number : ");
scanf("%d", &num[i]);
}

for (i=0;i<n;i++)
{
    for (j=i+1;j<n;j++)
    {
    if (num[i] > num[j])
        {
        a =  num[i];
        num[i] = num[j];
        num[j] = a;
        }

    }

}

printf("Array in ascending order : ");
for(i=0;i<n;i++){
printf("%d\n", num[i]);
}

printf("Enter the element to be entered : ");
scanf("%d",&inp);

for(i=0;i<n;i++){
    if(num[i]<inp){
        pos++;
    }else{
        break;
    }
}

for(i=n-1;i>=pos;i--) {
num[i+1]=num[i];
}

num[pos] = inp;

printf("\nThe new array is : ");
for(i=0;i<=n;i++) {
printf("%d",num[i]);
}

}
