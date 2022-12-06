#include<stdio.h>
void main()
{int a[15],temp,i,j,n;
printf("Enter the limit:");
scanf("%d",&n);
printf("Enter the numbers:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
{for(j=0;j<n-i;j++)
{if(a[j]>a[j+1])
{temp=a[j+1];
a[j+1]=a[j];
a[j]=temp;
}
}
}
printf("The sorted array is:");
for(i=0;i<n;i++)
printf(" %d",a[i]);
}