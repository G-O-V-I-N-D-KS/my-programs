#include<stdio.h>
void main()
{int n,j=0,l=1,i,k;
printf("Enter the limit:");
scanf("%d",&n);
printf("0,1");
for(i=1;i<=n-2;i++)
{k=l+j;
j=l;
l=k;
printf(",%d",k);}
}