#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("enter the number \n");
    scanf("%d",&i);

    for(n=1;n<=i;n++)

    {
        sum=n+sum;
    }
    printf("%d \n",sum);


}


