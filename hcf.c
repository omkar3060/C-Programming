#include<stdio.h>
main()
{
    int a,b,x,y,t,gcd,lcm;
    scanf("%d%d",&x,&y);
    a=x;
    b=y;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    gcd=a;
    lcm=(x*y)/gcd;
    printf("%d ",gcd);
    printf("%d ",lcm);
}
