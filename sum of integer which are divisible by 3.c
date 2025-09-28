#include<stdio.h>
void main()
{
    int i,sum=0;
    for(i=1;i<=100;i++)
    {
        if(i%3==0)
        {
            sum+=i;
        }

    }
    printf("sum of integer which are divisible by 3 %d \n",sum);


}

