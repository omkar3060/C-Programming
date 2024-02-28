#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next,*prev;
};
struct node *head;
struct node* insert_at_beg(struct node *);
struct node* insert_at_end(struct node *);
struct node* delete_at_beg(struct node *);
struct node* delete_at_end(struct node *);
void display(struct node *);
int countofnodes(struct node *);
void search(struct node*);
struct node* deleteatpos(struct node *,int pos);
struct node *temp,*temp1,*temp2,*newnode;
struct node*insert_at_pos(struct node*,int);
struct node* sort(struct node*);
struct node *reverse_k_node(struct node*,int);
int name;
int main()
{
int ch,k;
head=NULL;
int c,pos;
   while(1)
   {
     printf("1--insert at beginning\n");
     printf("2--insert at end\n");
     printf("3--delete from beginning\n");
     printf("4--delete from end\n");
     printf("5--display linked list\n");
     printf("6--number of nodes\n");
     printf("7--Insert at a given position\n");
     printf("8--Search for a given node\n");
     printf("10--Delete at a given position\n");
     printf("11--Sort ascending order\n");
     printf("12--Exit\n");
     printf("enter your choice\n");
     scanf("%d",&ch);
     switch(ch)
     {
      case 1:newnode=(struct node*)malloc(sizeof(struct node));
             printf("enter data\n");
             scanf("%d",&newnode->data);
             head=insert_at_beg(newnode);
             break;
    case 2:  newnode=(struct node*)malloc(sizeof(struct node));
             printf("enter data\n");
             scanf("%d",&newnode->data);
             head=insert_at_end(newnode);
             break;
    case 3: if(head==NULL)
             printf("linked list is empty---cant delete\n");
             else
             {
                head=delete_at_beg(head);
             }
             break;
    case 4: if(head==NULL)
             printf("linked list is empty---cant delete\n");
             else
             {
                head=delete_at_end(head);
             }
             break;
    case 5: display(head);
    break;
    case 6:c=countofnodes(head);
    printf("number of node=%d\n",c);
    break;
    case 7:  printf("enter the pos=\n");
             scanf("%d",&pos);

             if(pos<1||pos>(countofnodes(head)+1))
     {
      printf("invalid\n");
     }
             else
             {
             newnode=(struct node*)malloc(sizeof(struct node));
             printf("enter data\n");
             scanf("%d",&newnode->data);
             head=insert_at_pos(newnode,pos);
             }
             break;
    case 8:search(head);
    break;

    case 10:printf("enter the pos=\n");
             scanf("%d",&pos);

             if(pos<1||pos>(countofnodes(head)+1))
     {
      printf("invalid\n");
     }
             else
             {
                 head=deleteatpos(head,pos);
             }
    break;
    case 11:if(head==NULL)
             {
                 printf("linked list is empty---cant sort\n");
             }
             else if(head->next==head)
                {
                    printf("Only single element is present in the linked list--can't sort\n");
                }
             else
                {
                head=sort(head);
                }
                break;
    case 12:exit(0);
    break;
    default:printf("Invalid Choice\n");
    break;
     }
   }
}
struct node* insert_at_beg(struct node *newnode)
{
   if(head==NULL)
   {
     head=newnode;
     newnode->next=head;
     newnode->prev=head;
     return(head);
   }
   else
   {
     temp=head->prev;
     temp->next=newnode;
     newnode->next=head;
     head->prev=newnode;
     newnode->prev=temp;
     head=newnode;
     return(head);
   }
}
struct node* insert_at_end(struct node *newnode)
{
   if(head==NULL)
   {
     head=newnode;
     newnode->next=head;
     newnode->prev=head;
     return(head);
   }
   else
   {
     temp=head->prev;
     temp->next=newnode;
     newnode->next=head;
     newnode->prev=temp;
     head->prev=newnode;
     return(head);
   }
}
void display(struct node *head)
{
   if(head==NULL)
   {
     printf("the linkded list is empty\n");
   }
   else
   {
      temp=head;
      while(temp->next!=head)
      {
         printf("%d->",temp->data);
         temp=temp->next;
      }
      printf("%d->",temp->data);
      printf("\n");
   }
}
struct node* delete_at_beg(struct node *head)
{
    if(head==NULL)
    {
        printf("linkded list is empty\n");
    }
    else
    {
       if(head->next==head)
       {
           printf("node deleted=%d\n",head->data);
           free(head);
           head=NULL;
           return(head);
       }
       else
       {
           printf("node deleted=%d\n",head->data);
           temp1=head;
           head=head->next;
           head->prev=temp;
           temp->next=head;
           free(temp1);
           return(head);
       }
    }
}
struct node* delete_at_end(struct node *head)
{
    if(head==NULL)
    {
        printf("linked list is empty\n");
    }
    else
    {
       if(head->next==head)
       {
           printf("node deleted=%d\n",head->data);
           free(head);
           head=NULL;
           return(head);
       }
       else
       {
           temp=head->prev;
           printf("node deleted=%d\n",temp->data);
           temp1=temp;
           temp=temp->prev;
           temp->next=head;
           head->prev=temp;
           free(temp1);
           return(head);
       }
    }
}
int countofnodes(struct node *head)
{
    int count=0;
    if(head==NULL)
    {
        return(count);
    }
    else{
        temp=head;
        while(temp->next!=head)
        {
            count++;
            temp=temp->next;
        }
        return(count+1);
    }
}
void search(struct node*head)
{
    int d,found=0;
    if(head==NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        printf("enter data\n");
        scanf("%d",&d);
        temp=head;
        while(temp->next!=head)
        {
            if(temp->data==d)
            {
                found=1;
                break;
            }
            temp=temp->next;
        }
        if(temp->data==d)
        {
           found=1;
        }
    }
    if(found==0)
    {
        printf("Node not found\n");
    }
    else{
        printf("Node Found\n");
    }
}
struct node*insert_at_pos(struct node*newnode,int pos)
{
             int p;
             if(pos==1)
             {
                head=insert_at_beg(newnode);
             }
             else
             {   p=1;
                 temp=head;
                 while(p!=pos)
                 {
                     temp1=temp;
                     temp=temp->next;
                     p++;
                 }
                 temp1->next=newnode;
                 newnode->prev=temp1;
                 newnode->next=temp;
                 temp->prev=newnode;
             }
             return(head);
}
struct node* deleteatpos(struct node *head,int pos)
{
int p;
    if(pos==1)
        head=delete_at_beg(head);
    else
    {
        p=1;
        temp=head;
        while(p!=pos)
        {
            temp1=temp;
            temp=temp->next;
            p++;
        }
        temp1->next=temp->next;
        temp->prev=temp1;
        printf("\n deleted node is %d\n",temp->data);
        free(temp);
    }
        if(head==NULL)
     {
        printf("DLL is empty\n");
     }
     else
     {
          return(head);
     }
    }
struct  node*sort(struct node *head)
{
 int i,j,c;
    struct node *temp1;
            c=countofnodes(head);
            for(i=1;i<=c;i++)
            {
                temp=head;
                for(j=0;j<=c-i-1;j++)
                {
                    if(temp->data>temp->next->data)
                    {
                        temp1=(struct node*)malloc(sizeof(struct node));
                        temp1->data=temp->data;
                        temp->data=temp->next->data;
                        temp->next->data=temp1->data;
                    }
                    temp=temp->next;
                }
            }
        return(head);
}
