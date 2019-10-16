/*********************************************Program to generate SPARSE MATRIX*******************************************************************************************/
#include<stdio.h>
int main()
{
int a[10][10],b[10][10],i,j,m,n,c=0,k=0,l;
printf("enter the order of the matrix\n");
scanf("%d%d",&m,&n);
printf("enter the matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
if(a[i][j]!=0)
{
c++;
}
}
}
if(c<(m*n/2))
{
printf("the given matrix can be considered as a sparse matrix\n");
while(k<c)
{
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]!=0)
{
l=0;
b[k][l]=a[i][j];
b[k][l+1]=i;
b[k][l+2]=j;
k++;
}
}
}
}
printf("E\tR\tC\n");
for(i=0;i<c;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
}
else
printf("the given matrix cannot be considered as a sparse matrix\n");
return 0;
}

