#include<stdio.h>
main()
{
    int n,a[100];
    void read(int*,int);
    void display(int*,int);
    void s(int *,int);
    int *p;
    p=a;
    scanf("%d",&n);
    read(a,n);
    display(a,n);
    s(a,n);
}
void read(int *m,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",m);
        m++;
    }
}
void display(int *m,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",*m);
        m++;
    }
}
void s(int *m,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+*m;
        m++;
    }
    printf("%d\n",sum);
}


