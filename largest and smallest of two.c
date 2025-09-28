#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the two numbers \n");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("the lagest number is %d \n",a);
        printf("the smallest number is %d \n",b);
    }
    else
    {
        printf("the lagest number is %d \n",b);
        printf("the smallest number is %d \n",a);
    };
}
