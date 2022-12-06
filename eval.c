#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

char stack[15],expr[100],i;
int top =-1,n3;

char pop();
void push(int x);

void main()
{    printf("Enter the expression: ");
    scanf("%s",expr);
    for(i=0;expr[i]!='\0';i++)
    {  
        if(expr[i]>='0' && expr[i]<='9')
          push(expr[i]-'0');
        else 
        {
            int n1 = pop();
            int n2 = pop();
            switch(expr[i])
            {
                case '+': n3 = n2 + n1;break;
                case '-': n3 = n2 - n1;break;
                case '*': n3 = n2 * n1;break;
                case '/': n3 = n2 / n1;break;
                case '^': n3 = pow(n2,n1);break;
            }
            int x = n3;
            push(n3);
        }
    
}
    printf("%d",pop());
    printf("\n");
}

void push(int x)
{
    
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
     return -1;
    else 
     return stack[top--];
}
