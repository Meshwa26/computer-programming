#include<stdio.h>
void main()
{
    int x,y;
    printf("enter the divident and the divisor \n");
    scanf("%d%d",&x,&y);
    if(x%y==0)
    {
        printf("%d is divisible by %d \n",x,y);
    }
    else
    {
        printf("%d is not divisible by %d \n",x,y);
    }
}
