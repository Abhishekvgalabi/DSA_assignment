#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int n,i;
int top;
int stack[20];
int push(int top,int stack[20]);
void display(int top);
void denomination(int top);

int main()
{
    top=-1;
scanf("%d",&n);
    if(n>=1)
    {
  for(i=0;i<n;i++)
  {
      top=push(top,stack);
  }
    printf("\n");
    printf("Coins in stack are\n");
    //display(top);
    printf("\n");
    denomination(top);
    }
    else
    {
        printf("No coins.\n");
    }
}

int push(int top,int stack[10])
{
   int a;
    scanf("%d",&a);
    top++;
    stack[top]=a;

    return(top);
}

void display(int top)
{
    i=top;
    if(top==-1)
        printf("Stack is empty.\n");
    else
    {
    while(i!=-1)
    {
        printf("%d\n",stack[i]);
        i--;
    }
    }
}

void denomination(int top)
{
    int o=0,t=0,f=0,e=0;
    i=top;
    while(i!=-1)
    {
        if(stack[i]==1)
        {
            o++;
        }
      else if(stack[i]==2)
        {
            t++;
        }
        else if(stack[i]==5)
        {
            f++;
        }
        else if(stack[i]==10)
        {
            e++;
        }
        i++;
    }
    printf("Denomination 1 coin: %d\n",o);
    printf("Denomination 2 coin: %d\n",t);
    printf("Denomination 5 coin: %d\n",f);
    printf("Denomination 10 coin: %d\n",e);
}
