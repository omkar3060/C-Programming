#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int i,j;
char postfix[50];
float stack[50];
void evaluation(char[]);
int is_operator(char);
void push(float);
float pop();
char ch;
int top;
float n,num1,num2;
int main()
{
  top=-1;
  printf("enter a valid postfix expression\n");
  scanf("%s",postfix);
  evaluation(postfix);
}
void evaluation(char postfix[50])
{
    int i=0,j=0;
    float res=0;
    while(postfix[i]!='\0')
    {
        ch=postfix[i];
        if(isalpha(ch))
        {
            printf("Enter the value of the symbol %c=\n",ch);
            scanf("%f",&n);
            push(n);
        }
        else if(is_operator(ch))
        {
           num2=pop();
           num1=pop();
           if(ch=='+')
           {
              res=num1+num2;
              push(res);
           }
           else if(ch=='-')
                   {
                      res=num1-num2;
                      push(res);
                   }
           else if(ch=='*')
                   {
                      res=num1*num2;
                      push(res);
                   }
           else if(ch=='/')
                   {
                      res=num1/num2;
                      push(res);
                   }
        }
        i++;
    }
    float k=pop();
    printf("%f\n",k);
}
void push(float n)
{
    if(top!=49)
    {
        top=top+1;
        stack[top]=n;
    }
}
float pop()
{
 float num;
    if(top!=-1)
    {
       num=stack[top];
       top--;
       return(num);
    }
}
int is_operator(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/')
        return(1);
    else
        return(0);
}
