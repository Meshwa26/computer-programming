#include<stdio.h>
void main()
{
    int n,x;

    printf("enter the number \n");
    scanf("%d",&n);

    printf("seperated digites are \n");
    while(n>0)
    {
        x=n%10;
        printf("%d",x);
        n=n/10;
        if(n>0)
        {
            printf(",");
        }
    }
    printf("\n");
}
