#include<stdio.h>
void main()
{
    int x=0,i;
    for(i=1;i<=100;i++)
    {
        if(i%13==0)
        {
            x=x+i;
        }


    }
    printf("the sum of divisible of 13 in range of 1 to 100 is %d \n",x);
}
