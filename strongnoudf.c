#include<stdio.h>
int main()
{
    int n,res,x,sum;
    int strong(int);
    scanf("%d",&n);
    x=n;
    res=strong(n);
    if(x==res)
    printf("YES\n");
    else
        printf("NO\n");
}
int strong(int n)
{
    int sum=0,f=1,j=1;
    float dig;
    while(n!=0)
    {
       dig=(n%10);
       f=1;
       for(j=1;j<=dig;j++)
       {
           f=f*j;
       }
      sum=sum+f;
        n=(n/10);
    }
    return sum;
}
