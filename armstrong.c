#include<stdio.h>
void main()
{int n,i=0,copy,r;
 printf("Enter the number:");
 scanf("%d",&n);
 copy=n;
while(n>0)
{r=n%10;
i=i+r*r*r;
n=n/10;
}
if(i==copy)
printf("the entered number is armstrong");
else
printf("The number is not armstrong");
}