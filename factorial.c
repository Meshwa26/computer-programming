#include<stdio.h>
void main()
{
    int i,n,f=1;
    printf("enter the number \n");
    scanf("%d",&i);

    for(n=1;n<=i;n++)

    {
        f*=n;
    }

        printf("%d \n",f);

}

