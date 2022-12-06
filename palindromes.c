#include<stdio.h>
void main()
{
    char a[100];
    int i,j,n,count=0;
    printf("Enter the length of the string: ");
    scanf("%d",&n);
    printf("Enter the string: ");
    for(i=0;i<=n;i++)
      scanf("%c",&a[i]);
    for(i=1,j=n;i<=(n/2)&&j>=(n/2);j--,i++)
    {
        if(a[i]==a[j])
         count++;
        else
        {
            count = -1;
            break;
        }  
        
    }
    if(count==-1)
      printf("It is not palindrome ");
    else
      printf("a palindrome");
    for(i=0;i<=n;i++)
      printf("%c",a[i]);
}