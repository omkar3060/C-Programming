#include<stdio.h>
struct stack
{
  char name[100];
  int age;
};
void push(struct stack[],struct stack *,int*);
void display(struct stack[],int*);
struct stack pop(struct stack[],int*);
int main()
{
    int top,*topptr;
    struct stack ele;
    topptr=&top;
    top=-1;
    struct stack s1[1000],s;
    int ch;
    while(1)
    {
      printf("1--Push\n");
      printf("2--Display\n");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1:scanf("%s%d",s.name,&s.age);
          push(s1,&s,topptr);
          break;
          case 2:if(top==-1)
          {
              printf("Empty\n");
          }
          else
              display(s1,topptr);
            break;
         case 3:if(top==-1)
          {
              printf("Empty\n");
          }
          else
            ele=pop(s1,topptr);
          break;
      }
    }
}
void push(struct stack s1[1000],struct stack *s,int *topptr)
{
   *topptr=*topptr+1;
    s1[*topptr]=*s;
}
void display(struct stack s1[10000],int *topptr)
{
    for(int i=0;i<=*topptr;i++)
    {
        printf("%s %d\n",s1[i].name,s1[i].age);
    }
}
struct stack pop(struct stack s1[100],int *topptr)
{
    struct stack e=s1[*topptr];
    *topptr=*topptr-1;
    return e;
}
