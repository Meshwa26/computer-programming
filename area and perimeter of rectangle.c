#include<stdio.h>
void main()
{
    float a,p,l,b;
    printf("enter the breath of rectangle \n");
    scanf("%f",&b);
    printf("enter the lenght of rectangle \n");
    scanf("%f",&l);

    a=l*b;
    p=(l+b)*2;

    printf("the value of area %f \n",a);
    printf("the value of perimeter %f \n",p);
}

