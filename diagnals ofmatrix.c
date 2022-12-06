#include<stdio.h>
void main()
{int a[10][10],m,n,i,j;
printf("Enter the row and columns:");
scanf("%d %d",&i,&j);
printf("Enter the elments");
for(m=0;m<i;m++)
{for(n=0;n<j;n++)
scanf("%d",&a[m][n]);
}
for(m=0;m<i;m++)
{for(n=0;n<j;n++)
printf("%d ",a[m][n]);
printf("\n");
}
printf("The diagnal elements are ");for(m=0;m<i;m++)
{for(n=0;n<j;n++)
if(m==n)
printf("%d ",a[m][n]);
}
}