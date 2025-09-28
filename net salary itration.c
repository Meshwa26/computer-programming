#include<stdio.h>
void main()
{
    float s,g,a,d;
    printf("enter the value of gross salary \n");
    scanf("%f",&g);


    if(g>10000)
    {
        s=g+0.1*g-0.03*g;
        printf("the value of net salary is %f \n",s);
    }
    else if(g>5000)
    {
        s=g+0.07*g-0.02*g;
        printf("the value of net salary is %f \n",s);
    }






}

