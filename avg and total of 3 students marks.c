#include<stdio.h>
void main()
{
    float x,y,z,t,a;
    printf("enter the marks of three subjects \n");
    scanf("%f%f%f",&x,&y,&z);
    if(x<35||y<35||z<35)
    {
        printf("result is fails");
    }
    else
    {
        t=x+y+z;
        printf("the total marks are  %f \n",t);
        a=t/3;
        printf("the percentage achived is %f \n",a);
        if(a>=70)
            printf("result is distinctions \n");
        else if(a>=60)
            printf("result is first class \n");
        else if(a>=50)
            printf("results is second class \n");
        else
            printf("results is third class \n");

    }
}

