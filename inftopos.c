#include<stdio.h>
char stack[15],expr[100],i,x;
int top =-1;

char pop();
void push(char x);
int priority(char x);

void main()
{    printf("Enter the expression: ");
    scanf("%s",expr);
    for(i=0;expr[i]!='\0';i++)
    {  
        if(expr[i]>='0' && expr[i]<='9')
          printf("%c",expr[i]);
        else if(expr[i]=='(')
          push(expr[i]);
        else if(expr[i]==')')
        {   
            while((x=pop()) != '(')
              printf("%c",x);
        }
        else
        {
            while(priority(stack[top]) >= priority(expr[i]))
              printf("%c",pop());
            push(expr[i]);
        }
    }
    while(top !=-1)
    {
        printf("%c",pop());
    }
    printf("\n");
}

void push(char x)
{
    top = top+1;
    stack[top] = x;
}

char pop()
{
    if(top == -1)
     return -1;
    else 
     return stack[top--];
}

int priority(char x)
{   
    if(x == '(')
     return 0;
    if(x == '+' || x == '-')
     return 1;
    if(x == '*' || x == '/')
     return 2;
    else return 0;

}