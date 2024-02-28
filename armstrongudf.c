#include<stdio.h>
main()
{
    int n;
    void armstrong(int n);
    printf("enter the number=\n");
    scanf("%d",&n);
    armstrong(n);
}
void armstrong(int n)
{
    int sum=0,x;
    x=n;
    float dig;
    while(n!=0)
    {
        dig=(n%10);
        sum=sum+pow(dig,3);
        n=(n/10);
    }
    if(x==sum)
        printf("it is an armstrong number\n");
    else
        printf("it is  not an armstrong number\n");


}
