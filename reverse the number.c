#include<stdio.h>
void main()
{
    int n,x=0;
    printf("enter the number");
    scanf("%d",&n);

    while(n!=0)
    {
        int t=n%10;
        x=x*10+t;
        n=n/10;
    }
    printf("reverse of number is %d",x);
}
