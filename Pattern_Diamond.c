#include<stdio.h>
void main()
{int n,i;
printf("Enter the limit:");
scanf("%d",&n);
for( i=1;i<=n;i++)
{
    for(int j=n-i;j>=0;j--)
printf(" ");
for(int k=1;k<=i;k++)
printf("* ");
printf("\n");
}
for(i=1;i<n;i++)
{for(int j=n-1;j<n+i;j++)
printf(" ");
for(int k=n-i;k>0;k--)
printf("* ");
printf("\n");
}
}