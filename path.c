#include<stdio.h>
#include<stdlib.h>
int main()
{
//int a[10][10],n,i,j;
int n,i,j;
int *ptr;
printf("enter the order of matrix\n");
scanf("%d",&n);
ptr=(int *)malloc(n*sizeof(int));

printf("enter the path matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&ptr[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(ptr[i][j]==1 && ptr[i][j+1]==1)
{
printf("a[%d][%d]\t",i,j);
}
else if(ptr[i][j]==1 && ptr[i][j-1]==1)
{
printf("a[%d][%d]\t",i,j);
}
else if(ptr[i][j]==1 && ptr[i+1][j]==1)
{
printf("a[%d][%d]\t",i,j);
}
else if(ptr[i][j]==1 && ptr[i-1][j]==1)
{
printf("a[%d][%d]\t",i,j);
}
}
}
return 0;
}


