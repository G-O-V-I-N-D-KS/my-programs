#include<stdio.h>
void main()
{int a[10][10],m,n;
printf("Enter the elments");
for(m=0;m<3;m++)
{for(n=0;n<3;n++)
scanf("%d",&a[m][n]);
}
for(m=0;m<3;m++)
{for(n=0;n<3;n++)
printf("%d ",a[m][n]);
printf("\n");
}
printf("The determinant is:");
printf("%d",a[1][1]*(a[2][2]*a[3][3]-a[3][2]*a[2][3])-a[1][2]*(a[2][1]*a[3][3]-a[2][3]*a[3][1])+a[1][3]*(a[2][1]*a[3][2]-a[3][1]*a[2][2]));

}