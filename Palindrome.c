#include<stdio.h>
void main()
{int n,i=0,copy;
printf("Enter the number:");
scanf("%d",&n);
copy=n;
while(n>0)
{i=i*10+n%10;
n=n/10;
}
if(i==copy)
printf("The number is palindrome");
else
printf("Enter the number is not palindrone");
}