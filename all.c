#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter two number \n");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("sum is %d \n",c);

    int x,y,z;
    printf("enter two number \n");
    scanf("%d %d",&x,&y);
    z=x-y;
    printf("subtractiond is %d \n",z);

    int p,q,r;
    printf("enter two numbers \n");
    scanf("%d %d",&p,&q);
    r=p*q;
    printf("multiplication is %d \n",r);

    float m,n,o;
    printf("enter the number \n");
    scanf("%f %f",&m,&n);
    o=m/n;
    printf("division is %f \n",o);
}
