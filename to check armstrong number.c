#include<stdio.h>
int main()
{
    int n,o,r,s=0;
    printf("enter the number \n");
    scanf("%d",&n);

    o=n;
    while(n!=0)
    {
        r=n%10;
        s+=r*r*r;
        n/=10;
    }
     if(s==o)
     {
         printf("%d is an armstrong number \n",o);
     }
     else
     {
         printf("%d is not an armstrong number \n",o);
     }
}
