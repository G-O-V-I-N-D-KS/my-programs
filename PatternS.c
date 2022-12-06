#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    { for(j=n-i;j>0;j--)
      printf(" "); 
       for(k=0;k<=2*i;k++)
        if(k>0 && i!=n-1 && k<2*i)
        printf(" ");
        else
        printf("*");
     printf("\n");   
    }      
}