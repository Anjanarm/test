/*************************** Program to find path by using dynamic allocation **********************************/
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,j,*ptr;

printf("enter the order of matrix\n");
scanf("%d",&n);
ptr=(int *)malloc(n*sizeof(int)); 
printf("enter the path matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&(*(ptr+i*n+j)));
}
}
printf("Path corresponds to the element position\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(*(ptr+i*n+j)==1 && *(ptr+i*n+(j-1))==1)
{
printf("a[%d][%d]\t",i,j);
}
else if(*(ptr+i*n+j)==1 && *(ptr+i*n+(j+1))==1)
{
printf("a[%d][%d]\t",i,j);
}
else if(*(ptr+i*n+j)==1 && *(ptr+(i-1)*n+j)==1)
{
printf("a[%d][%d]\t",i,j);
}
else if(*(ptr+i*n+j)==1 && *(ptr+(i+1)*n+j)==1)
{
printf("a[%d][%d]\t",i,j);
}

}
}
printf("\n");
free(ptr);
return 0;
}


