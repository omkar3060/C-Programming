#include<stdio.h>
main()
{
    int n;
    void reverse(int);
    printf("enter the number=\n");
    scanf("%d",&n);
    reverse(n);
}
void reverse(int n)
{
    float rev;
    float dig;
  while(n!=0)
  {
      dig=n%10;
      rev=rev*10+dig;
      n=n/10;
  }
  printf("reverse of a number=%f\n",rev);
}




