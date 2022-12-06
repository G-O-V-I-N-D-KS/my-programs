#include<stdio.h>
void main()
{int i,j,k,n;
 printf("Enter the limit:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {for(k=n-i;k>1;k--)
 printf(" ");
 for(j=n-i;j<=n;j++)
 printf("%d",j);
 printf("\n");
 }
 }