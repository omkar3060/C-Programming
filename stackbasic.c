#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX];
void push(int);
int pop();
void display();
void maximum();
int isempty();
int isfull();
int peek();
int ele,top,ch,num,n,val;
int main()
{
    top=-1;
    while(1)
    {
    printf("1--PUSH\n");
    printf("2--POP\n");
    printf("3--DISPLAY\n");
    printf("4--maximum\n");
    printf("5--is stack empty?\n");
    printf("6--is stack full?\n");
    printf("7--Peak element\n");
    printf("8--exit\n");
    printf("Enter the choice=\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:if(top==MAX-1)
        {
            printf("stack overflow\n");
        }
        else
        {
            printf("enter the element\n");
            scanf("%d",&ele);
            push(ele);
        }
        break;
        case 2:if(top==-1)
        {
            printf("stack is empty\n");
        }
        else
        {
            num=pop();
            printf("element popped=%d\n",num);
            top--;
        }
        break;
        case 3:if(top==-1)
        {
            printf("stack is empty\n");
        }
        else
        {
            display();
        }
        break;
        case 4:maximum();
        break;
        case 5: n=isempty();
              if(n==1)
              {
                  printf("Stack is empty\n");
              }
              else
              {
                  printf("Stack is not empty\n");
              }
        break;
        case 6: n=isfull();
        if(n==1)
        {
           printf("Stack is full\n");
        }
        else
        {
            printf("Stack is not full\n");
        }
        break;
        case 7:val=peek();
        if(val!=-999)
        {
            printf("%d\n",val);
        }
        else
        {
            printf("stack is empty\n");
        }
        break;
        case 8:exit(0);
        break;
        default:printf("Invalid choice\n");
        break;
    }
    }
}
void push(int ele)
{
            top++;
            stack[top]=ele;
}
int pop()
{
    return(stack[top]);
}
void display()
{
    int i;
    printf("stack elements are=\n");
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}
void maximum()
{
    int m=stack[top];
    for(int i=top;i>=0;i--)
    {
    if(stack[i]>m)
    {
        m=stack[i];
    }
    }
    printf("maximum stack element is %d\n",m);
}
int isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
int isfull()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}
int peek()
{
    if(top==-1)
        return -999;
    else
        return stack[top];
}
