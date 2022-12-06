#include<stdio.h>
void main()
{int n,i,s,a[10],b[5],j=0,k;
printf("Enter the limit:");
scanf("%d",&n);
printf("Enter the numbers:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the number to be searched:");
scanf("%d",&s);
for(i=0;i<n;i++)
{if(s==a[i])
{b[j]=i+1;
j++;
}
k=j;
}
if(j!=0)
{printf("The number is found at");
for(j=0;j<k;j++)
printf("%d ",b[j]);
}}