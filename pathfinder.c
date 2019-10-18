/*************************** program to find the path using arrays *********************************************/
#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10][10],n,i,j;
printf("enter the order of matrix\n");
scanf("%d",&n);

printf("enter the path matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]==1 && a[i][j-1]==1)
{
printf("a[%d][%d]\t",i,j);
}
else if(a[i][j]==1 && a[i][j+1]==1)
{
printf("a[%d][%d]\t",i,j);
}
else if(a[i][j]==1 && a[i+1][j]==1)
{
printf("a[%d][%d]\t",i,j);
}
else if(a[i][j]==1 && a[i-1][j]==1)
{
printf("a[%d][%d]\t",i,j);
}
}
}
return 0;
}




