#include<stdio.h>
void main()
{
    int n,s=0,x;

    printf("enter the number \n");
    scanf("%d",&n);

    if(n<0)
    {
        n=-n;
    }
    while(n>0)
    {
        x=n%10;
        s+=x;
        n/=10;
    }
    printf("sum of digits %d \n",s);
}
