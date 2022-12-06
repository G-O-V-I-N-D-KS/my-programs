#include<stdio.h>

struct poly
{  int coeff,exp;
}p1[10],p2[10],p3[10];

int Add(int ,int);

void main()
{
  int t1,t2,i,k;
  printf("Enter the highest degree of 1st polynomial: ");
  scanf("%d",&t1);
  printf("Enter the highest degree of 2nd polynomial: ");
  scanf("%d",&t2);
  printf("Enter the coefficient of the 1st polynomial: ");
  for(i=t1;i>=0;i--)
   {
    scanf("%d",&p1[i].coeff);
    p1[i].exp = i;
   }
  printf("Enter the coefficient of the 2nd polynomial: ");
  for(i=t2;i>=0;i--)
   {
    scanf("%d",&p2[i].coeff);
    p2[i].exp = i;
   }
  printf("The polynomials are:-");
  for(i=t1;i>0;i--)
   printf("%dx^%d + ",p1[i].coeff,p1[i].exp);
  printf("%d\n",p1[0].coeff);
  for(i=t2;i>0;i--)
   printf("%dx^%d + ",p2[i].coeff,p2[i].exp);
  printf("%d\n",p2[0].coeff); 

k = Add(t1,t2);

for(i=k;i>0;i--)
   printf("%dx^%d + ",p3[i].coeff,p3[i].exp);
  printf("%d\n",p3[0].coeff);
}

int Add(int t1,int t2)
{
   int i=0,j=0,k=0;
   while(i<=t1 && j<=t2)
   {
     if(p1[i].exp == p2[j].exp)
      {
        p3[k].coeff = p1[i].coeff + p2[j].coeff;
        p3[k].exp = p1[i].exp;
        i++;j++;k++;
      }
     else if(p1[i].exp > p2[i].exp)
      {
        p3[k].coeff = p1[i].coeff;
        p3[k].exp = p1[i].exp;
        i++;k++;
      }
     else
      {
        p3[k].coeff = p2[j].coeff;
        p3[k].exp = p2[j].exp;
        j++;k++;  
      }
   }
   while(i<=t1)
   {
     p3[k].coeff = p1[i].coeff;
        p3[k].exp = p1[i].exp;
        i++;k++;
   }
   while(j<=t2)
   {
      p3[k].coeff = p2[j].coeff;
        p3[k].exp = p2[j].exp;
        j++;k++;
   }
  return k-1;
  
   }
