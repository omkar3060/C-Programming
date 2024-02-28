#include<stdio.h>
main()
{
    int x;
    printf("enter the value of x=\n");
    scanf("%d",&x);
    if(x%7==0)
        printf("%d is divisible by 7",x);
    else
        printf("%d is not divisible by 7",x);
}
