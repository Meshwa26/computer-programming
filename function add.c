#include<stdio.h>
void add()
{
    int a,b,sum=0;
    printf("enter the two numbers \n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("the sum is %d ",sum);
}
void main()
{
    add();
}
