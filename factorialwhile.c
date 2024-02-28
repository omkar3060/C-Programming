#include<stdio.h>
long main()
{
    long int  n,i,f;
    f=1;
    printf("enter the value of the number=\n");
    scanf("%ld",&n);
    i=1;
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("factorial=%ld\n",f);
}

