#include<stdio.h>
void main()
{char a[10],b[10],i,j;
printf("Enter the first string:");
scanf("%s",a);
printf("Enter the second string:");
scanf("%s",b);
for(i=0;a[i]!='\0';i++);
{for(j=0;b[j]!='\0';j++)
a[i+j]=b[j];
}a[i+j]='\0';
printf("The concatiated string is %s",a);

}