#include<stdio.h>
main()
{
    int dig,n,x,sum=0,c=0;
    printf("enter the number=\n");
    scanf("%d",&n);
    x=n;
    while(n!=0)
    {
        dig=(n%10);
        sum=sum+dig;
        n=(n/10);
        if(dig==4)
            c++;
    }
    printf("sum of individual digits of %d=%d\n",x,sum);
    printf("%d\n",c);
}
