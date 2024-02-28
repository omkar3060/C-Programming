#include<stdio.h>
#include<stdlib.h>
char stack[50];
int i,j,top;
char pop();
void balancedpara(char[]);
void push(char);
char symbol,ch;
int main()
{
  top=-1;
  printf("Enter the expression=\n");
  scanf("%s",stack);
  balancedpara(stack);
}
void balancedpara(char stack[50])
{
    int i=0;
    while(stack[i]!='\0')
    {
        symbol=stack[i];
        if(symbol=='}'||symbol==']'||symbol==')')
        {
            if(top==-1)
            {
                printf("The expression is not balanced\n");
                exit(0);
            }
        }
        if(symbol=='{'||symbol=='['||symbol=='(')
            {
              push(symbol);
            }
            else if(symbol==']')
            {
                if(stack[top]=='[')
                ch=pop();
            }
            else if(symbol=='}')
                {
                if(stack[top]=='{')
                ch=pop();
                }
                else if(symbol==')')
               {
               if(stack[top]=='(')
                ch=pop();
               }
               i++;
    }
    if(top==-1)
        printf("The expression is balanced\n");
    else
        printf("The expression is not balanced\n");
}
char pop()
{
char sym;
    if(top!=-1)
    {
       sym=stack[top];
       top--;
       return(sym);
    }
}
void push(char c)
{
    if(top!=49)
    {
        top=top+1;
        stack[top]=c;
    }
}
