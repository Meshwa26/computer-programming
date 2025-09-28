#include<stdio.h>
void main()
{
    int n,c=0;
    printf("enter a number");
    scanf("%d",&n);

    if(n==0)
    {
        c=1;

    }
    else
    {
        if (n<0)
        {
            n=-n;
        }
        while(n>0)
        {
            n/=10;
            c++;
        }
    }
    printf("number of digits %d \n ",c);
}
