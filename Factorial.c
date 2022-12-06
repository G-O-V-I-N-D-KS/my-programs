#include<stdio.h>
void main()

{
     int N,fact=1,i;
     printf("Enter the number:-\n");
     scanf("%d",&N);

     for(i=0;i<N;i++)
      {  
        fact=fact*(N-i);
      }

     printf("The factorial of %d is %d",N,fact);
     
}