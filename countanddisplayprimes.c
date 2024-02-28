#include<stdio.h>
main()
{
    int n,a[100];
    void read(int a[],int);

    void ip(int a[],int);
    scanf("%d",&n);
    read(a,n);
    ip(a,n);
    }
    void read(int a[],int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

    }


void ip(int a[],int x)
{ int i ,c=0,p;
  for(i=2;i<=x;i++)
  {  p=1;
      if(x%i==0)
      {
        p=0;
        break;
      }
      else
      {
          printf("%d\n",a[i]);
         c++;
      }
printf("%d\n",c);
  }

}
