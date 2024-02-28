#include<stdio.h>
#include<stdlib.h>
int main(){
int a[100000],n,i;
scanf("%d",&n);
    if(n<0)
    {
        printf("Invalid\n");
    }
    else if(n==0)
    printf("0\n");
    else
    {
for(i=0;n>0;i++)
{
a[i]=n%2;
n=n/2;
}
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
}
    }
}
