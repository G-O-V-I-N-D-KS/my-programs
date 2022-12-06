#include<stdio.h>
void main()
{
    char a[100],b[100];
    int i,j,n;
    printf("Enter the length of the string: ");
    scanf("%d",&n);
    printf("Enter the string: ");
    for(i=0;i<=n;i++)
      scanf("%c",&a[i]);
    i=n;
    for(j=0;j<n;j++)
    {
        b[j] = a[i];
        i-- ;
    }
    printf("The reverse string is ");
    for(i=0;i<n;i++)
     {printf("%c",b[i]);
      
     }
     for(i=0;i<n;i++)
      printf("%c",a[i]);
}