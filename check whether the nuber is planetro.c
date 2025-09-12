#include<stdio.h>
void main()
{
    int n,m,x=0;
    printf("enter the number");
    scanf("%d",&n);
    n=m;

    while(n!=0)
    {
        int t=n%10;
        x=x*10+t;
        n=n/10;
    }
    if(m==x)
    {
        printf("palindrome");
    }
    else
    {
        printf("not the palindrom");
    }

}

