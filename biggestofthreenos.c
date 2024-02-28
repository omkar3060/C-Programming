#include<stdio.h>
main()
{


float x,y,z;
printf("enter the values of three numbers=\n");
scanf("%f%f%f",&x,&y,&z);
if(x>y&&x>z)
    printf("%f is the largest number",x);
else if(y>z&&y>x)
    printf("%f is the largest number",y);
else if(z>y&&z>x)
 printf("%f is the largest number",z);

}
