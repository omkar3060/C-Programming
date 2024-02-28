#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
struct node *head;
struct node* insert_at_beg(struct node *);
struct node* insert_at_end(struct node *);
struct node* delete_at_beg(struct node *);
struct node* delete_at_end(struct node *);
struct node* delete_compare(struct node *,int pos);
void search(struct node*);
void display(struct node *);
int countofnodes(struct node *);
struct node*insert_at_pos(struct node*,int);
struct node *temp,*temp1,*temp2,*newnode;
int name;
int main()
{
int ch;
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
     printf("9--Delete at a given position\n");
     printf("10--Exit\n");
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
    case(9):
        if(head==NULL)
     {
        printf("CLL is empty\n");
     }
     else
     {
         printf("enter the pos=\n");
             scanf("%d",&pos);
             if(pos<1||pos>(countofnodes(head)+1))
     {
      printf("invalid\n");
     }
             else
             {
                 head=delete_compare(head,pos);
             }
     }
    break;
    case 10:exit(0);
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
     return(head);
   }
   else
   {
     newnode->next=head;
     temp=head;
     while(temp->next!=head)
     {
         temp=temp->next;
     }
     temp->next=newnode;
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
     return(head);
   }
   else
   {
       temp=head;
       while(temp->next!=head)
       {
           temp=temp->next;
       }
    temp->next=newnode;
    newnode->next=head;
    return(head);
   }
}
struct node* delete_at_beg(struct node *head)
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
       temp=head;
       while(temp->next!=head)
       {
           temp=temp->next;
       }
       temp1=head;
       printf("node deleted=%d\n",temp1->data);
       head=head->next;
       temp->next=head;
       free(temp1);
       return(head);
   }
}
struct node* delete_at_end(struct node *head)
{
   if(head->next==head)
   {
       printf("node deleted=%\n",head->data);
       free(head);
       head=NULL;
       return(head);
   }
   else
   {
     temp=head;
       while(temp->next!=head)
       {
           temp1=temp;
           temp=temp->next;
       }
       printf("node deleted=%d\n",temp->data);
       free(temp);
       temp1->next=head;
       return(head);
   }
}
void display(struct node *head)
{
    if(head==NULL)
            {
                printf("linked list is empty---cant delete\n");
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
void search(struct node* head)
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
                 newnode->next=temp;
             }
             return(head);
}
struct node * delete_compare(struct node*head, int pos)
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
        printf("\ndeleted node is %d\n",temp->data);
        free(temp);
        return(head);
    }
    }
