#include<stdio.h>
main()
{
    float a,b,c,s,area;
    printf("enter the values for a,b,c=\n");
    scanf("%f%f%f",&a,&b,&c);
    s=a+b+c/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of the triangle=%f\n",area);
}
