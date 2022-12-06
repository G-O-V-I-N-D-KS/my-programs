#include<stdio.h>
#include<stdlib.h>



void insertion();
void transverse();
void begins();
void endins();
void specins();
void begdel();
void enddel();
void specdel();

struct node
{
    int data;
    struct node *link;
}*head,*temp,*newnode;

void insertion()
{
    int x,item;
    head = NULL;
    while(x!=-1)
    {
    newnode = (struct node*)malloc(sizeof(struct node*));
    printf("Enter the data: ");
    scanf("%d",&item);
    newnode->data = item;
    newnode->link = NULL;
    
    if(head == NULL)
      head = temp = newnode;
    else
    {
        temp->link = newnode;
        temp = newnode;
    }printf("Enter -1 to terminate \n");
    scanf("%d",&x);
    }

}

void transverse()
{
    temp = head;
    while(temp != NULL)
    {
        printf("%d",temp->data);
        temp = temp->link;
    }
    printf("\n");
}

void main()
{
    int ch;
    insertion();
    printf("     MAIN MENU\n*******************\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from end\n6.Delete node after specified location\n7.Show\n8.Exit\n");
    
    while(ch!=8)
    {   
        printf("Enter the choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:begins();break;
            case 2:endins();break;
            case 3:specins();break;
            //case 4:begdel();break;
            //case 5:enddel();break;
            //case 6:specdel();break;
            case 7:transverse();break;
            case 8:break;
            default:printf("Invalid entry");
        }
}
}

void begins()
{
    newnode = (struct node*)malloc(sizeof(struct node*));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
    newnode->link = head;
    head = newnode;
    printf("NOde inserted\n");
}

void endins()
{
    newnode = (struct node*)malloc(sizeof(struct node*));
    printf("Enter the data: ");
        scanf("%d",&newnode->data);
    if(head != NULL)
    {

        newnode->link = NULL;
        temp=head;
        while(temp->link !=NULL)
         temp = temp->link;
        temp->link = newnode;
        printf("NOde Inserted\n");
    }
    else
    {
      head = newnode;
      newnode->link = NULL;   
      printf("Node Inserted\n");
    }

}


void specins()
{   int pos,i;
    newnode = (struct node*)malloc(sizeof(struct node*));
    printf("Enter the position to be inserted: ");
    scanf("%d",&pos);
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
    temp = head;
    for(i=1;i<pos;i++)
        temp = temp->link;
    newnode->link = temp->link;
    temp->link = newnode;
    printf("Node Inserted");
}

void begdel()
{
    
}