#include<stdio.h>
int modularexpo(int b,int n,int m)
{
    int i=0,k,a[100],x=1,power=b%m;
    while(n>0)
    {
        a[i++]=n%2;
        n=n/2;
    }
    k=i;
    for(i=0;i<k;i++)
    {
        if(a[i]==1)
            x=(x*power)%m;
        power=(power*power)%m;
    }
    return x;
}
int main()
{
    int b,n,m;
    printf("Enter the values of b,n,m=\n");
    scanf("%d%d%d",&b,&n,&m);
    printf("The value of (b^n)mod m is %d\n",modularexpo(b,n,m));
}
