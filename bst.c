#include<stdio.h>
#include<stdlib.h>
struct tree
{
    int data;
    struct tree *left,*right;
}*root=NULL;
typedef struct tree TREE;
TREE* insert_into_bst(TREE *root,int data)//call by value
{
    TREE *newnode;
    newnode=(TREE *)malloc(sizeof(TREE));//malloc returns void ptr
    if(newnode==NULL)
    {
        printf("Heap is out of memory\n");
        return root;//if we return NULL,entire tree which was previously created is lost.
    }
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    if(root==NULL)
    {
        printf("Root created\n");
        root =newnode;
        return root;             //or newnode
    }
    TREE *curr=root,*parent=NULL;
    while(curr!=NULL)
    {
        parent=curr;
        if(newnode->data<curr->data)
        {
            curr=curr->left;
        }
        else
        {
            curr=curr->right;
        }
    }
        if(newnode->data<parent->data)
        {
            parent->left=newnode;
        }
        else
            parent->right=newnode;
        return root;
}
TREE* Rinsert(TREE *root,int item)
{
    if(root == NULL)
    {
        root = (TREE*)malloc(sizeof(TREE));
        root->left = root->right = NULL;
        root->data = item;
        return root;
    }
    else
    {
        if(item < root->data )
            root->left = Rinsert(root->left,item);
        else
            root->right = Rinsert(root->right,item);
        return(root);
    }
}
void inorder(TREE *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}
void preorder(TREE *root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(TREE *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
    }
}
TREE *delete_from_bst(TREE *root,int data)
{
    if(root==NULL)
    {
        printf("Tree is empty\n");
        return root;
    }
    TREE *curr=root,*parent=NULL,*succ,*p;
    while(curr!=NULL&&curr->data!=data)
    {
        parent=curr;
        if(data<curr->data)
            curr=curr->left;
        else
            curr=curr->right;
    }
    if(curr==NULL)
    {
        printf("Item not in tree\n");
        return root;
    }
    if(curr->left==NULL)
    {
        p=curr->right;
    }
    else if(curr->right==NULL)
        p=curr->left;
    else{
        succ=curr->right;
        while(succ->left!=NULL)
            succ=succ->left;
        succ->left=curr->left;
        p=curr->right;
    }
    if(parent==NULL)
    {
        free(curr);
        return p;
    }
    if(curr==parent->left)
        parent->left=p;
    else
        parent->right=p;
    free(curr);
    return root;
}
void print(TREE *root)
{
    int count=0;
    printf("Indegree of root node is always zero\n");
    if(root->left!=NULL&&root->right!=NULL)
       count=2;
    else if((root->left==NULL&&root->right!=NULL)||(root->left!=NULL&&root->right==NULL))
       count=1;
    else
        count=0;
    printf("Outdegree of root node is %d\n",count);

}
int count_edges(TREE *root,int *p)
{
     if(root!=NULL)
    {
        count_edges(root->left,p);
        *p=*p+1;
        count_edges(root->right,p);
    }
    return *p;
}
void inorder_succ(TREE *root,int a[100])
{
    static int k=0;
   if(root!=NULL)
    {
        inorder_succ(root->left,a);
        a[k++]=root->data;
        inorder_succ(root->right,a);
    }
}
int print_less(TREE *root,int k)
{
    static int count;
    count=0;
   if(root!=NULL)
    {
        print_less(root->left,k);
        if(root->data>k)count++;
        print_less(root->right,k);
    }
    return count;
}
void min(TREE *root)
{
    TREE *temp=root;
    while(temp->left!=NULL)
        temp=temp->left;
    printf("%d\n",temp->data);
}
int count_ext(TREE *root)
{
  static int count=0;
  if(root!=NULL)
    {
        count_ext(root->left);
        if(root->right==NULL&&root->left==NULL)count++;
        count_ext(root->right);
    }
    return count;
}
int count_search(TREE *root,int data)
{
     int count=0;
    if(root==NULL)
    {
        printf("Tree is empty\n");
        return -1;
    }
    TREE *curr=root,*parent=NULL;
    while(curr!=NULL&&curr->data!=data)
    {
        parent=curr;
        if(data<curr->data)
            curr=curr->left;
        else
            curr=curr->right;
        count++;
    }
    if(curr==NULL)
    {
        printf("Item not in tree\n");
        return -1;
    }
    else
        return count;
}
TREE *bin_tree_search_1(TREE *t,int key)
{
    while(t!=NULL)
      {
    if(key==t->data)
       return t;
    else if (key<t->data)
        t=t->left;
    else
        t=t->right;
      }
return NULL;
}
TREE *search(TREE *root,int key)
{
if (root == NULL || root->data == key)
       return root;

    // Key is greater than root's key
    if (root->data < key)
       return search(root->right, key);

    // Key is smaller than root's key
    return search(root->left, key);
}
int NodesAtLevel(TREE *ptr, int level)
{
        if(ptr==NULL)
                return 0;
        if(level==0)
                return 1;
        return NodesAtLevel(ptr->left,level-1) + NodesAtLevel(ptr->right,level-1);
}
TREE* removeOutsideRange(TREE *root, int k)
{
   // Base Case
   if (root == NULL)
      return NULL;
   // First fix the left and right subtrees of root
   root->left =  removeOutsideRange(root->left, k);

   // Now fix the root.  There are 2 possible cases
   // for root 1.a) Root's key is smaller than min
   // value (root is not in range)
   if (root->data < k)
   {
       TREE *rChild = root->right;
      free(root);
       return rChild;
   }
   return root;
}
int Height(TREE *p)
{
    int x,y;
    if(p==NULL)
        return 0;
    x=Height(p->left);
    y=Height(p->right);
    return x>y?x+1:y+1;
}
TREE *InPre(TREE *p)
{
    while(p&&p->right!=NULL)
    {
        p=p->right;
    }
    return p;
}
TREE *InSucc(TREE *p)
{
    while(p&&p->left!=NULL)
    {
        p=p->left;
    }
    return p;
}
TREE *Delete(TREE *p,int key)
{
    TREE *q;
    if(p==NULL)
        return NULL;
    if(p->left==NULL&&p->right==NULL)
    {
        if(p==root)
            root=NULL;
        free(p);
        return NULL;
    }
    if(key<p->data)
        p->left=Delete(p->left,key);
    else if(key>p->data)
        p->right=Delete(p->right,key);
    else
    {
        if(Height(p->left)>Height(p->right))
        {
            q=InPre(p->left);
            p->data=q->data;
            p->left=Delete(p->left,q->data);
        }
        else
        {
            q=InSucc(p->right);
            p->data=q->data;
            p->right=Delete(p->right,q->data);
        }
    }
    return p;
}
int main()
{
    TREE *t;//Without *,address can't be stored,12 bytes memory gets allocated.
    int choice=0,i=0,index=-1;
    int c=0,*pa=&c,a[100],count=0;                  //choice variable
    int data=0;                      //data variable
    while(1)
    {
       printf("MENU\n");
       printf("1-Insert into BST\n");
       printf("2-Inorder\n3-Preorder\n4-Postorder\n");
       printf("5-Delete from BST\n");
       printf("6-Count of number of edges\n");
       printf("7-Address of root node\n");
       printf("8-Inorder predecessor\n9-Inorder successor\n10-Number of nodes having value greater than k\n11-Minimum valued item in tree\n");
       printf("12-Number of external nodes\n13-Number of comparisons made to search a key\n14-Iterative Tree Search\n15-Recursive Tree Search\n");
       printf("16-Number of nodes at any level\n");
       printf("Any other number-Exit\n");
       printf("Enter your Choice\n");
       scanf("%d",&choice);
    //fflush(stdin)
       switch(choice)
       {
       case 1: printf("Enter the data\n");
               scanf("%d",&data);
               root=insert_into_bst(root,data);
               break;
       case 2: if(root==NULL)
                   printf("Tree is empty\n");
               else
                    inorder(root);
               break;
       case 3: if(root==NULL)
                   printf("Tree is empty\n");
               else
                    preorder(root);
               break;
       case 4: if(root==NULL)
                   printf("Tree is empty\n");
               else
                    postorder(root);
               break;
       case 5: printf("Enter the data to delete\n");
               scanf("%d",&data);
               root=delete_from_bst(root,data);
               break;
       case 6:if(root==NULL)
                   printf("Tree is empty\n");
               else
               {
                   *pa=0;
         c=count_edges(root,pa);
         }
       printf("%d\n",c-1);
       break;
       case 7:printf("%d\n",&root);
       break;
       case 8:if(root==NULL)
                   printf("Tree is empty\n");
               else
               {
                   scanf("%d",data);
                //inorder_pred(root,data);
               }
               break;
       case 9:if(root==NULL)
                   printf("Tree is empty\n");
               else
                {
                    printf("Enter data\n");
                    scanf("%d",&data);
                    inorder_succ(root,a);
                    *pa=0;
                    c=count_edges(root,pa);
                    for(i=0;i<c;i++)
                        {
                            if(data==a[i])
                                index=i;
                        }
                        if((index+1)<=c-1)
                        printf("%d\n",a[index+1]);
                        else
                            printf("No successor found\n");
                }
               break;
      case 10:if(root==NULL)
                   printf("Tree is empty\n");
               else
                {
                    scanf("%d",&data);
                    printf("%d\n",print_less(root,data));
                }
                break;
      case 11:min(root);
      break;
      case 12:printf("Number of external nodes=%d\n",count_ext(root));
      break;
      case 13:printf("Enter item to be searched\n");
      scanf("%d",&data);
      printf("%d\n",count_search(root,data));
      break;
      case 14:printf("Enter item to be searched\n");
              scanf("%d",&data);
              t=bin_tree_search_1(root,data);
              if(t==NULL)printf("Item not found\n");
              else
                printf("Found %d\n",t->data);
              break;
      case 15:printf("Enter item to be searched\n");
              scanf("%d",&data);
              t=search(root,data);
              if(t==NULL)printf("Item not found\n");
              else
                printf("Found %d\n",t->data);
              break;
      case 16:printf("Number of nodes at level 1 are %d\n",NodesAtLevel(root,1));
      break;
      case 17:scanf("%d",&data);
      removeOutsideRange(root,data);
      break;
      case 18:Delete(root,50);             //RECURSIVELY
      break;
      default:printf("Terminating code\n");
             exit(0);
             break;
       }
    }
}
