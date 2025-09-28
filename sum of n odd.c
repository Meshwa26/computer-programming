#include<stdio.h>
void main()
{
    int i,n,sum=0,odd=1;
    printf("enter the number \n");
    scanf("%d",&i);

    for(n=1;n<=i;n++)
    {
        sum+=odd;
        odd+=2;
    }

    printf("%d \n",sum);

}



