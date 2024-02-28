#include<stdio.h>
#include<string.h>a
int main()
{
    char a[100],b[100];
    scanf("%s%s",a,b);
    int x=strlen(a),y=strlen(b),i,j;
    for(i=0;i<=(x-y);i++)
    {
        j=0;
        while(j<y&&a[i+j]==b[j])
         {
            j=j+1;
         }
        if(j==y)
            {
                printf("%d",i);
                break;
            }
    }
}
