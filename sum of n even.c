#include<stdio.h>
void main()
{
    int i,n,sum=0,even=2;
    printf("enter the number \n");
    scanf("%d",&i);

    for(n=1;n<=i;n++)
    {
        sum+=even;
        even+=2;
    }

    printf("%d \n",sum);

}


