#include<stdio.h>
#include<stdlib.h>
#define max 5
struct queue
{
    int f;
    int r;
    int ele[max];
};
int main()
{
    struct queue s;
    void initqueue(struct queue*);
    void insert(struct queue*,int);
    int deleteq(struct queue*);
    int front(struct queue *);
    int isFull(struct queue *);
    int isEmpty(struct queue *);
    int rear(struct queue *);
    void display(struct queue*);
    initqueue(&s);
    int e,ch,val;
    while(1)
    {
        printf(" 1.push\n 2.pop\n 3.front element\n 4.back element\n 5.display\n 6.exit\n");
        printf("enter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
             case 1: if(isFull(&s))
                        printf("queue is full\n");
                      else
                      {
                        printf("enter the element:");
                        scanf("%d",&e);
                        insert(&s,e);
                      }
                      break;
              case 2: if(isEmpty(&s))
                         printf("queue is empty\n");
                      else
                      {
                         e=deleteq(&s);
                         printf("%d",e);
                      }
                      break;
              case 3:if(isEmpty(&s))
                         printf("queue is empty\n");
                     else
                        {
                            val=front(&s);
                            printf("%d\n",val);
                        }
                break;
             case 4:if(isEmpty(&s))
                         printf("queue is empty\n");
                     else
                        {
                            val=rear(&s);
                            printf("%d\n",val);
                        }

                break;
                case 5:if(isEmpty(&s))
                         printf("queue is empty\n");
                         else
                            display(&s);
                            break;
              case 6: exit(0);
              break;
        }
    }
}
void initqueue(struct queue *s)
{
   s->f=-1;
   s->r=-1;
}
void insert(struct queue *s, int e)
{
    if(s->f==-1&&s->r==-1)
    {
        s->f=(s->f+1)%max;
        s->r=(s->r+1)%max;
        s->ele[s->r]=e;
    }
    else
    {
        s->r=(s->r+1)%max;
        s->ele[s->r]=e;
    }
}
int deleteq(struct queue *s)
{
    int data;
    if(s->f==s->r)
    {
       data=s->ele[s->f];
       s->f=-1;
       s->r=-1;
       return data;
    }
     else
     {
       data=s->ele[s->f];
       s->f=(s->f+1)%max;
       return data;
     }
}
int front(struct queue *s)
{
     int e=s->ele[s->f];
     return e;
}
int rear(struct queue *s)
{
    int e=s->ele[s->r];
     return e;
}
int isFull(struct queue *s)
{
       return ((s->r+1)%max==s->f);
}
int isEmpty(struct queue *s)
{
           return  (s->r==-1&&s->f==-1);
}
void display(struct queue*s)
{
    int i;
    printf("Queue elements are=\n");
    for(i=s->f;i!=s->r;i=(i+1)%max)
    {
        printf("%d\n",s->ele[i]);
    }
    printf("%d\n",s->ele[i]);
}

