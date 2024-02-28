#include<stdio.h>
main()
{
    int dig,n,x,sum=0;
    printf("enter the number=\n");
    scanf("%d",&n);
    x=n;
    while(n!=0)
    {
        dig=(n%10);

        n=(n/10);
        if(dig%2==0)
            sum=sum+dig;
    }
    printf("sum of individual even  digits of %d=%d\n",x,sum);
}

