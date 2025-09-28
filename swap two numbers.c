#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter two numbers \n");
    scanf("%d%d",&a,&b);
    printf("before swaping %d %d \n",a,b);
    c=a;
    a=b;
    b=c;

    printf("after swaping %d %d \n",a,b);
}

