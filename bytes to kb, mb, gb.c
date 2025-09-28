#include<stdio.h>
void main()
{
    float a,b,x,y;
    printf("enter bytes \n");
    scanf(" %f",&a);
    b=a*0.001;
    printf("value in kb is %f \n",b);


    x=b*0.001;
    printf("value in mb is %f \n",x);


    y=x*0.001;
    printf("value in gb is %f \n",y);

}

