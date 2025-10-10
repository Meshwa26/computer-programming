#include<stdio.h>
void sub()
{
    int a,b,sub=0;
    printf("enter the two numbers \n");
    scanf("%d%d",&a,&b);
    sub=a-b;
    printf("the sum is %d ",sub);
}
void main()
{
    sub();
}

