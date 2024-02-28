#include<stdio.h>
#include<math.h>
main()
{float bmi,w,h;
printf("enter the values for height and weight=\n");
scanf("%f%f",&h,&w);
bmi=w/pow(h,2);
if(bmi<18.5)
{
    printf("the person is under weight");
}
else if(bmi>=18.5&&bmi<=24.9)
{
    printf("the person is normal");
}
else if(bmi>=25&&bmi<=29.9)
{
    printf("the person is  over weight");

}
else if(bmi>=30)
{
    printf("the person is obese");
}




}

