#include<stdio.h>
void main()
{
    int x,r=0;
    printf("enter  the number \n");
    scanf("%d",&x);

    while(x!=0)
    {
        int n=x%10;
        r=r*10+n;
        x=x/10;
    }
    printf("reversed number %d \n",r);
}
