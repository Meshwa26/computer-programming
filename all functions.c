#include<stdio.h>
void add()
{
    sum=a+b;
}
void sub()
void mul()
void div()
void main()
{
    int a,b,sum=0,s=0,m=0;
    float d=0;

    printf("enter the two number \n");
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    printf("sum is %d \n",sum);

    printf("enter the two number \n");
    scanf("%d%d",&a,&b);
    s=sub(a,b);
    printf("sum is %d \n",s);

    printf("enter the two number \n");
    scanf("%d%d",&a,&b);
    m=mul(a,b);
    printf("sum is %d \n",m);

    printf("enter the two number \n");
    scanf("%d%d",&a,&b);
    d=div(a,b);
    printf("sum is %f \n",d);



}
