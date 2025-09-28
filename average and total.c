#include<stdio.h>
void main()
{
    float x,y,z,t,a;
    printf("enter three number \n");
    scanf("%f %f%f",&x,&y,&z);
    t=x+y+z;
    a=t/3;
    printf("the total value is %f \n",t);
    printf("the average value is %f \n",a);
}
